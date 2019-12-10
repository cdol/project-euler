#include <iostream>

using namespace ::std;

int main()
{
	for (int x = 2*3*5*7*11*13*17*19; x < 50000000000; x += 2*3*5*7*11*13*17*19) {
		for (int i = 1; i <= 20; i++) {
			if (x % i != 0) {
				break;
			}			
			else if (i == 20 and x % i == 0) {
				cout << x << " SUCCCCCCCESSSSSSSS" << endl;
				return 0;
			}
		}
	}	
}
