//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////trebuie sa folositi fisierul masini.txt
////sau va creati un alt fisier cu alte date
//
//struct StructuraMasina {
//	int id;
//	int nrUsi;
//	float pret;
//	char* model;
//	char* numeSofer;
//	unsigned char serie;
//};
//typedef struct StructuraMasina Masina;
//
////creare structura pentru un nod dintr-o lista dublu inlantuita
//
////creare structura pentru Lista Dubla 
//
//Masina citireMasinaDinFisier(FILE* file) {
//	char buffer[100];
//	char sep[3] = ",\n";
//	fgets(buffer, 100, file);
//	char* aux;
//	Masina m1;
//	aux = strtok(buffer, sep);
//	m1.id = atoi(aux);
//	m1.nrUsi = atoi(strtok(NULL, sep));
//	m1.pret = atof(strtok(NULL, sep));
//	aux = strtok(NULL, sep);
//	m1.model = malloc(strlen(aux) + 1);
//	strcpy_s(m1.model, strlen(aux) + 1, aux);
//
//	aux = strtok(NULL, sep);
//	m1.numeSofer = malloc(strlen(aux) + 1);
//	strcpy_s(m1.numeSofer, strlen(aux) + 1, aux);
//
//	m1.serie = *strtok(NULL, sep);
//	return m1;
//}
//
//void afisareMasina(Masina masina) {
//	printf("Id: %d\n", masina.id);
//	printf("Nr. usi : %d\n", masina.nrUsi);
//	printf("Pret: %.2f\n", masina.pret);
//	printf("Model: %s\n", masina.model);
//	printf("Nume sofer: %s\n", masina.numeSofer);
//	printf("Serie: %c\n\n", masina.serie);
//}
//
//void afisareListaMasini(/*lista dubla de masini*/) {
//	//afiseaza toate elemente de tip masina din lista dublu inlantuita
//	//prin apelarea functiei afisareMasina()
//}
//
//void adaugaMasinaInLista(/*lista dubla de masini*/ Masina masinaNoua) {
//	//adauga la final in lista primita o noua masina pe care o primim ca parametru
//}
//
//void adaugaLaInceputInLista(/*lista dubla de masini*/ Masina masinaNoua) {
//	//adauga la inceputul listei dublu inlantuite o noua masina pe care o primim ca parametru
//}
//
//void* citireLDMasiniDinFisier(const char* numeFisier) {
//	//functia primeste numele fisierului, il deschide si citeste toate masinile din fisier
//	//prin apelul repetat al functiei citireMasinaDinFisier()
//	//ATENTIE - la final inchidem fisierul/stream-ul
//}
//
//void dezalocareLDMasini(/*lista dubla de masini*/ int* nrMasini) {
//	//sunt dezalocate toate masinile si lista dublu inlantuita de elemente
//}
//
//float calculeazaPretMediu(/*lista de masini*/) {
//	//calculeaza pretul mediu al masinilor din lista.
//	return 0;
//}
//
//void stergeMasinaDupaID(/*lista masini*/ int id) {
//	//sterge masina cu id-ul primit.
//	//tratati situatia ca masina se afla si pe prima pozitie, si pe ultima pozitie
//}
//
//char* getNumeSoferMasinaScumpa(/*lista dublu inlantuita*/) {
//	//cauta masina cea mai scumpa si 
//	//returneaza numele soferului acestei maasini.
//	return NULL;
//}
//
//int main() {
//
//
//	return 0;
//}