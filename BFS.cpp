#include <bits/stdc++.h> 
#include<string.h>
#include<queue>
using namespace std; 
#define N 3 
struct Node { 
    Node* parent; 
    int mat[N][N], x, y, cost, level; 
}; 

int printMatrix(int mat[N][N]) { 
    for (int i = 0; i < N; i++) { 
        for (int j = 0; j < N; j++) {
			if(j<2) printf("%d ", mat[i][j]); 
        	if(j==2) printf("%d\n", mat[i][j]);
		}
    } 
}

Node* newNode(int mat[N][N], int x, int y, int newx, int newy, int level, Node* parent) { 
    Node* node = new Node; 
    node->parent = parent; 
    memcpy(node->mat, mat, sizeof node->mat); 
    swap(node->mat[x][y], node->mat[newx][newy]); 
    node->cost = INT_MAX; 
    node->level = level; 
    node->x = newx; 
    node->y = newy; 
  
    return node; 
} 
  
int row[4] = { 1, 0, -1, 0 }; 
int col[4] = { 0, -1, 0, 1 }; 

int calculateCost(int initial[N][N], int final[N][N]) { 
    int count = 0; 
    for (int i = 0; i < N; i++){
      for (int j = 0; j < N; j++){
	  	if (initial[i][j] && initial[i][j] != final[i][j]) 
           count++;
	  } 
	}
    return count; 
} 
  
int isSafe(int x, int y) { 
    return (x >= 0 && x < N && y >= 0 && y < N); 
} 
  
void printPath(Node* root) { 
    if (root == NULL) 
        return; 
    printPath(root->parent); 
    printf("Step  %d :\n", root->level+1);
    printMatrix(root->mat); 
    printf("\n"); 
} 

void solve(int initial[N][N], int x, int y, 
           int final[N][N]) { 
   queue<Node*> pq; 
  
    Node* root = newNode(initial, x, y, x, y, 0, NULL); 
    root->cost = calculateCost(initial, final); 
    pq.push(root);
    while (!pq.empty()) {  
        Node* min = pq.front(); 
        pq.pop(); 
        if (min->cost == 0) { 
        	printf("solusi ditemukan : \n");
             printPath(min); 
            return; 
        } 
        for (int i = 0; i < 4; i++) { 
            if (isSafe(min->x + row[i], min->y + col[i])) { 
                Node* child = newNode(min->mat, min->x, 
                              min->y, min->x + row[i], 
                              min->y + col[i], 
                              min->level + 1, min); 
                child->cost = calculateCost(child->mat, final); 
                if(min->parent==NULL)
                pq.push(child); 
                
                else{
                	if(child->x!=min->parent->x && child->y!=min->parent->y)
                	pq.push(child);
				}
            } 
	    } 
    } 
}

int main() { 
	int i,j, x0,y0;
	int puzzle[N][N], tujuan[N][N];
	int input;
	printf("masukan urutan awal : \n");
	for(i=0;i<N;i++)
		for(j=0;j<N;j++){
			scanf("%d",&puzzle[i][j]);
		}	
	printf("masukan urutan tujuan : \n");
	for(i=0;i<N;i++)
		for(j=0;j<N;j++){
			scanf("%d",&tujuan[i][j]);
		}	
		
	for(i=0;i<N;i++)
		for(j=0;j<N;j++){
			if(puzzle[i][j]==0){
				x0 = i; y0=j; 
				break;
			}
		}
	printf("menunggu solusi...\n");
	solve(puzzle,x0,y0,tujuan);
    return 0; 
} 