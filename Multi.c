#include <stdio.h> //라이브러리 import
int multi(int x, int y);//함수 선언 =  스프링의 인터페이스와 같은 역할


void main() {
	int a, b, c; //int 정수현 변수. a b c 선언
	printf("곱하기할 첫 번째 수를 입력하세요 : ");
	scanf("%d", &a);
	printf("곱하기할 두 번째 수를 입력하세요 : ");
	scanf("%d", &b);
	c = multi(a,b);
	printf("실행 결과는 %d * %d = %d 입니다\n", a,b,c);
}


int multi(int x, int y) {
	return (x*y);
}