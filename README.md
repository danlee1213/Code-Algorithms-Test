# Code-Algorithms-Test
Prepare Algorithms Tests

## ASCII Table (Cstring to integer)
1. Integer: 0 ~ 9 -> ASCII: 48 ~ 57
2. Upper letter: A ~ Z-> ASCII: 65 ~ 90
3. Lower letter: a ~ z -> ASCII: 97 ~ 122

## Global variable and Local variable
* In the case of global variable, it automatically initializes its variable as 0, ex)int count[50000]
* But in the local variable, we have to initialize variable as 0, ex)int count[50000] = {0,}
* Local variable -> goes to stack of the memory -> not enough storage for big array
* Global variable -> goes to data of the memory -> big enough to store big array

## Selection Sort
![image](https://user-images.githubusercontent.com/72503871/104643445-69f48a00-56e7-11eb-8a59-8e6f44e3d31a.png)
```C++
/***Selection Sort (Ascending Order)***/
//Can ignore the last number since the number has been sorted before reaches the last number
for(int i=0; i<n-1; ++i){
  index = i; //Initialize index as i for every loop
  for(int j=i+1; j<n; ++j){
    //Searching the smallest number and store it's number in the variable 'index'.
    if(a[j] < a[j+1]) index = j;
  }
  //Swap numbers
  temp = a[i];
  a[i] = temp;
  a[index] = temp;
}
```
## Bubble Sort
![image](https://user-images.githubusercontent.com/72503871/104643560-90b2c080-56e7-11eb-87c9-8ea5301cabaa.png)
