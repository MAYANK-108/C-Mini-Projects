// Student Management System
// Language: C
// Author: Mayank
// Description: A system which Stores detail of students

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student{
    char name[30];
    int roll_number;
    int marks;
};

int main(){
    int choice,no,search,s=0;
    char n[30];
    int countstudent=0;

    struct student std[45];
    
    while(1){
        printf(" STUDENT MANAGEMENT SYSTEM\n ");
        printf("1. Add new students\n 2. View all students\n 3. Search student by Roll number\n 4.Exit \n ");
        
        printf("Enter your choice: \n");
        scanf("%d",&choice);

        if(choice == 1){
            printf("Enter number of students you want to add:\n");
            scanf("%d",&no);
            if(countstudent+no > 45){
                printf("Student limit exceed (max 45)\n");
                continue;
            }
            countstudent += no;
            for(int i = countstudent-no ; i < countstudent ; i++){

                printf("Enter the name of the student: \n ");
                scanf("%29s",n);
                strcpy(std[i].name,n);

                printf("Enter the roll number of the student \n ");
                scanf("%d",&std[i].roll_number);

                printf("Enter the marks of the student \n ");
                scanf("%d",&std[i].marks);

                printf("Done\n");
            }
            continue;    
        }
        else if(choice == 2){
            // printf("Enter total number of students: \n ");
            // scanf("%d",&no);
            for(int i = 0; i<countstudent ; i++){
                printf("Name = %s\n",std[i].name);
                printf("Roll Number = %d\n",std[i].roll_number);
                printf("Marks = %d\n",std[i].marks);
                printf("\n");
            }
        }
        else if(choice == 3){
            printf("Enter the Roll number \n");
            scanf("%d",&search);

            for(int i = 0 ; i < countstudent ; i++){
                if((std[i].roll_number) == search){
                    printf("Name : %s\n Roll Number: %d\n Marks : %d\n", std[i].name, std[i].roll_number, std[i].marks);
                    s++;
                    break;
                }
            }
            if(s==0){
                printf("Not found\n");
            }
            s=0;
        }
        else if(choice == 4){
            printf(" Exiting Program....\n");
            return 0;
        }
    }
    return 0;
}