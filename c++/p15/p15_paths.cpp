#include <iostream>

using namespace ::std;


int path(int a, int b, int& wege) //Deklariere funktion und Zählvariable für mögliche Wege
{
	cout << "a=" << a << " b=" << b << endl;
	if (a == 0 and b != 0) {			//Setzt Wege += 1 wenn am Rand
		//cout << "Bin in erster if-Clause gelandet!" << endl;
		wege++;
		//cout << "Anzahl Wege " << wege << endl;
		return 0;
	}
	if (a != 0 and b == 0) {			//Setzt Wege += 1 wenn am Rand
		//cout << "Bin in zweiter if-Clause gelandet!" << endl;
		wege++;
		//cout << "Anzahl Wege " << wege << endl;
		return 0;
	}		
	else {								//Zerlegt Knotenpunkt in die beiden vorherigen
		//cout << "Bin in else-Clause gelandet!" << endl;
		path(a -1, b, wege);
		path(a, b -1, wege);	
		return 0;
	}
	return 0;
}


int main()
{
	int x, y;
	int wege = 0;
	cout << "Ursprung: x=0 , y=0" << endl;
	cout << "Zu welchem Ort sollen die Pfade berechnet werden?" << endl;
	cout << "X-Koordinate? x=";
	cin >> x;
	cout << "Y-Koordinate? y=";
	cin >> y;
	cout << "Berechne Pfad zu x=" << x << ", y=" << y << endl;
	path(x, y, wege);
	cout << "Die Anzahl der möglichen Wege beträgt " << wege << endl;	
	return 0;
}
