#include <iostream.h>
#include <conio.h>

int main (){
int count, b, c;
int umur[10];

int max;
char nama[10][20];
char alamat[5][5];
char jk[5][5];

for (count=0, b=0; count <= 2 ; count++, b++)
{
cout << "masukkan nama :";cin >> nama[count];
cout << "masukkan umur :";cin >> umur[b];
cout<<"masukkan alamat: ";cin>>alamat[count];
cout<<"masukkan jk: ";cin>>jk[count];
}

max = umur[0];
for(c=0; c <= 2; c++)
    {
   if (umur[c] > max) max = umur[c];
   }
cout << "Umur yang tertua adalah " << max  << endl;
 getch();
}


