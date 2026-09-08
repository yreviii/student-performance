#include <stdio.h> 
int main() { 
    char studentName[50]; 
    int studentID; 
    int completedLabs, totalLabs; 
    float quizMarks, assignmentMarks, projectMarks; 
    float labPercentage, academicScore; printf("Enter student name: "); 
    scanf(" %[^\n]", studentName); 
    printf("Enter student ID: "); 
    scanf("%d", &studentID); 
    printf("Enter number of completed labs: "); 
    scanf("%d", &completedLabs); 
    printf("Enter total number of labs: "); 
    scanf("%d", &totalLabs); 
    printf("Enter quiz marks: "); 
    scanf("%f", &quizMarks); 
    printf("Enter assignment marks: "); 
    scanf("%f", &assignmentMarks); 
    printf("Enter project marks: "); 
    scanf("%f", &projectMarks); 
    labPercentage = ((float)completedLabs / totalLabs) * 100; 
    academicScore = quizMarks + assignmentMarks + projectMarks; 
    printf("\n====================================\n");
     printf(" STUDENT PERFORMANCE REPORT\n"); 
     printf("====================================\n");
      printf("Student Name : %s\n", studentName); 
      printf("Student ID : %d\n", studentID); 
      printf("Completed Labs : %d out of %d\n", 
        completedLabs, totalLabs); 
        printf("Lab Percentage : %.2f%%\n", labPercentage); 
        printf("Quiz Marks : %.2f\n", quizMarks); 
        printf("Assignment Marks : %.2f\n", assignmentMarks); 
        printf("Project Marks : %.2f\n", projectMarks); 
        printf("Academic Score : %.2f\n", academicScore);
        printf("====================================\n"); 
        
return 0; }

