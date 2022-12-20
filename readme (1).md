# Ujian Akhir Semester 
<br>Mata Kuliah 	: DASAR PEMOGRAMAN
<br> Nama		    : SABILAH ARIANISA
<br>NIM		        : 1227050119	
<br>Jurusan		:[Teknik Informatika](http://if.uinsgd.ac.id/) [UIN Sunan Gunung Djati Bandung](https://uinsgd.ac.id/) 

## Deskripsi Umum
Karya ini dibuat untuk memenuhi nilai UAS Mata Kuliah Dasar Pemograman dengan perintah yaitu:
1. Menginput banyaknya baris dan kolom lalu diisi nilai dan tukar kolom jadi baris, baris jadi kolom
2. Membuat array 2 dimensi angka angka yang ditampilkan bilangannya yang habis dibagi 3,5,7
## Source Code
Soal No 1 :
#include <iostream>
using namespace std;

int main(){
  int i, j, k, l, matriks[10][10], transpose[10][10];

  cout << "Input jumlah baris : ";
  cin >> k ;
  cout << "Input jumlah kolom : ";
  cin >> l ;

  cout << "Input elemen \n";
  for (i = 0; i < k; i++){
    for (j = 0; j < l; j++){
    	 cout <<"("<<i<<","<<j<<") : ";
      cin  >> matriks[i][j];
    }
  }
  cout << endl;
  
  for (i = 0; i < k; i++){
    for (j = 0; j < l; j++){
    	cout << matriks[i][j] << "\t";
    }
    cout << endl;
  }
  cout << endl;

  for (i = 0; i < k; i++){
    for (j = 0; j < l; j++){
      transpose [j][i] = matriks[i][j];
    }
  }

  cout << "Input Hasil Transpose : \n";
  for (i = 0; i < l; i++){
    for (j = 0; j < k; j++){
      cout << transpose[i][j] << "\t";
    }
    cout << endl;
  }
}

Soal No 2 :
#include <iostream>
using namespace std;

int main(){
  int i, j, k, l, matriks[10][10], transpose[10][10];

  cout << "Input jumlah baris : ";
  cin >> k ;
  cout << "Input jumlah kolom : ";
  cin >> l ;

  cout << "Input elemen \n";
  for (i = 0; i < k; i++){
    for (j = 0; j < l; j++){
    	 cout <<"("<<i<<","<<j<<") : ";
      cin  >> matriks[i][j];
    }
  }
  cout << endl;
  
  for (i = 0; i < k; i++){
    for (j = 0; j < l; j++){
    	cout << matriks[i][j] << "\t";
    }
    cout << endl;
  }
  cout << endl;

 // nilai dengan array yang habis dibagi 3,5,7
cout << "Nilai Yang Habis dibagi 3,5,7 : " << endl ;
for (int i=0; i<k; i ++){
	for (int j=0; j < l; j++){
		if (matriks [i] [j] %3 == 0){
			cout << matriks [i] [j] << endl;
		}else if (matriks [i][j] %5 == 0) {
			cout << matriks [i] [j] << endl ;
		}else if ( matriks [i][j] %7 ==0){
			cout << matriks [i][j] << endl ;
		} else {
			cout << "Nilai Yang tidak habis dibagi 3,5,7: " << endl;
		}
	}
}
}
## Output
No 1:
Masukkan jumlah baris : 2
Masukkan jumlah kolom : 3
Masukkan elemen
(0,0) : 3
(0,1) : 4
(0,2) : 5
(1,0) : 6
(1,1) : 7
(1,2) : 8

3       4       5
6       7       8

Hasil Transpose :
3       6
4       7
5       8




No 2:

Input jumlah baris : 1
Input jumlah kolom :
3
Input elemen
(0,0) : 1
(0,1) : 3
(0,2) : 4

1       3       4

Nilai Yang Habis dibagi 3,5,7 :
3
Nilai Yang tidak habis dibagi 3,5,7:
1
Nilai Yang tidak habis dibagi 3,5,7:
4
--------------------------------
Process exited after 14.67 seconds with return value 0
Press any key to continue . . .
