#include <iostream>
using namespace std;
int main (){
	int bilangan [8][10] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25},{26,27,28,29,30},{31,32,33,34,35},{36,37,38,39,40}};
   	cout<<"Nama=Destiarani\nNIM=8\nKelompok=8"<<endl;
   	cout<<"Nama=Diaz Dwi Kurniawan\nNIM=10\nKelompok=8"<<endl;
   	for (int i=0;i<6;i++){
   		for(int j=0;j<5;j++){
   			cout<<"isi array ke "<<"["<<i<<"]"<<"["<<j<<"]"<<"="<<bilangan[i][j]<<endl;
		   }
	   }

}
