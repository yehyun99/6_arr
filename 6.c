#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
 int nums[SIZE];
 int i;

printf("input %i  number:", SIZE);

for (i=0; i<SIZE; i++)
{
	scanf("%d",&nums[i]);
}

	
printf("sorted numbers are:");
for (i=0;i<SIZE;i++)
{
	printf("%d", nums[i]);
}
	

	return 0;
}
