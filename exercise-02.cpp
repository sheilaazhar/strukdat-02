/*
Nama		: Sheila Azhar Almufarida
NPM			: 140810180001
Tanggal Buat: 5 Maret 2019
Nama Program: exercise-02
*/

#include <iostream>
#include <string.h>

using namespace std;

struct Theater{
	int room;
	char seat[3];
	char movieTitle[30];
};

int main(){
	Theater film;
	film.room=7;
	strcpy(film.seat,"J9");
	strcpy(film.movieTitle,"Adit & Jarwo");
	
	cout<<"Room : "<<film.room<<endl;
	cout<<"Seat : "<<film.seat<<endl;
	cout<<"Movie Title : "<<film.movieTitle<<endl;
}
