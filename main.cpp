#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    int sayi1;
    int sayi2;
    srand(time(0));
    sayi1=rand()%2;
    sayi2=rand()%2;
    cout << "Birinci sayi: " << sayi1 << endl;
    cout << "Ikinci sayi: " << sayi2 << endl;
    if(sayi1<sayi2){
        cout << "Buyuk olan sayi: " << sayi2 << endl;
    }
    else if(sayi1>sayi2){
        cout << "Buyuk olan sayi: " << sayi1 << endl;
    }
    else{
        cout << "iki sayida esittir: " << sayi1 << endl;
    }

    return 0;
}
