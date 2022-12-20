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
