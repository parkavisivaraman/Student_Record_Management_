#include "header.h"
void save(ST *head)
{
	if(head==NULL)
		fprintf(stderr,"NO record in list...\n");
	FILE *fs=fopen("student.data","w");
	ST *temp=head;
	while(temp!=NULL)
	{
		fprintf(fs, "%d %s %f\n",temp->Rollno, temp->Name, temp->Marks);
		temp=temp->next;
	}
	fclose(fs);
printf("Data Stored Successfully\n");
}
