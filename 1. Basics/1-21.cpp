#include <stdio.h>

int a_game[20];
int b_game[20];

typedef enum{
    a_win,
    b_win,
    draw
} WINNER;

int main(){
    //freopen("input.txt", "rt", stdin);
    int state = 0, sumA = 0, sumB = 0, scoreA = 0, scoreB = 0;
    bool isDraw;
    //Storing A's information in a_game
    for(int i=0; i<10; ++i){
        scanf("%d", &a_game[i]);
    }
    //Storing B's information in b_game
    for(int j=0; j<10; ++j){
        scanf("%d", &b_game[j]);
    }
    //Check winning state
    for(int k=0; k<10; ++k){
        if(a_game[k] == b_game[k]){
            scoreA += 1;
            scoreB += 1;
        } 
        else if(a_game[k] > b_game[k]){
            state = a_win;
            scoreA += 3;
        }
        else if(a_game[k] < b_game[k]){
            state = b_win;
            scoreB += 3;
        }
    }
    printf("%d %d\n", scoreA, scoreB);
    if(scoreA > scoreB) printf("A\n");
    else if(scoreA < scoreB) printf("B\n");
    //Same score but not a draw state
    if(scoreA == scoreB && scoreA > 10 && scoreB >10){
        if(state == a_win) printf("A\n");
        else printf("B\n");
    }
    for(int i=0; i<10; ++i){
        //If all turns get Draw state the sum of the score always be 10
        if(a_game[i] == b_game[i] && scoreA == 10 && scoreB == 10) isDraw = true;
        else isDraw = false;
    }
    if(isDraw) printf("D\n");

    return 0;
}

/*Short answer code
int main(){
	//freopen("input.txt", "rt", stdin);
	int i, A[10], B[10], as=0, bs=0, lw=0;
	for(i=0; i<10; i++){
		scanf("%d", &A[i]);
	}
	for(i=0; i<10; i++){
		scanf("%d", &B[i]);
	}
	for(i=0; i<10; i++){
		if(A[i]>B[i]){
			as=as+3;
			lw=1;
		}
		else if(A[i]<B[i]){
			bs=bs+3;
			lw=2;
		}
		else{
			as+=1;
			bs+=1;
		}
	}
	printf("%d %d\n", as, bs);
	if(as==bs){
		if(lw==0) printf("D\n");
		else if(lw==1) printf("A\n");
		else printf("B\n");
	}
	else if(as>bs) printf("A\n");
	else printf("B\n");			
	return 0;
}*/