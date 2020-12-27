#include <stdio.h>

int main(void) {
	// your code goes here
	int marks[4],i;
	int *ptr;
	ptr = &marks[0];
	for( i=0;i<4;i++) {

	   printf("enter the marks of the students %d: \n ",i+1);
	   scanf("%d",ptr);
	   ptr++;
}

	for( i=0;i<4;i++) {

	   printf(" the marks of the students  %d is %d\n ",i+1,marks[i]);
	   
}
	return 0;
}

