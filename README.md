# Praktikum_8

# Latihan 1 (Program fungsi Fibonacci dengan cara iteratif)
1).Alur Agoritmanya :
```
-Mendefinisikan fungsi iteratif dengan kode :
   int iteratif (int suku, int a, int b, int c)
-mengisi int a =0 dan int b=1
-membuat rumus if untuk perbandingan dan rumus fibonanci
   if (suku == 1) return b;

   if (suku == 0) return a;

   else
       {
          for(int i=2; i<=suku; i++)
          {
            c = a + b;
            a = b;
            b = c;
          }

   return c;
```       
2).Berikut kode lengkapnya :
```
#include <iostream>

using namespace std;

int iteratif (int suku, int a, int b, int c)
{
 a=0, b=1;

if (suku == 1) return b;

if (suku == 0) return a;

else
    {
       for(int i=2; i<=suku; i++)
       {
         c = a + b;
         a = b;
         b = c;
       }

return c;
    }
}

int main()
{
int suku, a, b,c;
 cout << "Masukkan nilai suku ke- :";
 cin >> suku;
 cout << endl;
 cout << "Bilangan fibonaccinya untuk " << suku << " adalah :";
 cout << iteratif ( suku, a, b, c);

 return 0;
}
```
3).Berikut Flowchatnya:

![img](https://github.com/zaenalmusthofa86/Praktikum_8/blob/master/Flowlat1.png)

4).Berikut Screenshotnya:

![img](https://github.com/zaenalmusthofa86/Praktikum_8/blob/master/Latihan1.png)

# Latihan 2 (Program fungsi rekursif untuk perkalian dua buah bilangan dengan cara penjumlahan)
1).Alur Algoritmanya :
```
-Mendeklarasikan int operasi(int a, int b); sebagai inisialisasi integer
-Mendeklarasikan int a, b; sebagai variable input 
-Memasukka bilangan dengan kode :
    cout << "Masukan Nilai A : ";
    cin >> a;
    cout << "Masukan Nilai B : ";
    cin >> b;
-Menghitung perkalian dengan kode :
cout << "Hasil Perkalian dari " << a << " x " << b << " adalah: ";

    for(int i=1; i<=b; i++)
    {
        cout << a;
        if(i<b)
        {
            cout<<" + ";
        }
-Menampilkan hasil perkalian dua buah bilgan kelayar dengan kode :

    int a, b;

    cout << "Masukan Nilai A : ";
    cin >> a;
    cout << "Masukan Nilai B : ";
    cin >> b;

    operasi(a,b);

}

int operasi(int a, int b)
{
    cout << a << " x " << b << " = ";

    for(int i=1; i<=b; i++)
    {
        cout << a;
        if(i<b)
        {
```
2).Berikut kode lengkapnya:
```
#include <iostream>

using namespace std;

int operasi(int a, int b);

int main()
{
    int a, b;

    cout << "Masukan Nilai A : ";
    cin >> a;
    cout << "Masukan Nilai B : ";
    cin >> b;

    operasi(a,b);

}

int operasi(int a, int b)
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
```
3).Berikut Flowchatnya:

![img](https://github.com/zaenalmusthofa86/Praktikum_8/blob/master/Flowlat2.png)

4).Berikut Screenshotnya:

![img](https://github.com/zaenalmusthofa86/Praktikum_8/blob/master/Latihan2.png)

# Latihan 3 (Program kasus lain yang bisa diselesaikan dengan cara rekursif dan iteratif)
1).Alur Agoritmanya :
```
-Mendefinisikan integer kali1 dengan kode :
   int kali1(int a, int b)
-mengisi int hasil =0
-membuat rumus for untuk perkalian 1 dengan kode :
int kali1(int a, int b)
 {
  int hasil =0;
  for(int i=0;i<b;i++)
    {
       hasil=hasil+a;
    }
-Mendefinisikan integer kali2 dengan kode :
   int kali2(int a, int b)
-membuat rumus if untuk perkalian 2 dengan kode :
 if(b==0)
  return 1;
  else if(b==1)
  return a;
  else
 return a+kali2(a,b-1);
```     
2).Berikut kode lengkapnya :
```
#include <iostream>

using namespace std;

 int kali1(int a, int b)
 {
  int hasil =0;
  for(int i=0;i<b;i++)
    {
       hasil=hasil+a;
    }
 return hasil;
 }

 int kali2(int a, int b)
 {
  if(b==0)
  return 1;
  else if(b==1)
  return a;
  else
 return a+kali2(a,b-1);
 }

 int main(int argc, char *argv[])
 {
  int a,b;
  cout << "Masukkan Nilai A :";
  cin >> a;
  cout << "Masukkan Nilai B :";
  cin >> b;
  cout << "Secara ITERATIF :" << endl;
  cout << kali1(a,b) << endl;
  cout << "Secara REKURSIF :" << endl;
  cout << kali2(a,b) << endl;

 return 0;
}
```
3).Berikut Flowchatnya:

![img](https://github.com/zaenalmusthofa86/Praktikum_8/blob/master/Flowlat3.png)

4).Berikut Screenshotnya:

![img](https://github.com/zaenalmusthofa86/Praktikum_8/blob/master/Latihan3.png)