#include <stdio.h>

int main() {
	int t, n;
	scanf("%d", &t);
	
	while(t--){
		scanf("%d", &n);		
		printf("%d\n", (n/5)+(n/25));
	}

	return 0;
}