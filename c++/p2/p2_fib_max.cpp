#include <iostream>
#include <map>

using namespace ::std;

int fib_max(unsigned int n)
{
	static map<unsigned int, unsigned long long int> memo;
	static int summe = 0; //gerade Zahlen
		
	memo[0] = 0;
	cout << "Fib-Nr 0 ist " << memo[0] << endl;
	memo[1] = 1;
	cout << "Fib-Nr 1 ist " << memo[1] << " Summe " << summe << endl;
	
	for (int i = 2; memo[i-1] < n; i++) {
		memo[i] = memo[i-1] + memo[i-2];
		if (memo[i] >= n) {
			memo[i] = 0;
			break;
		}
		if (memo[i] % 2 == 0) {
			summe += memo[i];
		}
		cout << "Fib-Nr " << i << " ist " << memo[i] << " Summe " << summe << endl;
	}
	return summe;
}


int main()
{
	unsigned int x;
	cout << "Die Fibonacci-Zahlen kleiner welcher Zahl sollen bestimmt werden? ";
	cin >> x;
	cout << fib_max(x) << endl;
	return 0;
}
