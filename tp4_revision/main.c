#include <stdio.h>
#include <stdlib.h>

typedef struct Cellule {
	char nom[20];
	char email[30];
	double salaire;
	struct Cellule* suivant;
} Cel;

void init(Cel);

void main() {
	Cel emp1;
	emp1.salaire = 0;
	init(&emp1);
}

void init(Cel* emp1) {
	printf("Nom : ");
	fgets(emp1->nom, 20, stdin);
	printf("Email : ");
	fgets(emp1->email, 30, stdin);
	printf("salaire : ");
	scanf_s("%lf", &emp1->salaire);
}