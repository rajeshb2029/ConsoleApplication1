#include <stdio.h>
#include <string.h>

struct Person
{
	char firstName[20];
	char lastName[20];
	char ID[6];
	float salary;
};

int main(int argc, char **argv)
{
	Person test;
	strcpy(test.firstName, "First");
	strcpy(test.lastName, "Last");
	strcpy(test.ID, "123456");
	test.salary = 100.0;

	getchar();
	return 0;
}