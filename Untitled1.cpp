#include <iostream.h>
#include <conio.h>
void proses()
{
        cout<<"Awal Program"<<endl<<endl;
        int i;
        i=1;
        do
        {
                i++;
                cout<<"Ini adalah perulangan While ke "<<i<<endl;
        }
        while (i<=5);
        cout<<"Program Selesai"<<endl;
        getch();
}

#include <iostream.h>
#include <conio.h>
void proses(string mw)
{
       do
       {
       cout<<"Selamat Datang. Silahkan Masukkan magic word = ";
       cin>>mw;
       }
        while (mw!="abrakadabra");
}
void terakhir()
{
        cout<<"Terima Kasih Untuk word Magic Anda "<<endl;
        cout<<"Program Selesai "<<endl;
}
void main()
{
        string mw;
        proses(mw);
        terakhir();
        getch();
}

