#include <stdio.h>
// int main() function
int main(){
	// Input
	int n, i, j;
	scanf("%d", &n);
	// Process and Print Output
	for(i = 1; i <= n; i++){
		for(j = 1; j <= i; j++){
			printf("%d", j);
		}
		printf("\n");
	}
	return 0;
}
