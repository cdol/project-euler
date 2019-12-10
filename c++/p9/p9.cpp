#include <iostream>

using namespace ::std;

int main()
{
	int a = 1, b = 1;
	for (a = 1; a < 500; a++) {
		for (b = 2; b < 500; b++) {
			if (1000000 + 2*a*b == 2000*a + 2000*b) {
				cout << "Lösung gefunden! a = " << a << " ,b = " << b << " ,c = " << 1000-a-b << endl;
				int mult = a*b*(1000-a-b);
				cout << "abc = " << mult << endl;
			}
		}
	}
}
