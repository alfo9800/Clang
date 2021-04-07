#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int Score[n], Rank[n];
	for(int i=0; i<n; i++) {
		scanf("%d", &Score[i]);
		Rank[i] = 0;
	}
	for(int i=0; i<n; i++){
		for(int comp=0; comp<n; comp++) {
			if(Score[i] < Score[comp]) {
				Rank[i] = Rank[i]+1; 
			}
		}
		Rank[i] = Rank[i]+1;
	}
	for(int i=0; i<n; i++) {
		printf("%d번 학생의 점수: %3d, 등수: %2d\n", i, Score[i], Rank[i]); //%3d는 세자릿수. %2d는 두자리수로 만듦.
	}
	return 0;
}
