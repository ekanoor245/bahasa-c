#include<conio.h>
#include<iostream.h>
#include<csting.h>
void bikingaris()
{
        cout<<"---------------"<endl;
}
void ngisi_data(string nama[], int &N);
{
cout<<"silahkan masukkan nilai N : ";
cin>>N;
for(int i=0, i<=N-1; i++)
{
cout<<"masukkan nama ke- "<< i <<" : ";
cin>>nama[i];
}
}
void tampil_data(string nama[], int N)
{
bikingaris();
cout<<"no nama "<<endl;
bikingaris();
for (int i=0, i<=N-1, i++)
{
cout<< i <<" "<<nama[i]<<endl;
}
bikingaris();
}
void main()
{
int N;
string nama [10];
ngisi_data (nama,N);
tampil_data(nama, N)
}
getch();
}

