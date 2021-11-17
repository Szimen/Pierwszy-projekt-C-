#include <iostream>
#include <math.h>

using namespace std;

void liniowa(float a, float b, float X0)
{
	if (a==0)
	{
	 cout << "Nie istnieje miejsce zerowe funkcji." << endl;
	 return;
	}
	
	if (b==0)
	{ 
	 cout << "Funkcja ma nieskonczenie wiele miejsc zerowych." << endl;
	 return;
	}
	   
	X0 = ((-b)/a);
	cout << "Miejsce zerowe funkcji wynosi: " <<X0<< endl;
	return;
}

void zamien_na_kanoniczne(float a, float p, float q, float& b, float& c)
{
    b = (-a*p*2);
    c = (a*p*p)+q;

}

void oblicz_ogolna(float a, float b, float c)
{
    float x1,x2,X0l,X0k,delta;
    if (a==0 & b==0)
	{
	   cout << "Brak miejsc zerowych." << endl;
	   return;
	}

	if (a==0)
	{
	   X0l = ((-c)/b);
	   cout << "To nie jest funkcja kwadratowa, tylko liniowa." << endl;
	   cout << "Miejsce zerowe funkcji wynosi: " << X0l << endl;
	   return;
	}

	delta = b*b-(4*a*c);

	if (delta>=0)
	{
        if (delta==0)
        {
            X0k = (-b/(2*a));
            cout << "Miejsce zerowe X0 wynosi: " << X0k << endl;
            return;
        }
	   x1 = ((-b)+(sqrt(delta)))/(2*a);
 	   x2 = ((-b)-(sqrt(delta)))/(2*a);
	   cout << "Miejsca zerowe wynosza odpowiednio: x1 = " << x1 << " , x2 = " << x2 << endl;


	  return;
	}
	if (delta<0)
	    {
	    	cout << "Brak miejsc zerowych." << endl;
	    	return;
		}
}

int main ()
{
    int wybor;
    cout<<"Wybor postaci funkcji !!"<<endl;
    cout<<"1. Funkcja liniowa "<<endl;
    cout<<"2. Funkcja kwadratowa - Postac ogolna "<<endl;
    cout<<"3. Funkcja kwadratowa - Postac kanoniczna"<<endl;
    cin>>wybor;
    
    if(wybor == 1)
    {
    	float a,b,X0;
    	cout << "Wpisz wartosc wspolczynnika kierunkowego a: " << endl;
	    cin >> a;
	    cout << "Wpisz wartosc wyrazu wolnego funkcji: " << endl;
	    cin >> b;
	    cout << endl;
	    liniowa(a,b,X0); //funkcja licz¹ca miejsca zerowe
	}

    if(wybor == 2)
    {
	float a,b,c;

	cout << "Podaj wspolczynniki funkcji kwadratowej: " << endl;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	cout <<endl;
	oblicz_ogolna(a,b,c); //funkcja liczaca miejsca zerowe
    }
    
    if(wybor == 3)
    {
        float a,b,c,p,q;
			cout<<"Miejsca zerowe funkcji kwadratowej w postaci kanonicznej y=a(x-p)^2+q" << endl;
			cout<<"Podaj a: ";
			cin>>a;
			cout<<"Podaj p: ";
			cin>>p;
			cout<<"Podaj q: ";
			cin>>q;
			cout << endl;
			if(a==0)
			{
				cout<<"Brak!";
				return 0;
			}
			zamien_na_kanoniczne(a,p,q,b,c); //funkcja zamienia z kanonicznych na ogolne wartosci
			oblicz_ogolna(a,b,c); //funkcja liczaca miejsca zerowe

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
