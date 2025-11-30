/* Safa Thakur
57/251P068
Comps - C */ 
#include <stdio.h>
#include <string.h>

struct student_record {
    char name[50];
    int roll_number;
    int total_marks;
};

int main() {
    struct student_record students[5];
    int i, topper_index = 0;

    for(i = 0; i < 5; i++) {
        printf("\nEnter details for Student %d\n", i + 1);

        printf("Enter Name:\n");
        fflush(stdin);                 // clear leftover input
        fgets(students[i].name, 50, stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; // remove newline

        printf("Enter Roll Number:\n");
        scanf("%d", &students[i].roll_number);

        printf("Enter Total Marks:\n");
        scanf("%d", &students[i].total_marks);

        getchar();  // consume newline after scanf
    }

    for(i = 1; i < 5; i++) {
        if(students[i].total_marks > students[topper_index].total_marks) {
            topper_index = i;
        }
    }

    printf("\n----- Topper Details -----\n");
    printf("Name:\n%s\n", students[topper_index].name);
    printf("Roll Number:\n%d\n", students[topper_index].roll_number);
    printf("Total Marks:\n%d\n", students[topper_index].total_marks);

    return 0;
}
