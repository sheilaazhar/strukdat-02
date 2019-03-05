/*
Nama		: Sheila Azhar Almufarida
NPM			: 140810180001
Tanggal Buat: 5 Maret 2019
Nama Program: Move Zero to The End Of Array
*/

#include <iostream>

using namespace std;

void moveZeroToEnd(int arr[], int n){
	int count = 0;
    for (int i = 0; i < n; i++) 
        if (arr[i] != 0) 
            arr[count++] = arr[i];
    while (count < n) 
        arr[count++] = 0;
}

void input(int (&arr)[100], int& n){
	cout<<"Masukkan panjang data : ";cin>>n;
	cout<<"Masukkan Data : ";
	for(int i=0; i<n; i++){
		;cin>>i;
	}
}

void output(int arr[], int n){
    cout << "Hasil : "; 
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
}

int main(){
	int arr[100];
	int n;
	input(arr, n);
	moveZeroToEnd(arr,n);
	output(arr,n);
}
