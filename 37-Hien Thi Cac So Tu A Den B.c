#include <stdio.h>
// int main() function
int main(){
	// Input
	int a, b, i;
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	// Process and Print Output
	for(i = a; i <= b; i++){
		printf("%d ", i);
	}	
	return 0;
}
