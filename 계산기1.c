#include <stdio.h>
int add(int x, int y, char z); //add ����
int main() {
	int x, y;
	char z;
	scanf_s("%d %d %c", &x, &y, &z);
	add(x, y, z); //add ȣ��
	return 0;
}
int add(int x, int y, char z){ //add ����
if (z == '+') { printf("%d", x + y); }
if (z == '-') { printf("%d", x - y); }
if (z == '*') { printf("%d", x * y); }
if (z == '/') { printf("%d", x / y); }
return 0;
//�ι�°�� Ŀ���ϰ�ʹ�.
//����°�� Ŀ���ϰ� �ʹ�.
//�� ��°�� Ŀ���ϰ� �ʹ�.
}