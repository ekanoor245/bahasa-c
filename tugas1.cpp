//tugas
#include<iostream.h>
#include<conio.h>
void main()
{
        clrscr();

        char nilai_huruf;
        float nilai, jumlah, nilai_tugas, nilai_uts, nilai_uas;
        cout<<"masukkan nilai tugas"<<endl;
        cin>>nilai_tugas;
        cout<<"masukkan nilai uts"<<endl;
        cin>>nilai_uts;
        cout<<"masukkan nilai uas"<<endl;
        cin>>nilai_uas;
        nilai=(nilai_tugas*20/100)+(nilai_uts*40/100)+(nilai_uas*40/100);
        cout<<"hasil nilai"<<endl;
        if ((nilai>=0) && (nilai<=20))
        nilai_huruf='E';
        else if ((nilai>21) && (nilai<=40))
        nilai_huruf='D';
        else if ((nilai>41) && (nilai<=60))
        nilai_huruf='C';
        else if ((nilai>61) && (nilai<=80))
        nilai_huruf='B';
        else if ((nilai>81) && (nilai<=100))
        nilai_huruf='A';
        else
        cout<<"salah memasukkan nilai"<<endl;
        cout<<"nilai huruf:"<<nilai_huruf<<endl;
        getch();
}
