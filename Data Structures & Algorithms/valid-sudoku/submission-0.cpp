class Solution {
public:
    bool check_small_box(int i,int j,vector<vector<char>>& board){
        vector<int> freq(10,0);
        for(int ii=0;ii<3;ii++){
            for(int jj=0;jj<3;jj++){
                if(board[ii+i][jj+j] != '.'){
                    freq[board[ii+i][jj+j]-'0']++;
                    if(freq[board[ii+i][jj+j]-'0'] > 1) return false;
                }
            }
        }

        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            vector<int> freq(10,0);
            for(int j=0;j<9;j++){
                if(board[i][j] != '.'){
                    freq[board[i][j]-'0']++;
                    if(freq[board[i][j]-'0'] > 1) return false;
                }
                    
            }
        }
        for(int j=0;j<9;j++){
            vector<int> freq(10,0);
            for(int i=0;i<9;i++){
                if(board[i][j] != '.'){
                    freq[board[i][j]-'0']++;
                    if(freq[board[i][j]-'0'] > 1) return false;
                }
                    
            }
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(!check_small_box(i*3,j*3,board)){
                    return false;
                }
            }
        }

        return true;
    }
};
