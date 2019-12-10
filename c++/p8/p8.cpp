#include <iostream>
#include <fstream>
#include <string>

using namespace ::std;

int main()
{
	//Einlesen von der TXT Datei als STRING
	string line;					//holds a string
	ifstream zahlen;				//import from file named zahlen
	zahlen.open("data.txt");		//open zahlen, system name data.txt
	getline (zahlen,line);			//Extracts characters from is and stores them into str until the newline character '\n' is found
	zahlen.close();
	
	
	//Umwandeln von STRING zu ARRAY of CHAR
	int los; 						//hold the number of characters in the string
	los=line.length();				//find the number of characters in the string and save it in length of string
	char characters[los];			//initialize array 
	line.copy(characters, los);		//fills array in order with characters from the string
	
	
	//ARRAY of CHAR in einzelne INTEGER umwandeln danach Rechnung und Vergleichen
	long int a, b, c, d, e, f, g, h, i, j, k, l, m;	//13 neue tolle Integer Variablen
	long int multiplikator, max = 0;			//jaaaa.... die Zahl wird so groß
	for (int zaehler = 0; zaehler < 988; zaehler++) {	//Schleife für 1000-12 Elemente des Arrays
		a = characters[0+zaehler] - '0';						//Weist a den Int wert von characters[0] zu, ASCII entspricht ohne {- '0'}
		b = characters[1+zaehler] - '0';
		c = characters[2+zaehler] - '0';
		d = characters[3+zaehler] - '0';
		e = characters[4+zaehler] - '0';
		f = characters[5+zaehler] - '0';
		g = characters[6+zaehler] - '0';
		h = characters[7+zaehler] - '0';
		i = characters[8+zaehler] - '0';
		j = characters[9+zaehler] - '0';
		k = characters[10+zaehler] - '0';
		l = characters[11+zaehler] - '0';
		m = characters[12+zaehler] - '0';
		multiplikator = a*b*c*d*e*f*g*h*i*j*k*l*m;
		if (multiplikator > max) {
			max = multiplikator;
		}
	}
	cout << "---->" << max << "<----" << endl;
	return 0;
}


//Idealerweise soll für jede Überprüfung nur eine Zahl geändert werden und nicht alle 13. 0->13 1->14 .... 12->25
