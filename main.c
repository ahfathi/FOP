#include<stdio.h>

int isPrime(int num) {
int i;
if(num==1)
return 0;
if(num==2)
return 1;
for(i=2;i<num;i++)
if(num%i==0)
return 0;
return 1;
}

int absVal(int num) {
	if (num < 0) return -num;
	return num;
}

int main() {
	printf("Hello world!");
	return 0;	
}
