# include <iostream>
using namespace std;
int koin[18]={200,300,500,1000,1500,2000,2500,3000,3500 ,4000,4500,5000,5500,6000,6500,7000,7500,8000};
int harga_koin[18]={20000,24000,30000,70000,100000,120000,150000,180000,200000,230000,250000,280000,300000,320000,350000,380000,400000,420000};
	int saldo = 25000000;
	int harga, pilih;
	char lagi;
int menu(){
	system("cls");
    do{
	cout<<"\n\n\n======DAFTAR JUMLAH KOIN DAN HARGANYA=====\n\n";
	cout << "\n|-------|-------------------|-------------|\n";
	cout << "   kode\t\tJumlah KOIN\tHarga(Rp.)\n\n";
	cout << "|-------|-------------------|-------------|\n";
		for (int y=0;y<18;y++){
			cout<<"|   "<<y+1<<"\t|\t"<<koin[y]<<"\tKOIN"<<"  |\t"<<harga_koin[y]<<"\t  |"<<endl;
		}
	cout < "|-------|-------------------|-------------|\n\n";
	cout<<"Pilih : ";
	cin>>pilih;
	switch (pilih){
	case 1:
		cout<<koin[0]<<" KOIN Rp"<<harga_koin[0]<<endl;
		break;	
	case 2:
		cout<<koin[1]<<" KOIN Rp"<<harga_koin[1]<<endl;
		break;
	case 3:
		cout<<koin[2]<<" KOIN Rp"<<harga_koin[2]<<endl;
		break;
	case 4:
		cout<<koin[3]<<" KOIN Rp"<<harga_koin[3]<<endl;
		break;
	case 5:
		cout<<koin[4]<<" KOIN Rp"<<harga_koin[4]<<endl;
		break;
	case 6:
		cout<<koin[5]<<" KOIN Rp"<<harga_koin[5]<<endl;
		break;
	case 7:
		cout<<koin[6]<<" KOIN Rp"<<harga_koin[6]<<endl;
		break;
	case 8:
		cout<<koin[7]<<" KOIN Rp"<<harga_koin[7]<<endl;
		break;
	case 9:
		cout<<koin[8]<<" KOIN Rp"<<harga_koin[8]<<endl;
		break;
	case 10:
		cout<<koin[9]<<" KOIN Rp"<<harga_koin[9]<<endl;
		break;
	case 11:
		cout<<koin[10]<<" KOIN Rp"<<harga_koin[10]<<endl;
		break;
	case 12:
		cout<<koin[11]<<" KOIN Rp"<<harga_koin[11]<<endl;
		break;
	case 13:
		cout<<koin[12]<<" KOIN Rp"<<harga_koin[12]<<endl;
		break;
	case 14:
		cout<<koin[13]<<" KOIN Rp"<<harga_koin[13]<<endl;
		break;
	case 15:
		cout<<koin[14]<<" KOIN Rp"<<harga_koin[14]<<endl;
		break;
	case 16:
		cout<<koin[15]<<" KOIN Rp"<<harga_koin[15]<<endl;
		break;
	case 17:
		cout<<koin[16]<<" KOIN Rp"<<harga_koin[16]<<endl;
		break;
	case 18:
		cout<<koin[17]<<" KOIN Rp"<<harga_koin[17]<<endl;
		break;
		}
		cout<<"\nJumlah KOIN\t: "<<koin[pilih-1];
		cout<<"\nHarga KOIN\t: Rp."<<harga_koin[pilih-1];
		harga = harga + harga_koin[pilih-1];
		cout<<"\n\nNominal yang harus dibayar\t: Rp."<<harga;
		cout<<"\n\nApakah ingin melanjutkan transaksi? (y/n) :";
		cin>>lagi;
	}while(lagi=='y'||lagi=='Y');
}
	void akhir(){
	system("cls");
cout << "\n\n--------------------------------------------------\n";
cout<<"STRUK PEMBELIAN KOIN :\n\n";	
cout<<"Total harga pembelian KOIN\t\tRp."<<harga;
cout<<"\nSaldo Awal\t\t\t\tRp."<<saldo;
cout<<"\nSisa Saldo \t\t\t\tRp."<<saldo-harga;
cout << "\n--------------------------------------------------\n";
}	
int main(){
	string username, pass;
	string un="desti13", ps="13122000";
	menu:	
	cout<<"|*********** MENU JUAL BELI KOIN HAGO ***********|";
	cout<<"\n\nMasukkan User name Anda\t: ";
	cin>>username;
	cout<<"\n\nMasukkan Password Anda\t: ";
	cin>>pass;
	if(username != un && pass != ps){
	system("cls");
      goto menu;}
		else {
			system("cls");
			menu();
			akhir(); }	
system("pause");
}
