#define _CRT_SECURE_NO_WARNINGS 
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include "Header.h"

struct person kolvo[100];
struct inf kolvo1[100];
int numContacts = 0;
//int numContacts1 = 0;
struct inf information;
void add()
{
	struct person a;
	struct inf f;
	int b;
	printf("Jelaemoe kol-vo zapisey");
	scanf("%d", &b);
	for (int i=0; i < b; i++)
	{
		printf("Enter first name");
		scanf("%s", a.firstname);
		printf("Enter last name: ");
		scanf("%s", a.lastname);
		printf("Enter Otchestvo");
		scanf("%s", a.Otchestvo);
		printf("Enter job: ");
		scanf("%s", f.job);
		printf("Enter phone number: ");
		scanf("%s", a.number);
		printf("Enter email address: ");
		scanf("%s", f.email);
		printf("Enter social media link: ");
		scanf("%s", f.socialmedia);
		printf("Enter messenger profile link: ");
		scanf("%s", f.messenger);
		kolvo[numContacts] = a;
		kolvo1[numContacts] = f;
		numContacts++;
		//numContacts1++;
		printf("Contact added successfully.\n");
	}
    
}
//создать структуру фиктивную, указатели будут передаваться на функции (копирования, вывод) функция strcpy
void enter()
{
	int index;
	printf("Enter first name");
	scanf("%s", kolvo[index].firstname);
	printf("Enter last name: ");
	scanf("%s", kolvo[index].lastname);
	printf("Enter new Otchestvo: ");
	scanf("%s", kolvo[index].Otchestvo);
	printf("Enter new job: ");
	scanf("%s", kolvo1[index].job);
	printf("Enter new phone number: ");
	scanf("%s", kolvo[index].number);
	printf("Enter new email address: ");
	scanf("%s", kolvo1[index].email);
	printf("Enter new social media link: ");
	scanf("%s", kolvo1[index].socialmedia);
	printf("Enter new messenger profile link: ");
	scanf("%s", kolvo1[index].messenger);
	printf("Contact edited successfully.\n");

	
}

void copy()
{
struct person p;
strncpy(p.firstname, "firstname", 50);



}
void edit()
{
	int index;
	printf("Enter the index of the contact you wish to edit: ");
	scanf("%d", &index);

	if (index < 0 || index >= numContacts)
	{
		printf("Invalid index.\n");
		return;
	}
	void enter();
	
}

void delete1() {
	int index;
	printf("Enter the index of the contact you wish to delete: ");
	scanf("%d", &index);

	if (index < 0 || index >= numContacts) {
		printf("Invalid index.\n");
		return;
	}

	for (int i = index; i < numContacts - 1; i++) {
		kolvo[i] = kolvo[i + 1];
		//kolvo1[i] = kolvo1[i + 1];
	}

	numContacts--;
	printf("Contact deleted successfully.\n");
}

void display() {
	for (int i = 0; i < numContacts; i++) {
		printf("Contact %d:\n", i);
		printf("Name: %s %s\n", kolvo[i].firstname, kolvo[i].lastname);
		//printf("Contact %d:\n", i);
		printf("Otchestvo: %s\n", kolvo[i].Otchestvo);
		printf("Job: %s\n", kolvo1[i].job);
		printf("Phone: %s\n", kolvo[i].number);
		printf("Email: %s\n", kolvo1[i].email);
		printf("Social media: %s\n", kolvo1[i].socialmedia);
		printf("Messenger: %s\n", kolvo1[i].messenger);
		printf("\n");
	}
}


int main()
{
	while (1) {
		printf("\n1. Add Contact\n2. Edit Contact\n3. Delete Contact\n4. Display Contacts\n5. Exit\n");
		int choice;
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			add();
			break;
		case 2:
			edit();
			break;
		case 3:
			delete1();
			break;
		case 4:
			display();
			break;
		case 5:
			return 0;
		default:
			printf("Invalid choice.\n");
		}
	}

	return 0;

}
