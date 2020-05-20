#include<stdio.h>	
#include<conio.h>
#include<stdlib.h>

using namespace std;
	int koin[18]={200,300,500,1000,1500,2000,2500,3000,3500,4000,4500,5000,5500,6000,6500,7000,7500,8000};
	int harga_koin[18]={20000,24000,30000,70000,100000,120000,150000,180000,200000,230000,250000,280000,300000,320000,350000,380000,400000,420000};
	int saldo = 25000000;
	int harga, pilih;
	char lagi;
	
int menu(){
	
	system("cls");
	printf("\n\n\n======DAFTAR JUMLAH KOIN DAN HARGANYA=====\n\n");
	printf("\n|-------|-------------------|-------------|\n");
	printf("   kode\t\tJumlah KOIN\tHarga(Rp.)\n\n");
	printf("|-------|-------------------|-------------|\n");
		for (int y=0;y<18;y++){
			printf("|   %i",y+1);
			printf("\t|\t%d",koin[y]);
			printf("\tKOIN  |\t%d",harga_koin[y]);
			printf("\t  |");
			printf("\n");
		}
	printf("|-------|-------------------|-------------|\n\n");
	printf("Pilih : ");
	
	do{	
	scanf("%i",&pilih);	
	switch(pilih){
		case 1: 
				printf("%i\n",koin[0]);
				printf(" KOIN Rp%i",harga_koin[0]);
				break;	
		case 2:
				printf("%i",koin[1]);
				printf(" KOIN Rp%i",harga_koin[1]);
				printf("\n");
				break;
		case 3:
				printf("%i",koin[2]);
				printf(" KOIN Rp%i",harga_koin[2]);
				printf("\n");
				break;
		case 4:
				printf("%i",koin[3]);
				printf(" KOIN Rp%i",harga_koin[3]);
				printf("\n");
				break;
		case 5:
				printf("%i",koin[4]);
				printf(" KOIN Rp%i",harga_koin[4]);
				printf("\n");
				break;
		case 6:
				printf("%i",koin[5]);
				printf(" KOIN Rp%i",harga_koin[5]);
				printf("\n");
				break;
		case 7:
				printf("%i",koin[6]);
				printf(" KOIN Rp%i",harga_koin[6]);
				printf("\n");
				break;
		case 8:
				printf("%i",koin[7]);
				printf(" KOIN Rp%i",harga_koin[7]);
				printf("\n");
				break;
		case 9:
				printf("%i",koin[8]);
				printf(" KOIN Rp%i",harga_koin[8]);
				printf("\n");
				break;
		case 10:
				printf("%i",koin[9]);
				printf(" KOIN Rp%i",harga_koin[9]);
				printf("\n");
				break;
		case 11:
				printf("%i",koin[10]);
				printf(" KOIN Rp%i",harga_koin[10]);
				printf("\n");
				break;
		case 12:
				printf("%i",koin[11]);
				printf(" KOIN Rp%i",harga_koin[11]);
				printf("\n");
				break;
		case 13:
				printf("%i",koin[12]);
				printf(" KOIN Rp%i",harga_koin[12]);
				printf("\n");
				break;
		case 14:
				printf("%i",koin[13]);
				printf(" KOIN Rp%i",harga_koin[13]);
				printf("\n");
				break;
		case 15:
				printf("%i",koin[14]);
				printf(" KOIN Rp%i",harga_koin[14]);
				printf("\n");
				break;

		case 16:
				printf("%i",koin[15]);
				printf(" KOIN Rp%i",harga_koin[15]);
				printf("\n");
				break;
				
		case 17:
				printf("%i",koin[16]);
				printf(" KOIN Rp%i",harga_koin[16]);
				printf("\n");
				break;
				
		case 18:
				printf("%i",koin[17]);
				printf(" KOIN Rp%i",harga_koin[17]);
				printf("\n");
				break;
		default:
				printf("pilihan yang anda masukkan tidak tersedia\n");
				printf("Silahkan masukkan pilihan lagi\n\n");
				break;
			}
				
	printf("\nJumlah KOIN\t: %i",koin[pilih-1]);
	printf("\nHarga KOIN\t: Rp.%i",harga_koin[pilih-1]);
	harga = harga + harga_koin[pilih-1];
	printf("\nNominal yang harus dibayar\t: Rp.%i",harga);
	printf("\n\n\nApakah ingin melanjutkan transaksi? (y/n) : ");
	scanf("%i",&pilih);	
	}
		while((pilih=='y')||(pilih=='Y'));
}

void akhir(){
		system("cls");
		printf("\n\n--------------------------------------------------\n");
		printf("STRUK PEMBELIAN KOIN :\n\n");	
		printf("Total harga pembelian KOIN\t\tRp.%i",harga);
		printf("\nSaldo awal \t\t\t\tRp.%i",saldo);
		printf("\nSisa saldo \t\t\t\tRp.%i",saldo-harga);
		printf("\n--------------------------------------------------\n");		
}

int main(){
		
	char username[10], pass[20];
	char un[10]="desti",ps[20]="13122000";
	
		menu:	
		printf("|*********** MENU JUAL BELI KOIN HAGO ***********|");
		printf("\n\nMasukkan User name Anda\t: ");
		scanf("%s",&username);
		printf("\n\nMasukkan Password Anda\t: ");
		scanf("%s",&pass);
	
			if((username[10] != un[10]) && (pass[20] != ps[20])){
				system("cls");
				goto menu;
				}
				
			else{
				system ("cls")	;			
				menu();
				akhir();			
				}
getch();
}
