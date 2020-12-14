#include <stdio.h>

int main(){
    //freopen("input.txt", "rt", stdin);
    char input[100];
    int count = 0;
    scanf("%s", &input); 

    for(int i=0; input[i] != '\0'; ++i){
        if(input[i] == '(') count ++;
        else if(input[i] == ')') count --;
        //In this question, if ')' is more than '(', answer is wrong. counter < 0 -> false
        if(count < 0) break;
    }
    //If count = 0, it means that '(' meets ')'
    if(count == 0) printf("YES\n");
    //If count < 0, it prints NO as well
    else printf("NO\n");

    return 0;
}

