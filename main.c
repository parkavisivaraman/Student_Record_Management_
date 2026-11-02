#include "header.h"
int main()
{
	ST *head=0;
	ST *tail=0;
	char choice;
	load(&head,&tail);
	do
	{
	printf("===== STUDENT RECORD MANAGEMENT =====\n\n");
	printf(" [A]-Add Student\n [X]-Delete Student\n [M]-Modify Student\n [D]-Display All Students\n [T]-Sort Students\n [V]-Save Records\n [E]-Exit\n ");
	printf("=====================================\n\n");
	printf("Enter your choice:\n");
	scanf(" %c",&choice);
	switch(choice)
	{
		case 'A':
			add_student(&head,&tail);
			break;
		case 'X':
			delete(&head,&tail);
			break;
                case 'V':
			save(head);
			break;
		case 'D':
			display(head);
			break;
		case 'M':
			modify(head);
			break;
		case 'T':
			sort(&head);
			break;
		case 'E':
			printf("Exit the Program\n");
			break;

		default:
			printf("Invalid choice\n");
	}
	}
	while(choice!='E');
}
