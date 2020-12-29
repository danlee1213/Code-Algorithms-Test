#include <stdio.h>
int a_game[101];
int b_game[101];

typedef enum{
    scissors=1,
    rock,
    paper
} RSP;

typedef enum{
    a_win=4,
    b_win,
    draw
} WINNER;

int main(){
    RSP rspGame;
    WINNER winner;
    //freopen("input.txt", "rt", stdin);
    int n, state = 0;
    scanf("%d", &n);
    //scissors = 1, Rock = 2, Paper = 3
    //Storing A's game in a_game
    for(int i=0; i<n; ++i){
        scanf("%d", &a_game[i]);
    }
    //Storing B's game in b_game
    for(int j=0; j<n; ++j){
        scanf("%d", &b_game[j]);
    }
   //Check who wins in each state
   for(int k=0; k<n; ++k){
       if(a_game[k] == b_game[k]) state = draw;
       else if(a_game[k] == 1 && b_game[k] == 3) state = a_win;
       else if(a_game[k] == 2 && b_game[k] == 1) state = a_win;
       else if(a_game[k] == 3 && b_game[k] == 2) state = a_win;
       else state = b_win;
       /*
       if(a_game[k] == scissors && b_game[k] == rock) state = b_win;
       else if(a_game[k] == scissors && b_game[k] == paper) state = a_win;
       else if(a_game[k] == rock && b_game[k] == paper) state = state = b_win;
       else if(a_game[k] == rock && b_game[k] == scissors) state = a_win;
       else if(a_game[k] == paper && b_game[k] == scissors) state = b_win;
       else if(a_game[k] == paper && b_game[k] == rock) state = a_win;
       else state = draw;*/
       //Print the state
       if(state == a_win) printf("A\n");
       else if(state == b_win) printf("B\n");
       else if(state == draw) printf("D\n");
   }

    return 0;
}

/*Solution code
int main(){
	freopen("input.txt", "rt", stdin);
	freopen("output.txt", "wt", stdout);
	int a[101], b[101], i, j, n, A=0, B=0;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		scanf("%d", &a[i]);
	}
	for(i=1; i<=n; i++){
		scanf("%d", &b[i]);
	}
	for(i=1; i<=n; i++){
		if(a[i]==b[i]) printf("D\n");
		else if(a[i]==1 && b[i]==3) printf("A\n");
		else if(a[i]==2 && b[i]==1) printf("A\n");
		else if(a[i]==3 && b[i]==2) printf("A\n");
		else printf("B\n");
	}
	return 0;
}*/