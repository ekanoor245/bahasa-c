
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h> 
#include <iomanip>

using namespace std;
main()
{
	int i, j, b, k, y;
	cout<<"Masukkan Baris = ";
	cin>>b;
	cout<<"Masukkan Kolom = ";
	cin>>k;
	int data [30] [30];
	for (i=0; i<b; i++)
	for (j=0; j<k; j++)
	{
		cout<<"Masukkan Data Matrik: ";
		cin>>data [i] [j];
	}
	cout<<"Hasil Dari Matrik"<<endl;
	for (i=0; i<b; i++)
	{
		for (j=0; j<k; j++)
		cout<<data[i] [j]<<"  ";
		cout<<endl;
	}
	cout<<endl<<endl;
	for(int i=0; i<b; i++) 
   {
        for(int j=0; j<k; j++) 
		{
            y=0;
            for(int p=1; p<=data[i][j]; p++) 
			{
                if(data[i][j]%p==0) 
				{
                    y++;
                }
            } 
            if(y==2) 
			{
                data[i][j]=0;
            }

        }
    }

   cout << "HASIL" << endl <<endl;
    for(int i=0; i<b; i++) 
	{
        for(int j=0; j<k; j++) 
		{
      cout<<setw(5) << data[i][j];
        }
        cout<<endl;
    }
	return 0;
}
