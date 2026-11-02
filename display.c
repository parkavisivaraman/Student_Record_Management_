#include "header.h"

void display(ST *head)
{
    ST *temp = head;

    if(temp == NULL)
    {
        printf("No records available\n");
        return;
    }

    while(temp != NULL)
    {
        printf("Roll Number: %d\n", temp->Rollno);
        printf("Name: %s\n", temp->Name);
        printf("Marks: %.2f\n", temp->Marks);

        temp = temp->next;
    }
}
