#include <stdio.h>
// int main() function
int main(){
	// Input
	int n, i;
	int factorial = 1;
	printf("Enter n: ");
	scanf("%d", &n);
	// Process and Print Output
	for(i = 1; i <= n; i++){
		factorial = factorial * i;
	}
	printf("%d", factorial);	
	return 0;
}
