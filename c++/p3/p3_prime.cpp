#include <iostream>
#include <fstream>
#include <cmath>
#include <map>
#include <string>

using namespace ::std;

static map<long long int, long long int> memo;

bool isPrime(int zahl)
{
	if (zahl < 2) return false;
	if (zahl == 2) return true;
	for (long long int i=2; (i*i) <= zahl; i++) {
		if (zahl % i == 0) return false; //Modulus 0 d.h. teilbar mit ganzzahligem Rest
	}
	return true;
}


long long int primesmaller(long long int zahl2)
{
	long long int zaehler = 1;
	memo[1] = 2;
	long long int i = 2;
	if (zahl2 == 1) return memo[zahl2];
	while ((i*i) < zahl2) { //sqrt x reicht für Zerlegung
		i++;
		if (isPrime(i) == true) {
			zaehler++;
			memo[zaehler] = i;
		}
	}
	return 0;
}

bool primefactor(long long int a, long long int b)
{
	if (a % b == 0) return true;
	else return false;
}

int main() 
{
	long long int x;
	string s1;
	ofstream myfile;
	
	cout << "Primzahlzerlegung von? ";
	cin >> x;
	primesmaller(x);
	myfile.open ("p3_primes.txt");
	for (long long int i = 1; i <= memo.size(); i++) {
		myfile << "Primzahl-Nr " << i << " ist " << memo[i] << endl;
	}
	for (long long int j = memo.size(); j >= 1; j--) {
		if (primefactor(x, memo[j]) == 1) {
			s1 = " wahr";			
		}
		else s1 = " falsch";
		myfile << memo[j] << " zerlegt " << x << s1 << endl;
	}
	myfile.close();
	return 0;
}
