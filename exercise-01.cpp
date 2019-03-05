/*
Nama		: Sheila Azhar Almufarida
NPM			: 140810180001
Tanggal Buat: 5 Maret 2019
Nama Program: exercise-01
*/

#include <iostream>
#include <string.h>

using namespace std;

struct Orang{
    int umur;
    char nama[30];
    char jk[1];
    char goldar[2];
};

int main(){
    Orang orang;
    orang.umur=10;
    strcpy(orang.nama,"fahmi");
    strcpy(orang.jk,"L");
    strcpy(orang.goldar,"O");
    
    cout<<orang.umur<<endl;
    cout<<orang.nama<<endl;
    cout<<orang.jk<<endl;
    cout<<orang.goldar<<endl;
}
