#include<iostream.h>
#include<conio.h>
void coba(int &x, int &y)
{
        cout<< " x = " << x << " dan y = "<< y <<endl;
        x=20;
        y=50;
        cout<< " x = " << x << " dan y = "<< y <<endl;
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
