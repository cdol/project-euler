//#include <iostream>

//using namespace ::std;

int getdigits(int n)
{
	int number_of_digits = 0;
	do {
		++number_of_digits; 
		n /= 10;
	} while (n != 0);
	return number_of_digits;
}
/*
int main()
{
	int x;
	cout << "Anzahl Stellen welcher Zahl? ";
	cin >> x;
	cout << "Die Anzahl Stellen beträgt " << getdigits(x) << endl;	
}
*/
