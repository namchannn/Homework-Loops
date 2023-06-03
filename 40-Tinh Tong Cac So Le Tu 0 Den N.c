#include <stdio.h>
// int main() function
int main(){
	// Input
	int n, i;
	int sum = 0;
	printf("Enter n: ");
	scanf("%d", &n);
	// Process and Print Output
	for(i = 0; i <= n; i++){
		if(i % 2 == 1){
			sum = sum + i;
		}
	}
	printf("%d", sum);	
	return 0;
}
