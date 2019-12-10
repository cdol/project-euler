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
	int zahl, zaehler = 0;
	for (int i = 2; ende == false; i++) {
		if (isprime(i) == true) {
			zaehler++;
			zahl = i;
		}
		if (zaehler == 10001) ende = true;
	}
	cout << zahl << endl;
}
