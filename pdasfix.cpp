#include<iostream>
#include<conio.h>
#include<cstdlib>

using namespace std;

int a, b, c, maximum, minimum,i, j, temp;
float rata2, total;
char ulang;

main(){
	do{
	system("CLS");
	cout<<"LSP PEMROGRAMAN DASAR 2023\n";
	cout<<"NAMA\t: FIRMAN NUR\n";
	cout<<"KELAS\t: XII RPL 2\n\n";	
	cout<<"==================================================\n";
	cout<<"PROGRAM MENGURUTKAN DATA DENGAN METODE BUBBLE SORT\n";
	cout<<"==================================================\n\n";
	cout<<"Masukkan Bilangan A\t: ";
	cin>>a;
	cout<<"Masukkan Bilangan B\t: ";
	cin>>b;
	cout<<"Masukkan Bilangan C\t: ";
	cin>>c;
	cout<<"\nUrutan Data Ascending\t: ";
	
	//	Looping Array Ascending
	int nilai[3]={a, b, c};
	for (int i=0; i<3; i++){
		for(j=i+1; j<3; j++)
			{
				if (nilai[i]>nilai[j]){
					temp = nilai[i];
					nilai[i]=nilai[j];
					nilai[j]=temp;
				}
			}
		}
	
	
	for (int i=0; i<3; i++){
		cout<<nilai[i]<<"\t";
	}
	
	cout<<"\nUrutan Data Descending\t: ";
	
	//	Looping Array Descending
	for (int i=0; i<3; i++){
		for(j=i+1; j<3; j++)
			{
				if (nilai[i]<nilai[j]){
					temp = nilai[i];
					nilai[i]=nilai[j];
					nilai[j]=temp;
				}
			}
			
			minimum = nilai [3-1];
			maximum = nilai[0];
		}
	
	for (int i=0; i<3; i++){
		cout<<nilai[i]<<"\t";
	}
	
	total = a+b+c;
	rata2 = total/3;
	
	cout<<"\nNilai Maximum Data\t: "<<maximum<<endl;
	cout<<"Nilai Minimum Data\t: "<<minimum<<endl;
	cout<<"Nilai Rata - Rata\t: "<<rata2<<endl;
	cout<<"\nMau Ulang Program? (Y/N) : ";
	cin>>ulang;
	
	
}while(ulang=='Y'|| ulang=='y');
}
