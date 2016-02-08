#include <stdio.h>
#include <string.h>

struct Person
{
	char firstName[40];
	char lastName[40];
	char ID[10];
	float salary;
};

void printPersonDetails(struct Person *person) 
{
	printf("----- Person details ----- \n");
	printf("Person ID: %s\n", person->ID);
	printf("First name: %s \n", person->firstName);
	printf("Last name: %s \n", person->lastName);
	printf("Salary: %f\n", person->salary);
}

int main(int argc, char **argv)
{
	Person testPerson;
	strcpy_s(testPerson.firstName, sizeof(testPerson.firstName), "First");
	strcpy_s(testPerson.lastName, sizeof(testPerson.lastName), "Last");
	strcpy_s(testPerson.ID, sizeof(testPerson.ID), "123456");
	testPerson.salary = 100.0;

	printPersonDetails(&testPerson);

	getchar();
	return 0;
}