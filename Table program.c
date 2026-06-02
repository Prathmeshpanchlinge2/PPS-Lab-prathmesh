/* Prathmesh Giridhar Panchlinge 
prn no.2503033111372L008
Table program */

#include <stdio.h>
int main(){
    int i,table,num;
    printf("Enter The Number: ");
    scanf("%d",&num);
    for(i=1;i<=10;i++){
        table=i*num;
        printf("%d\n",table);
    }
    return 0;
}