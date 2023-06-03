#include <stdio.h>
// int main() function
int main(){
	// Input
	int n, i;
	printf("Enter n: ");
	scanf("%d", &n);
	// Process and Print Output
	for(i = 1; i <= n; i++){
		if (n % i == 0){
			printf("%d ", i);
		}
	}	
	return 0;
}
