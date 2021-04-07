/* 키보드로 입력받은 문자열을 컴퓨터가 알아듣는 아스키코드로 변경 프로그램 */
#include <stdio.h>
#include <string.h>

void main() {
	char buffer[80];
	char *p = buffer;
	int len, cnt=0; //입력받은 문자열을 아스키코드로 변경 할 때 반복구문에 사용

	while(1) {
		printf("문자열을 입력하세요(종료-ctrl+c) :");
		scanf("%s", p); //키보드로 입력받아서 *p변수의 주소에 저장.

		//반복구문 시작
		len = strlen(p); //문자열의 길이를 구하기
		while(cnt<len) { //cnt 0부터 비교기준이 len문자열의 길이값 전까지 출력
			printf("%d  ", *p); //현재 p주소의 값
			//(위) %c는 사람문자 / %d는 아스키문자로 출력된다

			p=p+1; //p인덱스주소는 컴퓨터가 비어었는 메모리 주소를 찾아서 부여
			cnt=cnt+1;
		}
		
		printf("\n");
		//결과: seoul입력하면 출력은 s   e   o   u   l
		cnt=0; //무한반복 때문에 초기화 시킴
	}
}