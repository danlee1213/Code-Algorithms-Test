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

## Reverse Integer Overflow
* If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
```C++
if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && pop > 7)) return 0;
if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && pop < -8)) return 0;
```
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
  a[i] = a[index];
  a[index] = temp;
}
```
## Bubble Sort
![image](https://user-images.githubusercontent.com/72503871/104643560-90b2c080-56e7-11eb-87c9-8ea5301cabaa.png)
```C++
/***Bubble Sort (Ascending Order)***/
for(int i=0; i<n-1; ++i){
  for(int j=0; j<n-i-1; ++j){
    //If previous one is bigger, swap each other
    if(a[j] > a[j+1]){
      temp = a[j];
      a[j] = a[j+1];
      a[j+1] = temp;
    }
  }
}
```
## Insertion Sort
![image](https://user-images.githubusercontent.com/72503871/104738189-27cb5700-5780-11eb-9e58-5cfbfeb0772c.png)
```C++
/***Insertion Sort (Ascending Order)***/
for(int i=1; i<n; ++i){
  temp = a[i];
  for(int j=i-1; j>=0; --j){
    if(a[j] > temp) a[j+1] = a[j];
    else break;
  }
  a[j+1] = temp; //It tracks the last index no. of j, so temp will be inserted after the last j
  //ex) if i=1, j=0 and j ends when j=-1, then a[j+1] = a[0] in this case.
}
```
## Merge Sort
![image](https://user-images.githubusercontent.com/72503871/105095130-40b96c80-5ae0-11eb-8db5-f47172854ba1.png)
```C++
/***Merge Sort (Ascending Order)***/
int n, m, i, p1=1, p2=1, p3=1;
scanf("%d", &n);
for(i=1; i<=n; ++i){
    scanf("%d", &a[i]);
}
scanf("%d", &m);
for(i=1; i<=m; ++i){
    scanf("%d", &b[i]);
}
while(p1<=n && p2<=m){
    //Since we handle ascending order in merge sort
    if(a[p1] < b[p2]){
       c[p3++] = a[p1++]; 
    }
    else c[p3++] = b[p2++];
}
while(p1 <= n) c[p3++] = a[p1++]; //Put remainings in 'a' array in c
while(p2 <= m) c[p3++] = b[p2++]; //Put reaminings in 'b' array in c
```
