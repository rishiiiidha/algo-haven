#include<bits/stdc++.h>
using namespace std;
void checkMatch(vector<vector<char>>&board,i,j){

    for (int i = 1; i <= 9;i++){
        
    }
}
void solveSudoko(vector<vector<char>>&board){
    for (int i = 0; i < 9;i++){
        for (int j = 0; j < 9;j++){
            if(board[i][j]=='.'){
                checkMatch(board, i, j);
            }
        }
    }
}
int main(){
    vector<vector<char>>board{
        {'9', '5', '7', '.', '1', '3', '.', '8', '4'},
        {'4', '8', '3', '.', '5', '7', '1', '.', '6'},
        {'.', '1', '2', '.', '4', '9', '5', '3', '7'},
        {'1', '7', '.', '3', '.', '4', '9', '.', '2'},
        {'5', '.', '4', '9', '7', '.', '3', '6', '.'},
        {'3', '.', '9', '5', '.', '8', '7', '.', '1'},
        {'8', '4', '5', '7', '9', '.', '6', '1', '3'},
        {'.', '9', '1', '.', '3', '6', '.', '7', '5'},
        {'7', '.', '6', '1', '8', '5', '4', '.', '9'}
    };
    solveSudoko(board);
}
// sudoko is 9*9 board
// check each empty box with the numbers from 1 to 9 

