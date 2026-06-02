/* Prathmesh Giridhar Panchlinge 
prn no.:-2503033111372L008
star pattern ⭐ */


#include <stdio.h>
int main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=0;j<=i;j++){
            printf("*\t",i);
        }
        printf("\n");
    }
    
    //reverse triangle
  for(i=5;i>=1;i--){
        for(j=0;j<=i;j++){
            printf("*\t",j);
        }
        printf("\n");
     }
     return 0;
}
 