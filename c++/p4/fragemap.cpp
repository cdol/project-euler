#include <iostream>
#include <map>
#include <cmath>
#include <fstream>

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
			textdatei << z / 1000 << "	" << z % 1000 << "	" << memo[z] << endl;
		}
	}
	textdatei.close();
	return 0;
}

/*
int main()
{
	static map<int, int, int> memo; //3 Einträge anstatt 2
	ofstream textdatei;
	textdatei.open ("memo.txt");
	
	int x, y = 800;
	for (x = 800; x <1000; x++) {
		for (y = 800; y <1000; y++) { 
			// int z
			memo[x,y] = x*y; // memo[x,y] anstatt memo[z]
			textdatei << z << "	" << memo[x,y] << endl; // memo[x,y] anstatt memo[z]
		}
	}
	textdatei.close();
	return 0;
}
*/
