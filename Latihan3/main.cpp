#include <cstdlib>

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
