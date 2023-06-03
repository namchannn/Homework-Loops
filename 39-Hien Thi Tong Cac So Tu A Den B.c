#include <stdio.h>
// int main() function
int main(){
	// Input
	int a, b, i;
	int sum = 0;
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	// Process and Print Output
	for(i = a; i <= b; i++){
		sum = sum + i;
	}
	printf("%d", sum);	
	return 0;
}
