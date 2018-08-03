#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    string mt ;
    char x;
    float jml, sks, ns, jml_sks, jmk, i, n_angka;
    float ip;
    char nilai, yt;
    awal:
    i=0;
    jml_sks=0;
    jmk=0;

    x='y';
    while (x=='y')
    {
        i=i+1;

        cout<<i;
        cout<<" .Mata Kuliah\t = ";cin>>mt;
        cout<<"   SKS\t\t = ";cin>>sks;
        cout<<"   Nilai\t = ";cin>>nilai;
        cout<<"   Tambah?\t = ";cin>>x;
        cout<<endl;

        switch (nilai)
            {
                case 'A':n_angka=4;break;
                case 'B':n_angka=3;break;
                case 'C':n_angka=2;break;
                case 'D':n_angka=1;break;
            }
    jml_sks=jml_sks+sks;
    jml=sks*n_angka;
    jmk=jmk+jml;
    }
ip=jmk/jml_sks;
cout<<"====================================="<<endl;
cout<<"Jumlah sks yang diambil     = "<<jml_sks<<endl;
cout<<"Jumlah SKS X Nilai          = "<<jmk<<endl;
cout<<"Nilai IPK                   = "<<ip<<endl;
cout<<"====================================="<<endl;
cout<<"Predikat Indeks Prestasi : ";
if(ip>=0 && ip<=1.5)
cout<<"KURANG MEMUASKAN";
else if(ip>=1.5 && ip<=2.75)
cout<<"CUKUP";
else if(ip>=2.75 && ip<=3.5)
cout<<"MEMUASKAN";
else
cout<<"CUMLAUDE"<<endl;
cout<<endl;
cout<<"====================================="<<endl;
cout<<"apakah anda ingin keluar ? (y/t)"; cin>>yt;
if(yt=='Y' || yt=='y')
goto selesai;
if(yt=='T' || yt=='t')
goto awal;

selesai :
    cout<<"==================Terima kasih=================="<<endl;
return 0;
}
