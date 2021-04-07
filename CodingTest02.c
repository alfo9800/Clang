#include <stdio.h>

int main() {
	int n, prev, next, Temp;
	int Numbers[n];
	scanf("%d", &n); //키보드로 Numbers[]에 들어갈 크기를 지정함.
	for(int i=0; i<n; i++) {
		scanf("%d", &Numbers[i]);
	}
	/* 디버그 : 입력 값이 제대로 입력되었는지 확인*/
	for(int i=0; i<n; i++) {
		printf("%d ", Numbers[i]);
	}
	printf("\n"); //줄바꿈
	
	//이중 for문을 이용해서 정렬 로직
	for(prev=0; prev<n-1; prev++) {
		for(next=prev+1 next<n; next++) {
			if(Numbers[prev]>Numbers[next]) {
				Temp = Numbers[prev];
				Numbers[prev] = Numbers[next];
				Numbers[next] = Temp;
			}
		}
	}
	
	//정렬 후 확인
	for(int i=0; i<n; i++) {
		printf("%d ", Numbers[i]);
	}
	return 0;
}
