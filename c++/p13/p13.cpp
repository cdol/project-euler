#include <iostream>	//include standart input/output stream
#include <fstream>	//include fstream to read and write from/to files
#include <string> //include string
#include <math.h> //include pow

using namespace ::std;

int main() 
{
	ifstream import;	//stellt die Datei 'import' zum input bereit (if) [output mit of, beides fstream]
	import.open("data.txt");	//öffnet die Datei import, systemname data.txt
	
	string line;	//erstellt die string variable line für den späteren import
	char characters[12]; //zwischenspeicher für string->char array
	long long int a = 0, sum = 0;	//speicher einzelne zahlen/summe
	double b = 0;	//hilfsvariable
		
	//Import, conversion, calculation
	for (int j = 0; j <= 99; j++) { //loop für 100 zeilen
		getline(import, line);	//importiert die erste nichteingelesene zeile
		line.copy(characters, 12); //kopiert die ersten 12 einträge in den char array	
		a = 0; //resettet a für jede neue zeile
		//Umwandlung von char array zu long long int
		for (int i = 0; i <= 11; i++) {		//loop für die ersten 12 zahlen (es sind nur die ersten 10 stellen der zahl gefragt, d.h. nur 10^10 * 100 = 10^12 -> 12 relevante stellen)					
			b = characters[i] - '0'; //ASCII zu INT unwandlung, auslesen der i-ten stelle			
			a += b*pow(10, 11-i); //'hinzufügen' der i-ten Stelle zu a
		}
		sum += a; // addiert die einzelnen a's zur summe zusammen	
		cout << a << '\t' << sum << endl;
	}	
	import.close();	//schließt die import datei	
	cout << "------->" << sum << "<-------" <<  endl;
	
	return 0;
}
