#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
	float a,b,X0;
	
	cout << "Program do obliczania miejsca zerowego funkcji liniowej." << endl << endl;
	
	cout << "Wpisz wartosc wspolczynnika kierunkowego a: " << endl;
	cin >> a;
	cout << "Wpisz wartosc wyrazu wolnego funkcji: " << endl;
	cin >> b;
	
	if (a==0)
	{
	 cout << "Nie istnieje miejsce zerowe funkcji." << endl;
	 return 0;
	}
	
	if (b==0)
	{ 
	 cout << "Funkcja ma nieskonczenie wiele miejsc zerowych." << endl;
	 return 0;
	}
	   
	X0 = ((-b)/a);
	cout << "Miejsce zerowe funkcji wynosi: " <<X0<< endl;  
	
	return 0;
}
