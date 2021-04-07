// factorial 수열 => 6!
#define ONE 1
int factorial(int n) {
	if(n>ONE) {
		return(n*factorial(n-1)); //계속 자기자신을 호출하는 => 재귀함수 호출
		//반환값이 6* 5* 4* 3* 2* 1
	}else {
		//n-1 반복되다가 n이 1이 되었을 경우 1을 반환
		return(ONE);
	}
}