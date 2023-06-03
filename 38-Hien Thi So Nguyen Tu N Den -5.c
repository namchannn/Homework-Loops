#include <stdio.h>
// int main() function
int main(){
	// Input
	int n, i;
	printf("Enter n: ");
	scanf("%d", &n);
	// Process and Print Output
	for(i = n; i >= -5; i--){
		printf("%d ", i);
	}
	return 0;
}
