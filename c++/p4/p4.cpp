#include <iostream>
#include <map>
#include <fstream>

#include "pali.hpp"

using namespace ::std;

int main()
{
	static map<int, int> memo;
	ofstream textdatei;
	textdatei.open ("memo.txt");
	
	int x, y = 800;
	for (x = 800; x <1000; x++) {
		for (y = 800; y <1000; y++) {
			int z = 1000*x + y;
			memo[z] = x*y;
			if (palindrome(memo[z]) == true) {
				textdatei << z / 1000 << "	" << z % 1000 << "	" << memo[z] << endl;
			}
		}
	}
	textdatei.close();
	return 0;
}
