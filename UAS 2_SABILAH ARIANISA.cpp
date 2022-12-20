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
