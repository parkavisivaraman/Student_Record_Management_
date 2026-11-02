#include "header.h"
void modify(ST *head)
{
	ST *temp;
	int rollno;
	char Name[20];
	float Marks;
	printf("======MODIFY STUDENT RECORD======\n");
	printf("[R]->Search by Roll no\n[N]->Search by name\n[B]->Back to Menu\n");
	printf("=================================\n");
	printf("Enter Option");
	char option;
	scanf(" %c",&option);
	temp=head;
	switch(option)
	{
		case 'R':
			  printf("Enter the rollno you want to modify:");
			  scanf("%d",&rollno);
			  while(temp!=NULL)
			  {
				  if(temp->Rollno==rollno)
					  break;
				  temp=temp->next;
			  }
			  if(temp == NULL)
                          {
                           printf("Student not found\n");
                           break;
                          }
			  printf("Enter Name:");
			  scanf("%s",Name);
			  printf("Enter mark:");
			  scanf("%f",&Marks);
			  strcpy(temp->Name,Name);
			  temp->Marks=Marks;
			  break;
		case 'N':
			  printf("Enter the Name:");
			  scanf("%s",Name);
			  while(temp!=NULL)
			  {
				  if(strcmp(temp->Name,Name)==0)
					  break;
				  temp=temp->next;
			  }
			  if(temp == NULL)
                          {
                          printf("Student not found\n");
                          break;
                          }
			  printf("Enter Name:");
			  scanf("%s",Name);
			  printf("Enter mark:");
                          scanf("%f",&Marks);
                          strcpy(temp->Name,Name);
                          temp->Marks=Marks;
                          break;
			  case 'B':
			  printf("Returning to main menu...\n");
			  return;
			  default:
			  printf("invalid choice\n");
			  break;
	}
	save(head);
	printf("Student record modified successfully!\n");
}



			

