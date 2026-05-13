//MISTAKES MADE:
//1. Returning false if col.find() == col.end() -> won't work because that means 
//the number you are adding is NEW

//2. Brute force for boxes. Very inconvenient, bad practice.
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for(int i = 0; i<board.size();i++){
            set<char> row;
            for(int j = 0;j<board[i].size();j++){
                if(board[i][j]!='.'){
                    if(row.find(board[i][j]) != row.end())
                        return false;
                    row.insert(board[i][j]);
                }
            }
        }
        for(int i = 0; i<board[i].size();i++){
            set<char> col;
            for(int j = 0;j<board.size();j++){
                if(board[j][i]!='.'){
                    //IF the number is not unique, return false
                    if(col.find(board[j][i]) != col.end())
                        return false;
                    col.insert(board[j][i]);
                }
            }
        }
        //BRUTE FORCE ATM! To look into for better solution.
       set<char> b1, b2, b3; 
        for (int r = 0; r < 3; r++) {
            for (int c = 0; c < 3; c++) {
                if (board[r][c] != '.') {
                    if (b1.count(board[r][c])) return false;
                    b1.insert(board[r][c]);
                }
            }
            for (int c = 3; c < 6; c++) {
                if (board[r][c] != '.') {
                    if (b2.count(board[r][c])) return false;
                    b2.insert(board[r][c]);
                }
            }
            for (int c = 6; c < 9; c++) {
                if (board[r][c] != '.') {
                    if (b3.count(board[r][c])) return false;
                    b3.insert(board[r][c]);
                }
            }
        }
        set<char> b4, b5, b6; 
        for (int r = 3; r < 6; r++) {
            for (int c = 0; c < 3; c++) {
                if (board[r][c] != '.') {
                    if (b4.count(board[r][c])) return false;
                    b4.insert(board[r][c]);
                }
            }
            for (int c = 3; c < 6; c++) {
                if (board[r][c] != '.') {
                    if (b5.count(board[r][c])) return false;
                    b5.insert(board[r][c]);
                }
            }
            for (int c = 6; c < 9; c++) {
                if (board[r][c] != '.') {
                    if (b6.count(board[r][c])) return false;
                    b6.insert(board[r][c]);
                }
            }
        }
        set<char> b7, b8, b9;
        for (int r = 6; r < 9; r++) {
            for (int c = 0; c < 3; c++) {
                if (board[r][c] != '.') {
                    if (b7.count(board[r][c])) return false;
                    b7.insert(board[r][c]);
                }
            }
            for (int c = 3; c < 6; c++) {
                if (board[r][c] != '.') {
                    if (b8.count(board[r][c])) return false;
                    b8.insert(board[r][c]);
                }
            }
            for (int c = 6; c < 9; c++) {
                if (board[r][c] != '.') {
                    if (b9.count(board[r][c])) return false;
                    b9.insert(board[r][c]);
                }
            }
        }
        return true;
        
    }
};
