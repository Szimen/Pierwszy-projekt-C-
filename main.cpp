#include <iostream>

using namespace std;
int main ()
{
	int a,b;
	cout << " Podaj wartosc a: " << endl;
	cin >> a;
	if (a==0)
	{
		cout << "Miejsce zerowe nie wystepuje." << endl;
		return 0;
	}
	cout << "Podaj wartosc b: " << endl;
	cin >> b;
	cout << "Miejsce zerowe funkcji liniowej wynosi: " << (-b)/a << endl;
	return 0;
}
