#include <iostream>

using namespace std;

int perkalian(int a, int b);

int main()
{
    int a, b;

    cout << "Masukan Nilai A : ";
    cin >> a;
    cout << "Masukan Nilai B : ";
    cin >> b;

    perkalian(a,b);

}

int perkalian(int a, int b)
{

    cout << "Hasil Perkalian dari " << a << " x " << b << " adalah: ";

    for(int i=1; i<=b; i++)
    {
        cout << a;
        if(i<b)
        {
            cout<<" + ";
        }
    }

}
