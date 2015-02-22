#include <bits/stdc++.h>

using namespace std;

int width, proporcion, board[65][65], answer_board[65][65];

void recursiveCheck(int indexX, int indexY, int range) {
	int blacks=0;
	
	// Counting black pixels
	for(int i = indexX-range; i < indexX+range; i++)
		for(int j = indexY-range; j < indexY+range; j++)
			blacks += board[i][j];
			
	// Check if there is enough black pixels
	if(blacks*100 / (range*range*4) >= proporcion) {
		for(int i = indexX-range; i < indexX+range; i++)
			for(int j = indexY-range; j < indexY+range; j++)
				answer_board[i][j] = 1;
	}
	
	// Check if there is enough white pixels
	else if(((range*range*4) - blacks)*100 / (range*range*4) >= proporcion) {
		for(int i = indexX-range; i < indexX+range; i++)
			for(int j = indexY-range; j < indexY+range; j++)
				answer_board[i][j] = 0;
	}
	else {
		// Need to check individual pixels
		else if(range == 1) {
			answer_board[indexX-1][indexY-1] = board[indexX-1][indexY-1];
			answer_board[indexX-1][indexY] = board[indexX-1][indexY];
			answer_board[indexX][indexY-1] = board[indexX][indexY-1];
			answer_board[indexX][indexY] = board[indexX][indexY];
		}
		// Recursive call
		else {
			recursiveCheck(indexX+range/2, indexY-range/2, range/2);
			recursiveCheck(indexX-range/2, indexY-range/2, range/2);
			recursiveCheck(indexX-range/2, indexY+range/2, range/2);
			recursiveCheck(indexX+range/2, indexY+range/2, range/2);
		}
	}
} 

int main() {
	int instance = 1;
	
	while(scanf(" %d", &width) != EOF && width) {
		
		printf("Image %d:\n", instance++);
		scanf(" %d", &proporcion);
		
		for(int i = 0; i < width; i++) {
			string row;
			cin >> row
			
			for(int j = 0; j < width; j++) {
				if(row[j] == '0')
					board[i][j] = 0;
				else
					board[i][j] = 1;
			}
		}
		
		if(width == 1) {
			answer_board[0][0] = board[0][0];
		}
		else if(width == 2) {
			answer_board[0][0] = board[0][0];
			answer_board[0][1] = board[0][1];
			answer_board[1][0] = board[1][0];
			answer_board[1][1] = board[1][1];
		}
		else
			recursiveCheck(width/2, width/2, width/2);
		
		for(int i = 0; i < width; i++) {
			for(int j = 0; j < width; j++)
				printf("%d", answer_board[i][j]);
			printf("\n");
		}
		
	}
	return 0;
}
