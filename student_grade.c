#include <stdio.h>

int calculate(int studentNumber, int passingGrade )
{
int studentCount[100];
int failedStudents;
int classAverage;
int total=0;
int i;


for( int i=0; i<studentNumber;i++){
    printf("%d. student's grade: ", i + 1);
    scanf("%d",&studentCount[i]);
    total += studentCount[i];
}

classAverage = total/studentNumber;
printf("Class average : %d \n", classAverage);

for( int i=0; i<studentNumber;i++)
{
    if( studentCount[i]<passingGrade )
    failedStudents++;
}

return failedStudents;

}


int main() {
  
    int studentNumber,passingGrade,failCount;
   
     do {
        printf("Student Number (1-100): ");
        scanf("%d", &studentNumber);

        if (studentNumber < 1 || studentNumber > 100) {
            printf("Invalid input. Please try again.\n");
        }

    } while (studentNumber < 1 || studentNumber > 100);
        printf("Passing Grade: ");
        scanf("%d",&passingGrade);
        failCount= calculate(studentNumber,passingGrade);
        printf("Failed Student Count: %d \n",failCount);
    
getchar(); // getchar() is used to prevent the console window from closing immediately
getchar();


    return 0;
}

