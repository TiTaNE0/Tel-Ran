/*
 * var.c
 *
 *  Created on: Mar 9, 2020
 *      Author: User
 */

int main(){
	int a;
	printf("var a = %d\n", a);

	a = 127;
	printf("var a = %d\n", a);

	a = a + 1;
	printf("var a = %d\n", a);

	char b = 127;
	b = b + 1;
	printf("var res = %d\n", b);

	int res = a / 2;
	printf("var res = %d\n", res);

	res = res + 1;
	printf("res = %d\n", res);

	res = res / 2;
	printf("res = %d\n", res);

	float c = 23.9;
	printf("%f", c);

	a = c;
	printf("d%, f%", a, c);

	int res1 = 5 % 1;
	printf("res1 = %f", a / b);

	return 0;

}
