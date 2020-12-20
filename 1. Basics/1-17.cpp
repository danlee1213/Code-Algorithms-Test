#include <stdio.h>

int main(){
    //freopen("input.txt", "rt", stdin);
    int student, question, answer, sum = 0;
    scanf("%d", &student);
    for(int i=0; i<student; ++i){
        scanf("%d %d", &question, &answer);
        //Have to initialize the variable 'sum' for every student, it not, it overwrites its value for every student    
        sum = 0;
       for(int j=1; j<=question; ++j){
           sum += j;
       }
       if(answer == sum) printf("YES\n");
       else printf("NO\n");
    }
    return 0;
}