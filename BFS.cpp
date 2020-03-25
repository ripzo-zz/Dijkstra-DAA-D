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

int main(){ 
	int i,j, x0,y0;
	int puzzle[N][N], goal[N][N];
	printf("Input initial state : \n");
	int input;
	for(i=0;i<N;i++)
		for(j=0;j<N;j++){
			scanf("%d",&puzzle[i][j]);
		}	
	printf("Input goal state : \n");
	for(i=0;i<N;i++)
		for(j=0;j<N;j++){
			scanf("%d",&goal[i][j]);
		}	
		
	for(i=0;i<N;i++)
		for(j=0;j<N;j++){
			if(puzzle[i][j]==0){
				x0 = i; y0=j; 
				break;
			}
		}
	printf("wait for solution...\n");
    return 0; 
} 