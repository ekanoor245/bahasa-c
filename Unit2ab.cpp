#include<iostream.h>
#include<conio.h>
void coba(int a, int b)
{
        cout<< " a = " << a << " dan b = " <<endl;
        a=20;
        b=50;
}
void main()
{
int a, b;
a=2;
b=5;
cout<<" a = "<< a << " dan b "<< b <<endl;
coba (a,b);
cout<<" a = "<< a << " dan b "<< b <<endl;
getch();
}
