#include <iostream>
#include <math.h>

using namespace std;
int main ()
{
	float a,b,c,delta;
	float x1,x2,X0l,X0k;
	
	cout << "Podaj wspolczynniki funkcji kwadratowej: " << endl;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	cout <<endl;
	
	if (a==0 & b==0)
	{
	   cout << "Brak miejsc zerowych." << endl;
	   return 0;
	}
	
	if (a==0)
	{
	   X0l = ((-c)/b);
	   cout << "To nie jest funkcja kwadratowa, tylko liniowa." << endl;
	   cout << "Miejsce zerowe funkcji wynosi: " << X0l << endl;
	   return 0;
	}
	
	delta = b*b-(4*a*c);
	
	if (delta>=0)
	{	
	   x1 = ((-b)+(sqrt(delta)))/(2*a); 
 	   x2 = ((-b)-(sqrt(delta)))/(2*a); 	
	   cout << "Miejsca zerowe wynosza odpowiednio: x1 = " << x1 << " , x2 = " << x2 << endl;
	   
	  if (delta==0)
	  {	
	    X0k = (-b/(2*a));
	    cout << "Miejsce zerowe X0 wynosi: " << X0k << endl;
	    return 0;
	  }
	  return 0;
	}    
	if (delta<0)
	    {
	    	cout << "Brak miejsc zerowych." << endl;
	    	return 0;
		}
	//FUNKCJA LINIOWA VER.(1.4)
/*	cout << " Podaj wartosc Ax: " << endl;
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
	*/
	return 0;
	
}
