#include <stdio.h>
#include <algorithm>

int match1[60];
int match2[60];

int main(){
    //freopen("input.txt", "rt", stdin);
    char input[101];
    scanf("%s", &input);
    for(int i=0; input[i]!='\0'; ++i){
        //Scan upper letter first
        if(input[i] >= 65 && input[i] <= 90){
            //From index 1~26 -> Matches to A ~ Z
            match1[input[i]-64]++; //Capital A = 65, so A-64 = 1 -> In the array of match1, index 1 indicates number of 'A' counted
        }
        else if(input[i] >= 95 && input[i] <= 122){
            //Lower letter (ASCII 97~122) then starts from 27~52
            match1[input[i]-70]++;
        }
    }
    scanf("%s", &input);
    for(int i=0; input[i]!='\0'; ++i){
        //Scan upper letter first
         if(input[i] >= 65 && input[i] <= 90){
            //From index 1~26 -> Matches to A ~ Z
            match2[input[i]-64]++; //Capital A = 65, so A-64 = 1 -> In the array of match1, index 1 indicates number of 'A' counted
        }
        else if(input[i] >= 95 && input[i] <= 122){
            //Lower letter (ASCII 97~122) then starts from 27~52
            match2[input[i]-70]++;
        }
    }
    //Check wheter input is an anagram or not
    //A~Z + a~z = 52
    for(int i=1; i<=52; ++i){
        if(match1[i] != match2[i]){
            printf("NO\n");
            exit(0);
        }
    }
    printf("YES\n");

    return 0;
}