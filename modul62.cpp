//praktik2

#include<iostream.h>
#include<conio.h>
void main()
{
        clrscr();
        int nilai;
        char nilai_huruf;
        cout<<"masukkan nilai angka:";
        cin>>nilai;
        if ((nilai>=0) && (nilai<=20))
        nilai_huruf='E';
        else if ((nilai>20) && (nilai<=60))
        nilai_huruf='D';
        else if ((nilai>40) && (nilai<=80))
        nilai_huruf='C';
        else if ((nilai>60) && (nilai<=100))
        nilai_huruf='B';
        else if ((nilai>80) && (nilai<=100))
        nilai_huruf='A';
        else
        cout<<"salah masukkan nilai"<<endl;
        cout<<"nilai huruf:"<<nilai_huruf<<endl;
        getch();
}
