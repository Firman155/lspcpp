#include<iostream>
using namespace std;
int harga, total, lama;
float ppn;
string nama; //Nama Hanya Bisa 1 Karakter Dari Nama User
char tipe, ulang;

main(){
	do{
		system("CLS");
		cout<<"\t\t\t\tDAFTAR HARGA KAMAR OYO\n";
		cout<<"----------------------------------------------------------------------------------\n";
		cout<<"Jumlah Hari  :\tSuperior          :\tDeluxe            :\tPremium          :\n";
		cout<<"-------------:--------------------------------------------------------------------\n";
		cout<<"1 - 2 Hari   :\tRp 100.000/night  :\tRp 150.000/night  :\tRp 200.000/night :\n";
		cout<<"3 - 4 Hari   :\tRp 90.000/night   :\tRp 135.000/night  :\tRp 180.000/night :\n";
		cout<<">=  5 Hari   :\tRp 80.000/night   :\tRp 120.000/night  :\tRp 160.000/night :\n";
		cout<<"----------------------------------------------------------------------------------\n\n";
		
		
		cout<<"Tipe Kamar \n";
		cout<<"1. Superior\n";
		cout<<"2. Deluxe\n";
		cout<<"3. Premium\n";
		
		cout<<"\nMasukkan Data Diri Anda\n\n";
		std::cout<<"Masukkan Nama Anda\t: "; //Nama Hanya Bisa 1 Karakter Dari Nama User
		cin>>nama;
		cout<<"Pilih Tipe Kamar\t: ";
		cin>>tipe;
		
		switch(tipe){
			case'1':
				cout<<"Lama Menginap (Hari)\t: ";
				cin>>lama;
				
				if(lama>=1&&lama<=2){
					harga = 100000;
					ppn = 0.1*harga*lama;
					total = lama*harga+ppn;
					cout<<"\n\n========================================="<<endl;
					cout<<"      Ini Adalah Data Pesanan Anda"<<endl;
					cout<<"========================================="<<endl;
					cout<<"\nNama\t\t\t: "<<nama<<endl;
					cout<<"Tipe \t\t\t: "<<tipe<<". Superior"<<endl;
					cout<<"Lama Menginap\t\t: "<<lama<<" Hari"<<endl;
					cout<<"Total Harga\ + PPN\t: "<<total<<endl;
					cout<<"\nTerima Kasih Atas Kunjungan Anda\nJangan Lupa Untuk Check Out Tepat Waktu."<<endl;
					cout<<"========================================="<<endl;
				}else if(lama>=3&&lama<=4){
					harga = 90000;
					ppn = 0.1*harga*lama;
					total = lama*harga+ppn;
					cout<<"\n\n========================================="<<endl;
					cout<<"      Ini Adalah Data Pesanan Anda"<<endl;
					cout<<"========================================="<<endl;
					cout<<"\nNama\t\t\t: "<<nama<<endl;
					cout<<"Tipe \t\t\t: "<<tipe<<". Superior"<<endl;
					cout<<"Lama Menginap\t\t: "<<lama<<" Hari"<<endl;
					cout<<"Total Harga\ + PPN\t: "<<total<<endl;
					cout<<"\nTerima Kasih Atas Kunjungan Anda\nJangan Lupa Untuk Check Out Tepat Waktu."<<endl;
					cout<<"========================================="<<endl;
				}else if(lama>=5){
					harga = 80000;
					ppn = 0.1*harga*lama;
					total = lama*harga+ppn;
					cout<<"\n\n========================================="<<endl;
					cout<<"      Ini Adalah Data Pesanan Anda"<<endl;
					cout<<"========================================="<<endl;
					cout<<"\nNama\t\t\t: "<<nama<<endl;
					cout<<"Tipe \t\t\t: "<<tipe<<". Superior"<<endl;
					cout<<"Lama Menginap\t\t: "<<lama<<" Hari"<<endl;
					cout<<"Total Harga\ + PPN\t: "<<total<<endl;
					cout<<"\nTerima Kasih Atas Kunjungan Anda\nJangan Lupa Untuk Check Out Tepat Waktu."<<endl;
					cout<<"========================================="<<endl;
					
				} break;
				
			case'2':
				cout<<"Lama Menginap (Hari)\t: ";
				cin>>lama;
				
				if(lama>=1&&lama<=2){
					harga = 150000;
					ppn = 0.1*harga*lama;
					total = lama*harga+ppn;
					cout<<"\n\n========================================="<<endl;
					cout<<"      Ini Adalah Data Pesanan Anda"<<endl;
					cout<<"========================================="<<endl;
					cout<<"\nNama\t\t\t: "<<nama<<endl;
					cout<<"Tipe \t\t\t: "<<tipe<<". Deluxe"<<endl;
					cout<<"Lama Menginap\t\t: "<<lama<<" Hari"<<endl;
					cout<<"Total Harga\ + PPN\t: "<<total<<endl;
					cout<<"\nTerima Kasih Atas Kunjungan Anda\nJangan Lupa Untuk Check Out Tepat Waktu."<<endl;
					cout<<"========================================="<<endl;
				}else if(lama>=3&&lama<=4){
					harga = 135000;
					ppn = 0.1*harga*lama;
					total = lama*harga+ppn;
					cout<<"\n\n========================================="<<endl;
					cout<<"      Ini Adalah Data Pesanan Anda"<<endl;
					cout<<"========================================="<<endl;
					cout<<"\nNama\t\t\t: "<<nama<<endl;
					cout<<"Tipe \t\t\t: "<<tipe<<". Deluxe"<<endl;
					cout<<"Lama Menginap\t\t: "<<lama<<" Hari"<<endl;
					cout<<"Total Harga\ + PPN\t: "<<total<<endl;
					cout<<"\nTerima Kasih Atas Kunjungan Anda\nJangan Lupa Untuk Check Out Tepat Waktu."<<endl;
					cout<<"========================================="<<endl;
				}else if(lama>=5){
					harga = 120000;
					ppn = 0.1*harga*lama;
					total = lama*harga+ppn;
					cout<<"\n\n========================================="<<endl;
					cout<<"      Ini Adalah Data Pesanan Anda"<<endl;
					cout<<"========================================="<<endl;
					cout<<"\nNama\t\t\t: "<<nama<<endl;
					cout<<"Tipe \t\t\t: "<<tipe<<". Deluxe"<<endl;
					cout<<"Lama Menginap\t\t: "<<lama<<" Hari"<<endl;
					cout<<"Total Harga\ + PPN\t: "<<total<<endl;
					cout<<"\nTerima Kasih Atas Kunjungan Anda\nJangan Lupa Untuk Check Out Tepat Waktu."<<endl;
					cout<<"========================================="<<endl;
					
				} break;
				
			case'3':
				cout<<"Lama Menginap (Hari)\t: ";
				cin>>lama;
				
				if(lama>=1&&lama<=2){
					harga = 200000;
					ppn = 0.1*harga*lama;
					total = lama*harga+ppn;
					cout<<"\n\n========================================="<<endl;
					cout<<"      Ini Adalah Data Pesanan Anda"<<endl;
					cout<<"========================================="<<endl;
					cout<<"\nNama\t\t\t: "<<nama<<endl;
					cout<<"Tipe \t\t\t: "<<tipe<<". Premium"<<endl;
					cout<<"Lama Menginap\t\t: "<<lama<<" Hari"<<endl;
					cout<<"Total Harga\ + PPN\t: "<<total<<endl;
					cout<<"\nTerima Kasih Atas Kunjungan Anda\nJangan Lupa Untuk Check Out Tepat Waktu."<<endl;
					cout<<"========================================="<<endl;
				}else if(lama>=3&&lama<=4){
					harga = 180000;
					ppn = 0.1*harga*lama;
					total = lama*harga+ppn;
					cout<<"\n\n========================================="<<endl;
					cout<<"      Ini Adalah Data Pesanan Anda"<<endl;
					cout<<"========================================="<<endl;
					cout<<"\nNama\t\t\t: "<<nama<<endl;
					cout<<"Tipe \t\t\t: "<<tipe<<". Premium"<<endl;
					cout<<"Lama Menginap\t\t: "<<lama<<" Hari"<<endl;
					cout<<"Total Harga\ + PPN\t: "<<total<<endl;
					cout<<"\nTerima Kasih Atas Kunjungan Anda\nJangan Lupa Untuk Check Out Tepat Waktu."<<endl;
					cout<<"========================================="<<endl;
				}else if(lama>=5){
					harga = 160000;
					ppn = 0.1*harga*lama;
					total = lama*harga+ppn;
					cout<<"\n\n========================================="<<endl;
					cout<<"      Ini Adalah Data Pesanan Anda"<<endl;
					cout<<"========================================="<<endl;
					cout<<"\nNama\t\t\t: "<<nama<<endl;
					cout<<"Tipe \t\t\t: "<<tipe<<". Premium"<<endl;
					cout<<"Lama Menginap\t\t: "<<lama<<" Hari"<<endl;
					cout<<"Total Harga\ + PPN\t: "<<total<<endl;
					cout<<"\nTerima Kasih Atas Kunjungan Anda\nJangan Lupa Untuk Check Out Tepat Waktu."<<endl;
					cout<<"========================================="<<endl;
					
				} break;
				
				default:
					cout<<"Mohon Maaf. Kamar Tidak Tersedia!";
		}
		
		cout<<"\nApakah Ingin Mengulang Program? (Y/N)\t: ";
		cin>>ulang; 
		
	}while(ulang=='y'||ulang=='Y');
}
