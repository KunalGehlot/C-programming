/*
 *	WAP TO ENTER AND PRINT TEST VALUES IN UNION
 */

#include <stdio.h>

union employes {
	int id;
	char name[20];
	char desig[20];
};

int main() {

	union employes r1;
	union employes r2;

	printf("Employ #1\n");
	printf("\tEnter IDno: \n");
	scanf("%d", &r1.id);
	printf("\tID #        : %d\n", r1.id);
	printf("\tEnter employ name: \n");
	scanf("%s", r1.name);
	printf("\tName        : %s\n", r1.name);
	printf("\tEnter designatiom: \n");
	scanf("%s", r1.desig);
	printf("\tDesignation : %s\n", r1.desig);

	printf("Employ #2\n");
	printf("\tEnter IDno: \n");
	scanf("%d", &r2.id);
	printf("\tID #        : %d\n", r2.id);
	printf("\tEnter employ name: \n");
	scanf("%s", r2.name);
	printf("\tName        : %s\n", r2.name);
	printf("\tEnter designation: \n");
	scanf("%s", r2.desig);
	printf("\tDesignation : %s\n", r2.desig);

}
