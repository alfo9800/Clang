#include <stdio.h>

int main() {
	int n, insert, comp, Key;
	
	scanf("%d", &n);
	int Numbers[n];
	for(int i=0; i<n; i++) {
		scanf("%d", Numbers[i]);
	}
	for(insert=1; insert<n; insert++) {
		Key = Numbers(insert);
		for(comp=insert-1; comp>=0; comp--) {
			if(Key < Numbers[comp]) {
				Numbers[comp+1] = Numbers[comp];
				Numbers[comp] = Key;
			}
		}
	}
	for(int i=0; i<n; i++) {
		printf("%d ",Numbers[i]);
	}
	return 0;
}
