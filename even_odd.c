#include <stdio.h>

void main() {
	int a;
	//무한 반복 while문
	while(1){
		printf("짝수,홀수를 판별 할 정수를 입력하세요:\n");
		printf("종료할 때는 숫자0을 입력하세요.");
		scanf("%d", &a); //scanf함수는 변수 앞에 꼭 '&'(어드레스기호)를 붙임.

		if(a==0){
			//IoT로 전송 받은 값이 0이면 반복문 종료
			break;
		}

		//분기문 (=if문)
		if(a%2==0) {
			printf("입력하신 숫자 %d는 짝수 입니다.\n", a);
		}
		if(a%2==1) {
			printf("입력하신 숫자 %d는 홀수 입니다.\n", a); //변수a값이 %d에 바인딩이 됨.
		}
	}
	printf("프로그램이 종료되었습니다.\n");	
}