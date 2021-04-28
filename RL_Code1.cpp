#include<bits/stdc++.h>
using namespace std;
const int gridSize=50;
const int mxBad=gridSize/10;
int grid[gridSize][gridSize];
FILE* file;
// X -> bad.
// O -> destination.

void printGrid(){
	for(int i=0;i<gridSize;i++)
	{
		for(int j=0;j<gridSize;j++)
		{
			if(grid[i][j]==0)fprintf(file,"O ");
			else if(grid[i][j]==-10)fprintf(file,"X ");
			else fprintf(file,"- ");
		}
		fprintf(file,"\n");
	}
}
int main(){
	file=fopen("op.txt","w");
	srand(time(0));
	grid[0][0]=0;
	for(int i=0;i<gridSize;i++)
		for(int j=0;j<gridSize;j++)
			grid[i][j]=-1;
	for(int i=0;i<mxBad;i++)
		grid[rand()%gridSize][rand()%gridSize]=-10;
	printGrid();
	fclose(file);
	return 0;
}