#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<limits.h>
#include"addcontact.c"
#include "deletecontact.c"
#include "display.c"
int main ()
{

    struct contact{
        long n;
    char Name [50];
    }s1;
    for (int i=0;i<=5;i++){
        for (int j=0;j<=50;j++){
            if (i==0 || j==0 || i==50 || j==50){
                printf ("*");
            }
            else {
                printf (" ");
            }
        }
        printf ("\n");
    }
    printf ("\n**** WELCOME TO OUR CONTACT MANAGEMENT SYSTEM ****\n");
    int ch;
   do
    {
        printf ("\n");
        printf ("1: add a contact \n");
        printf ("\n2: delete a contact \n");
        printf ("\n3: display a contact \n");
        printf ("\n4: Exit :");
        printf ("Enter the choice :");
        scanf ("%d",&ch);
        switch (ch){
            case 1:
            printf ("Enter the phone number you want to add  :");
            scanf ("%ld",&s1.n);
            contact();
            printf ("\nEnter the name :");
            scanf ("%s",s1.Name);
            name ();
            break;

            case 2:
            del();
            break;

            case 3:
            display();
            break;

            case 4:
            exit (1);
            break;


            default:
            printf ("Ran outta choice :");
            break;

        }
    }while (ch!=50);
    return 0 ;
}

