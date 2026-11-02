#include "header.h"
int Rollno=100;
void add_student(ST **head,ST**tail)
{
        ST *newnode;
        int option=1;
        while(option)
        {
        newnode=(ST*)malloc(sizeof(ST));
        if(newnode == NULL)
        {
            printf("Memory allocation failed\n");
            return;
        }
	newnode->Rollno=++Rollno;
        printf("Enter Name\n");
        scanf(" %s",newnode->Name);
        printf("Enter Marks\n");
        scanf(" %f",&newnode->Marks);
        newnode->prev=NULL;
        newnode->next=NULL;
        if(*head==NULL)
        {
                *head=newnode;
                *tail=newnode;
        }
        else
        {
                (*tail)->next=newnode;
                newnode->prev=*tail;
                (*tail)=newnode;
        }
	printf("Student added successfully!\n");
        printf("Generated Roll Number: %d\n", newnode->Rollno);
        printf("Do you want to cont.(0 or 1)\n");
        scanf("%d",&option);
        }
	save(*head);
}
                                 
