#include <iostream>

using namespace ::std;

int main()
{
	int sum1 = 0, sum2 = 0;
	for (int i = 1; i < 101; i++) {
		sum1 += i*i;
		sum2 += i;
	}
	cout << sum1 << '\t' << sum2 << endl;
	sum2 = sum2*sum2;
	cout << "Square sum2 " << sum2 << endl;
	cout << "Differenz " << sum2-sum1 << endl;
}
