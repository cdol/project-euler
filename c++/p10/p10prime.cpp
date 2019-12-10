#include <iostream>

using namespace ::std;

bool isprime(int x)
{
	for (int j = 2; j*j <= x; j++) {
		if (x % j == 0) return false;
	}
	return true;
}

int main()
{
	bool ende;
	long int summe = 0;
	for (int i = 2; ende == false; i++) {
		if (isprime(i) == true) {
			summe += i;
			if (i > 2000000) {
				summe -= i;
				ende = true;
			}
		}
	}
	cout << summe << endl;
}
