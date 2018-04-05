#include <stdio.h>
int add(int x, int y, char z); //add 선언
int main() {
	int x, y;
	char z;
	scanf_s("%d %d %c", &x, &y, &z);
	add(x, y, z); //add 호출
	return 0;
}
int add(int x, int y, char z){ //add 정의
if (z == '+') { printf("%d", x + y); }
if (z == '-') { printf("%d", x - y); }
if (z == '*') { printf("%d", x * y); }
if (z == '/') { printf("%d", x / y); }
return 0;
//두번째로 커밋하고싶다.
//세번째로 커밋하고 싶다.
//네 번째로 커밋하고 싶다.
}