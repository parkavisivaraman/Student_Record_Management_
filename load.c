#include"header.h"
void load(ST **head,ST **tail)
{
	ST *newnode;
	int rollno;
	char Name[20];
	float Marks;
	FILE* fs=fopen("student.data","r");
	if(fs == NULL)
	{
		printf("No previous records found\n");
	       	return;
	}
	while(fscanf(fs, "%d %19s %f", &rollno, Name, &Marks) == 3)
	{
		newnode = (ST*)malloc(sizeof(ST));
		if(newnode == NULL)
	       	{
			fclose(fs);
			return;
	       	}
		newnode->Rollno = rollno;
	       	strcpy(newnode->Name, Name);
		newnode->Marks = Marks;
		newnode->next = NULL;
	       	newnode->prev = NULL;
		if(*head == NULL)
		{
			*head = newnode;
			*tail = newnode;
	       	}
	       	else
	       	{
			(*tail)->next = newnode;
			newnode->prev = *tail;
			*tail = newnode;
		}
		if(rollno > Rollno)
		      	Rollno = rollno;
	}
	fclose(fs);
}
