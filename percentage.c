/* Prathmesh Giridhar Panchlinge 
prn no.2503033111372L008
percentage code*/

#include <stdio.h>
int main(){
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks > 100) {
        printf("not found:\n");
    } else if (marks >= 90) {
        printf("Grade: A+\n");
    } else if (marks >= 80) {
        printf("Grade: A\n");
    } else if (marks >= 70) {
        printf("Grade: B\n");
    } else if (marks >= 60) {
        printf("Grade: C\n");
    } else if (marks >= 50) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F (Fail)\n");
    }

    return 0;
}