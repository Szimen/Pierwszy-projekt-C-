#include <iostream>
#include <math.h>

using namespace std;
int main ()
{
	float a,b,c;
	cout << " Podaj wartosc Ax: " << endl;
	cin >> a;
	cout << "Podaj wartosc By: " << endl;
	cin >> b;
	cout << "Podaj wartosc C: " << endl;
	cin >> c;
	if (a==0)
	{
		cout << "Miejsce zerowe nie wystepuje." << endl;
		return 0;
	}
	if (b==0)
	{
		cout << "Funkcja ma nieskonczenie wiele miejsc zerowych." << endl;
		return 0;
	}
	if (c==0)
	{
		cout << "Miejsce zerowe funkcji liniowej wynosi: " << ((-b)/a) << endl;
	    return 0;
	}
	cout << "Miejsce zerowe funkcji liniowej wynosi: " << ((-c)/b) << endl;
	return 0;
	
}
