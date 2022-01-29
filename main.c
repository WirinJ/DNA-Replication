#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void hamming(char *a, char *b) {

	int teller;

	for (int i = 0; i < strlen(a); ++i)
	{
		if (a[i] != b[i]) {
			printf("^");
			teller++;
		} else {
			printf(" ");
		}
	}

	printf("\nDe hamming afstand is: %d.", teller);
}

int main() {

	char mutatie[50];	
	char origineel[50];	

	printf("Geef een DNA streng op: ");
	fgets(origineel, 50, stdin);

	printf("Geef een DNA streng op: ");
	fgets(mutatie, 50, stdin);

	if (strlen(origineel) != strlen(mutatie)) {
		printf("1 DNA Streng is fked up.");
		exit(0);
	}

	printf("%s", origineel);
	printf("%s", mutatie);
	hamming(origineel, mutatie);

	return 0;
}
