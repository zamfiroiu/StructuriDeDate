#include<stdio.h>
#include<stdlib.h>

struct Sablon {
	int id;
	//int ;
	//char* ;
	//float ;
	//char ;
};

struct Sablon initializare(/*parametri necesari*/) {
	struct Sablon s;
	s.id = 1;
	//initializare structura 
	return s;
}

void afisare(struct Sablon s) {
	//afisarea tuturor atributelor.
}

void modifica_Atribut(struct Sablon s) {
	//modificarea unui atribut
}

void dezalocare(struct sablon *s) {
	//dezalocare campuri alocate dinamic
}

int main() {
	struct Sablon s;

	return 0;
}