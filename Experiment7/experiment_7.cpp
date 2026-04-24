class Solution {
public:
    bool exist(vector<vector<char>>& board, string targetWord) {
        int totalRows = board.size();
        int totalColumns = board[0].size();
        
        for (int currentRow = 0; currentRow < totalRows; currentRow++) {
            for (int currentColumn = 0; currentColumn < totalColumns; currentColumn++) {
                if (board[currentRow][currentColumn] == targetWord[0] && 
                    searchFromCell(board, targetWord, currentRow, currentColumn, 0)) {
                    return true; 
                }
            }
        }
        
        return false;
    }
    
private:
    bool searchFromCell(vector<vector<char>>& board, string& targetWord, int currentRow, int currentColumn, int currentLetterIndex) {
        if (currentLetterIndex == targetWord.length()) {
            return true;
        }
        
        if (currentRow < 0 || currentRow >= board.size() || 
            currentColumn < 0 || currentColumn >= board[0].size() || 
            board[currentRow][currentColumn] != targetWord[currentLetterIndex]) {
            return false;
        }
        
        char originalLetter = board[currentRow][currentColumn];
        
        board[currentRow][currentColumn] = '*';
        
        bool isWordFound = searchFromCell(board, targetWord, currentRow + 1, currentColumn, currentLetterIndex + 1) ||
                           searchFromCell(board, targetWord, currentRow - 1, currentColumn, currentLetterIndex + 1) ||
                           searchFromCell(board, targetWord, currentRow, currentColumn + 1, currentLetterIndex + 1) ||
                           searchFromCell(board, targetWord, currentRow, currentColumn - 1, currentLetterIndex + 1);
                     
        board[currentRow][currentColumn] = originalLetter;
        
        return isWordFound;
    }
};