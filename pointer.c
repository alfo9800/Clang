#include <stdio.h>
#include <string.h>

void main() {
	char buffer[80];
	char *p=buffer; //포인터변수 선언. 크기는 80byte
	//*p포인터변수 = 값이 저장, p변수는 주소(어드레스 &)가 저장됨.
	
	int len; //문자열의 길이를 저장하는 변수
	int cnt=0; //문자열 역순 구하기에 사용되는 반복(제한)횟수
	
	printf("문자열을 입력하세요: ");
	scanf("%s", p); //p는 주소인덱스(인덱스를 가지고 있는 변수)를 뜻함. (p변수를 사용하기 떄문에 &없음.)
	len=strlen(p);
	printf("문자열의 길이는 %d개 입니다.\n", len);
	printf("p변수의 인덱스주소는 %d\n", p);
	
	while(*p) {
		p=p+1; //=>p++; //인데스 주소를 1씩 증가시키기. *p변수에 데이터가 공백이 나올 때까지 반복
		}
	printf("while을 거친 후 p변수의 인덱스 주소는 %d \n", p);
	printf("문자열을 역순으로 출력하기: \n");
	while(cnt<len){
		p=p-1; //=>p--; //인덱스 주소를 1씩 감소시키기
		printf("현재 인덱스 주소는 %d, 해당 인덱스 주소의 값은", p);
		putchar(*p); //현재 p인덱스 주소의 *p변수값을 1개씩 출력함수 putchar(1글자 출력)
		printf("\n");
		cnt=cnt+1; //=>cnt++;
	}
	putchar('\n'); //글자를 출력하지 않고, 엔터치는 효과 \new line
	printf("출력한 이후의 인덱스 번호는 %d \n", p);
	getchar(); //버퍼내용 삭제
}