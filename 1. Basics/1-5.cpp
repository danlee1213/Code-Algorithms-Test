#include <stdio.h>

//For given ID number, print out one's age and sex according to the ID number.
//1,3 = male / 2,4 = female
//1,2 -> 19xx / 3,4 -> 20xx
//Using scanf, printf instead of cin, cout -> scanf, printf is faster than cin, cout
int main(){
    //Debugging
    //freopen("input.txt", "rt", stdin);
    char ID[20];
    int year, age;
    //Read ID in a string format
    scanf("%s", &ID);
    //Distinguish sex from ID, reading in string format
    //In the case that string has integers
    //According to ASCII, in order to change string in array to integer, -48
    if(ID[7] == '1' || ID[7] == '2') year = 1900 + ((ID[0]-48)*10 + ID[1]-48);
    else year = 2000 + ((ID[0]-48)*10 + ID[1]-48);
    age = 2019 - year+1;
    printf("%d ", age);
    //Identify sex
    if(ID[7] == '1' || ID[7] == '3') printf("M");
    else printf("W");

    return 0;
}