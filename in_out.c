#include <stdio.h>

void main() {
	int a,b;
	printf("입력(integer)==>"); //표준출력 standard output함수
	scanf("%d", &a); //표준입력 standard input scanf함수는 변수 사용시 &기호가 %decimal 10진수 형태로 입-출력 받겠다고 명시.
	printf("입력(정수형)==>");
	scanf("%d", &b);
	
	//위에서 키보드로 입력 받은 변수 a,b를 출력하겠다고 명시
	printf("\n a=%d, b=%d \n", a, b);
}