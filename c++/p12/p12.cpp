#include <iostream>
#include <map>

using namespace ::std;

long long int triangular(long long int a)
{
	a = a*(a+1)/2 ;
	return a;	
}

int divisors(long long int b)
{
	int div = 0;
	for (int i = 1; i*i <= b; i++) { //Teiler entstehen in Paaren, a*b=c mit a=2 dann folgt auch b ist divisor von c und zwingend b > sqrt(c) für a < sqrt(c)
		if (b % i == 0) {
				div += 2;
		}
	}
	return div;
}

int main()
{	
	long long int x;
	for (x = 1; divisors(triangular(x)) <= 500; x += 1) {
		cout << divisors(triangular(x)) << endl;		
	}
	cout << x << '\t' << '\t' << triangular(x) << '\t' << divisors(triangular(x)) << endl;
}
