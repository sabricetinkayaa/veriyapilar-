#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	int boyut, dizi[50], i, j, temp;
	cout<<"Dizide Kac Eleman Olacak? : ";
	cin>>boyut;
	cout<<"Dizi Elemanlarini Giriniz : ";
	for(i=0; i<boyut; i++)
	{
		cin>>dizi[i];
	}
	for(i=0; i<boyut; i++)
	{
		for(j=i+1; j<boyut; j++)
		{
			if(dizi[i]>dizi[j])
			{
				temp=dizi[i];
				dizi[i]=dizi[j];
				dizi[j]=temp;
			}
		}
	}
	cout<<"Selection Sort Ile Dizinin Siralanmasi:\n";
	for(i=0; i<boyut; i++)
	{
		cout<<dizi[i]<<" ";
	}
	system("pause");
}