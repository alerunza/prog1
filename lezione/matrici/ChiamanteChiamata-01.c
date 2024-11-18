#include <stdio.h>
#include <stdbool.h>

int  isOdd(int);
void isOdd2(int,bool*);

int main(void) {
	bool test;
	bool test2;
	int number=4;
	
	//Prima maniera
	test=isOdd(number);
	
	if(test)
	 printf("yes 1\n");
	else
	 printf("no 1\n");

	//Seconda maniera
	isOdd2(number,&test2);
	if(test2)
	 printf("yes 2\n");
	else
	 printf("no 2\n");
	
}


int isOdd(int n)
{
	return (n%2) == 1;
}	

void isOdd2(int n,bool* b)
{
	*b = ((n%2) == 1);
}	