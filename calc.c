#include <stdio.h>

void main() {
	int a,b,c,d;
	a=30;b=20;
	c = a+b;
	d = a>5 && b<10;
	// 1 ||(+) 0 = 1(true), 1 &&(x) 0 = 0(false)
	//논리연산-: true:1/false:0 사용, and연산(&&곱연산), or연산(||덧셈연산), not연산(반대연산)
	printf("d=%d\n", d); //즉, 결과는 d=0; === ||(덧셈 했을 경우) 결과는 d=1; 1(전원ON), 2(전원OFF)
	
	//관계연산 <> 대소관계를 비교
	if(a>b) {
		printf("a는 b보다 크다.\n");
	} else {
		printf("b는 a보다 크거나 같다.\n");
	}
}