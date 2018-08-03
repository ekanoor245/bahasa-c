//praktik3
#include<iostream.h>
#include<conio.h>
void main()
{
        clrscr();
        float beli, discount, bayar;
        cout<<"total pembelian:";
        cin>>beli;
        if (beli>1000000)
        {
        discount=beli*0.2;
        bayar=beli-discount;
        }
        else if (beli>500000)
        {
        discount=beli*0.15;
        bayar=beli-discount;
        }
        else if (beli>100000)
        {
        discount=beli*0.1;
        bayar=beli-discount;
        }
        else
        {
       cout<<"tidak ada discount"<<endl;
       discount=beli*0;
       bayar=beli-discount;
        }
        cout<<"discount beli="<<discount<<endl;
        cout<<"jumlah bayar="<<bayar<<endl;
        getch();
}

