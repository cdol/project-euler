#include <iostream>
#include <map>

using namespace ::std;
	

unsigned long long int fib(unsigned int n)
{
	static map<unsigned int, unsigned long long int> memo;
	if (n <= 1) {
		memo[n] = n;
		return memo[n];
	}
	if (n > 92) {
		cout << "Maximal bis zur 92. Fibonacci Zahl" << endl;
		n = 92;
	}
	if (memo[n] > 0) {
		return memo[n];
	}
	else {
		memo[n] = fib(n-1) + fib(n-2);
		return memo[n];
	}
	return -1;
}

int main()
{
	unsigned int x;
	cout << "Die wievielte Fibonacci Zahl?";
	cin >> x;
	cout << fib(x) << endl;
	return 0;
}
