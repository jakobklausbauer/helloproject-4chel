//mein hallo-programm

#include <iostream>
#include <string>
#define verwende using
#define Namensbereich namespace
#define standard std
#define Ganzzahl int
#define Haupteinstiegspunkt main

verwende Namensbereich standard;

#define schreib cout
#define Zeilenende endl
#define gibZurueck



Ganzzahl Haupteinstiegspunkt()
{
	schreib << "Hello World!" << Zeilenende;
	string name;
	cin >> name;
	schreib << "Hello Liebe(r) " << name << "!" << Zeilenende;
	gibZurueck 0;
}
