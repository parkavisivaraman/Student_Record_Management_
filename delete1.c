
#include "header.h"

void delete(ST **head, ST **tail)
{
    char option, op;
    int choice = 1;
    int rollno;
    char Name[20];
    ST *temp;

    while(choice)
    {
        printf("====== DELETE STUDENT RECORD ======\n");
        printf("[R] -> Delete by Rollno\n");
        printf("[N] -> Delete by Name\n");
        printf("[B] -> Back to menu\n");
        printf("===================================\n");
        printf("Enter Option: ");
        scanf(" %c", &option);

        temp = *head;

        switch(option)
        {
            case 'R':
                printf("Enter the rollno you want to delete: ");
                scanf("%d", &rollno);

                while(temp != NULL)
                {
                    if(temp->Rollno == rollno)
                        break;

                    temp = temp->next;
                }

                if(temp == NULL)
                {
                    printf("Student not found\n");
                    break;
                }

                printf("Are you sure you want to delete? (Y/N): ");
                scanf(" %c", &op);

                if(op == 'Y' || op == 'y')
                {
                    if(temp == *head)
                    {
                        *head = temp->next;

                        if(*head != NULL)
                            (*head)->prev = NULL;
                        else
                            *tail = NULL;
                    }
                    else if(temp == *tail)
                    {
                        *tail = temp->prev;
                        (*tail)->next = NULL;
                    }
                    else
                    {
                        temp->prev->next = temp->next;
                        temp->next->prev = temp->prev;
                    }

                    free(temp);
                    save(*head);
                    printf("Student deleted successfully!\n");
                }
                else
                {
                    printf("Deletion cancelled\n");
                }
                break;

            case 'N':
                printf("Enter the Name: ");
                scanf("%19s", Name);

                while(temp != NULL)
                {
                    if(strcmp(temp->Name, Name) == 0)
                        break;

                    temp = temp->next;
                }

                if(temp == NULL)
                {
                    printf("Student not found\n");
                    break;
                }

                printf("Are you sure you want to delete? (Y/N): ");
                scanf(" %c", &op);

                if(op == 'Y' || op == 'y')
                {
                    if(temp == *head)
                    {
                        *head = temp->next;

                        if(*head != NULL)
                            (*head)->prev = NULL;
                        else
                            *tail = NULL;
                    }
                    else if(temp == *tail)
                    {
                        *tail = temp->prev;
                        (*tail)->next = NULL;
                    }
                    else
                    {
                        temp->prev->next = temp->next;
                        temp->next->prev = temp->prev;
                    }

                    free(temp);
                    save(*head);
                    printf("Student deleted successfully!\n");
                }
                else
                {
                    printf("Deletion cancelled\n");
                }
                break;

            case 'B':
                printf("Returning to main menu...\n");
                return;

            default:
                printf("Invalid choice\n");
                break;
        }

        printf("Do you want to delete another student? (1-Yes / 0-No): ");
        scanf("%d", &choice);
    }
}

