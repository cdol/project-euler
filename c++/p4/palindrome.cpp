#include <iostream>
//#include <string>
#include "pali.hpp"

using namespace ::std;

bool palindrome(int a)
{
	int d = getdigits(a);
	if 		((a / 1 % 10) == (a / 100000 % 10) 
		and (a / 10 % 10 == a / 10000 % 10) 
		and (a / 100 % 10 == a / 1000 % 10)) {
			return true;
	}
	else 
		return false;
}/*
int main()
{
	int x;
	string s;
	cout << "Welche Zahl soll auf Palindrom geprüft werden? ";
	cin >> x;
	if (palindrome(x) == true) s = "Zahl ist Palindrom";
	else s = "Zahl ist kein Palindrom";
	cout << s << endl;	
}
*/
