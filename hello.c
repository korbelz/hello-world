#include <stdio.h>
#include <string.h>

int main(void)
{
	char name[20];
	printf("Please enter your name: ");
	// Buffer overflow yourself buddy!
	scanf("%s", name);
	printf("Hello %s \n", name );
	printf("this is verison 3.0 \n");
}
