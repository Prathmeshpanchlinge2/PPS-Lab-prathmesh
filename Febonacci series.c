/* Prathmesh Giridhar Panchlinge 
prn no.2503033111372L008
Fibonacci series*/

#include <stdio.h>
int main() {
    int n, PN = 0, CN = 1, NN, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for(i = 1; i <= n; i++) {
        printf("%d \n", PN);
        NN = PN + CN;
        PN = CN;
        CN = NN;
    }

    return 0;
}