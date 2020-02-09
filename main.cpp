//TUGAS UAS PRAKTIKUM
//NAMA : ABDUL LATIF MUNJIAT
//NPM  : 1610631170004
//KELAS 3'A FASILKOM UNSIKA

#include <iostream>
#include <string.h>
#include <stack> //Library standar untuk membuat stack

using namespace std;

void reverse(char *str, int len)
{
 stack<char> s;
 int i;

 // Push ke sebuah stack
 for(i = 0; i < len; i++)
  s.push(str[i]);

 // Pop dari sebuah stack
 for(i= 0; i < len; i++)
 {
  str[i] = s.top();
  s.pop();
 }

}

int main()
{
   cout<<"*======================================Tugas UAS Praktikum======================================*"<<endl;
   cout<<" Struktur Data & Pemrograman"<<endl;
   cout<<" Nomor 1 - Membuat Program Stack"<<endl;
   cout<<" Created By Abdul Latif Munjiat (1610631170004)"<<endl;
   cout<<" Kelas 3'A Fasilkom Unsika\n\n"<<endl;
   cout<<" \tKata Asli     = ABDUL LATIF MUNJIAT\n"<<endl;

   char str[]="ABDUL LATIF MUNJIAT";
   int len = strlen(str);

   reverse(str, len);

   cout <<"\tKata Terbalik = " << str;

   return 0;
}
