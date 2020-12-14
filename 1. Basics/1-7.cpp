#include <stdio.h>

int main(){
    //freopen("input.txt", "rt", stdin);
    char input[101], result[101];
    //Indicate the array index of the result buffer
    int pos = 0;
    //scanf() can't read space(\n) between Cstring
    //gets() can read space(\n) between Cstring
    gets(input);

    for(int i=0; input[i] != '\0'; ++i){
        //If string is not a blank
        if(input[i] != ' '){
            //Distinguish Upper letter according to ASCII
            if(input[i] >= 65 && input[i] <= 90){
                //Move all Upper letters to result buffer
                //According to ASCII, A = 65, a = 97; A + 32 = a
                //Then switch to the lower letters
                result[pos++] = input[i]+32;
            }
            //Distinguish Lower letter in the array
            else{
                result[pos++] = input[i];
            }
        }
    }

    //Indicate the end of the string in the result buffer
    result[pos] = '\0';
    printf("%s\n", result);

    return 0;
}