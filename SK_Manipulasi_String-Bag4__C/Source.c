#pragma warning(disable:4996)

#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
	char password[9];
	int compare;

	printf("Enter your password: ");
	scanf("%8s", password);

	compare = strcmp(password, "secret");

	if (compare == 0) {
		puts("You've been granted access!");
	} else {
		puts("Intruder alert!");
	}

	_getch();
	return(0);
}