#include <bits/stdc++.h> 
#include<string.h>
#include<queue>
using namespace std; 
#define N 3 
struct Node{ 
    Node* parent; 
    int mat[N][N]; 
    int x, y; 
    int cost; 
    int level; 
}; 

int printMatrix(int mat[N][N]){
    for (int i = 0; i < N; i++){ 
        for (int j = 0; j < N; j++){
			if(j<2)
            printf("%d ", mat[i][j]); 
            if(j==2)
            printf("%d\n", mat[i][j]);
		}
    } 
}

int main() 
{ 
	int i,j, x0,y0;
	int puzzle[N][N], goal[N][N];
	printf("Input initial state : \n");
	int input;
	for(i=0;i<N;i++)
		for(j=0;j<N;j++){
			scanf("%d",&puzzle[i][j]);
		}
}