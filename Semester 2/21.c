#include <stdio.h>

struct num {
	int x;
	int y;
	int z;
};

int main () {
	
	int l=0;
	struct num n;
	
	printf("Enter 1st num: \n");
	scanf("%d", &n.x);
	
	printf("Enter 2nd num: \n");
	scanf("%d", &n.y);
	
	printf("Enter 3rd num: \n");
	scanf("%d", &n.z);
	
	if(n.x >l) {
		l=n.x;	
	}
	if(n.y >l) {
		l=n.y;	
	}
	if(n.z >l) {
		l=n.z;	
	}
	
	printf("%d is the largest number \n",l);
	
}
