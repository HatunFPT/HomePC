#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void test(int a){
	a=100;
}
int main (){
	int a=10;
	test(a);
	printf("%d",a);
	return 0;
}

