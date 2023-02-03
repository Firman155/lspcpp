#include<iostream>
using namespace std;

int main(){
	
	int lama, total, harga;
	char respon, tipe;
	
	
		
	do{
		system("CLS");
		cout<<"\n LSP OBJECT ORIENTED PROGRAMMING 2023\n\n";
		cout<<" NAMA\t\t: FIRMAN NUR\n";
		cout<<" KELAS\t\t: XII RPL 2\n";
		cout<<" SEKOLAH\t: SMK NEGERI 2 JAKARTA\n\n";
		cout<<" ................................................................................\n";
		cout<<" :\t\t\t\tDAFTAR HARGA KAMAR\t\t\t\t:\n";
		cout<<" :..............................................................................:\n";
		cout<<" :  Jumlah Hari  :  "<<"    Superior      :  "<<"    Deluxe        :  "<<"    Premium       :\n";
		cout<<" ................................................................................\n";
		cout<<" :  1 - 2 Hari   :  "<<"Rp 100.000/night  :  "<<"Rp 150.000/night  :  "<<"Rp 200.000/night  :\n";
		cout<<" :  3 - 4 Hari   :  "<<"Rp 90.000/night   :  "<<"Rp 135.000/night  :  "<<"Rp 180.000/night  :\n";
		cout<<" :  >=  5 Hari   :  "<<"Rp 80.000/night   :  "<<"Rp 120.000/night  :  "<<"Rp 160.000/night  :\n";
		cout<<" ................................................................................\n";
		
		cout<<"\n Pilih Tipe Kamar Di Bawah Ini : \n\n";
		cout<<" 1. Superior\n";
		cout<<" 2. Deluxe\n";
		cout<<" 3. Premium\n\n";
		
		cout<<" Kamar Yang Dipilih\t: ";
		cin>>tipe;
		
		switch(tipe){
			case '1':
				cout<<" Lama Menginap (Hari)\t: ";
				cin>>lama;
				if(lama>=1&&lama<=2){
					harga = 100000;
					total = harga*lama;
					cout<<" Harga Total\t\t: Rp "<<total<<endl;
				}else if(lama>=3&&lama<=4){
					harga = 90000;
					total = harga*lama;
					cout<<" Harga Total\t\t: Rp "<<total<<endl;
				}else if(lama>=5){
					harga = 80000;
					total = harga*lama;
					cout<<" Harga Total\t\t: Rp "<<total<<endl;
				}
				
				break;
				
			case '2':
				cout<<" Lama Menginap (Hari)\t: ";
				cin>>lama;
				if(lama>=1&&lama<=2){
					harga = 150000;
					total = harga*lama;
					cout<<" Harga Total\t\t: Rp "<<total<<endl;
				}else if(lama>=3&&lama<=4){
					harga = 135000;
					total = harga*lama;
					cout<<" Harga Total\t\t: Rp "<<total<<endl;
				}else if(lama>=5){
					harga = 120000;
					total = harga*lama;
					cout<<" Harga Total\t\t: Rp "<<total<<endl;
				}
				
				break;
			
			case '3':
				cout<<" Lama Menginap (Hari)\t: ";
				cin>>lama;
				if(lama>=1&&lama<=2){
					harga = 200000;
					total = harga*lama;
					cout<<" Harga Total\t\t: Rp "<<total<<endl;
				}else if(lama>=3&&lama<=4){
					harga = 180000;
					total = harga*lama;
					cout<<" Harga Total\t\t: Rp "<<total<<endl;
				}else if(lama>=5){
					harga = 160000;
					total = harga*lama;
					cout<<" Harga Total\t\t: Rp "<<total<<endl;
				}
				
				break;
				
			default:
				cout<<" Mohon Maaf, Kamar Yang Anda Pilih Tidak Tersedia!"<<endl;		
		}
		
		cout<<" Apakah Anda Ingin Memesan Kamar Lain? (Y / T)\t: ";
		cin>>respon;
		
	}while(respon=='y' || respon=='Y');
	
}
