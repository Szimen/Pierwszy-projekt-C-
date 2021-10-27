#include <iostream>

using namespace std;
int main ()
{
	int a,b;
	cout << " Podaj wartosc a (powinna byc rozna od 0): " << endl;
	cin >> a;
	if (a==0)
	{
		cout << "Niepoprawne dane!" << endl;
		return 0;
	}
	cout << "Podaj wartosc b: " << endl;
	cin >> b;
	cout << "Miejsce zerowe funkcji liniowej wynosi: " << (-b)/a << endl;
	
}
