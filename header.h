#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct student
{
	int Rollno;
	char Name[20];
	float Marks;
	struct student *next;
	struct student *prev;
}ST;
extern int Rollno;
void add_student(ST **head,ST **tail);
void display(ST *head);
void save(ST *head);
void load(ST **head,ST **tail);
void modify(ST *head);
void delete(ST  **head,ST **tail);
void sort(ST **head);


