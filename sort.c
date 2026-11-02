
#include "header.h"

void sort(ST **head)
{
    ST *temp;
    char op;
    int swapped;

    printf("====== SORT STUDENT RECORD ======\n");
    printf("[N] -> Sort by Name \n");
    printf("[M] -> Sort by Marks \n");
    printf("[B] -> Back to Menu\n");
    printf("=================================\n");
    printf("Enter option:\n");
    scanf(" %c", &op);

    switch(op)
    {
        case 'N':
            do
            {
                swapped = 0;
                temp = *head;

                while(temp != NULL && temp->next != NULL)
                {
                    if(strcmp(temp->Name, temp->next->Name) > 0)
                    {
                        int roll;
                        float marks;
                        char name[20];

                        roll = temp->Rollno;
                        temp->Rollno = temp->next->Rollno;
                        temp->next->Rollno = roll;

                        strcpy(name, temp->Name);
                        strcpy(temp->Name, temp->next->Name);
                        strcpy(temp->next->Name, name);

                        marks = temp->Marks;
                        temp->Marks = temp->next->Marks;
                        temp->next->Marks = marks;

                        swapped = 1;
                    }

                    temp = temp->next;
                }
            } while(swapped);

            printf("Sorted by Name successfully!\n");
            break;

        case 'M':
            do
            {
                swapped = 0;
                temp = *head;

                while(temp != NULL && temp->next != NULL)
                {
                    if(temp->Marks < temp->next->Marks)
                    {
                        int roll;
                        float marks;
                        char name[20];

                        roll = temp->Rollno;
                        temp->Rollno = temp->next->Rollno;
                        temp->next->Rollno = roll;

                        strcpy(name, temp->Name);
                        strcpy(temp->Name, temp->next->Name);
                        strcpy(temp->next->Name, name);

                        marks = temp->Marks;
                        temp->Marks = temp->next->Marks;
                        temp->next->Marks = marks;

                        swapped = 1;
                    }

                    temp = temp->next;
                }
            } while(swapped);

            printf("Sorted by Marks successfully!\n");
            break;

        case 'B':
            printf("Returning to main menu...\n");
            return;

        default:
            printf("Invalid choice\n");
            return;
    }

    save(*head);
}


