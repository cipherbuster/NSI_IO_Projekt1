#include <iostream>

using namespace std;

int silnia(int n) {
    int wynik = 1;	
    for(int i = 2; i <= n; i++) {
	wynik = wynik * i;
    }

    return wynik;
}    

int main() {
    int a, b;
    cout << "Podaj liczbe calkowita ";
    cin >> a >> b;
    int wyjscie;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
        cout << "1. Silnia" << endl;
	cin >> wyjscie;

	if(wyjscie == 1){
	    cout << "Silnia wynosi: " << silnia(a) << endl;
	}
    } while(wyjscie != 0);
    return 0;
}
