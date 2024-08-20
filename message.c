#include <stdio.h>
int main()
{
	char message[] = "how are you doing today";
	message[18] = 'T';
	printf("%s", message);
}