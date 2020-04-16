#include <bits/stdc++.h>
using namespace std;

int main (){
    

    int matrix_input[100][100];
    int dp[100][100];
    ios::sync_with_stdio(false);

    int row = 0; int col = 0;

    cin >> row >> col;

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            int temp = 0;
            cin >> temp;
            matrix_input[i][j] = temp;
        }
    }

    // int iter_i = 0;
    // int iter_j = 1;
    dp[0][0] = matrix_input[0][0];
    for(int iter_i = 0;iter_i < row; iter_i++){
        for(int iter_j = 0; iter_j < col; iter_j++){
            if((iter_i > 0) && (iter_j > 0)){
                dp[iter_i][iter_j] = min(dp[iter_i-1][iter_j], dp[iter_i][iter_j-1]) + matrix_input[iter_i][iter_j];
            }   
            else if(iter_i == 0){
                if(iter_j == 0) dp[iter_i][iter_j] = matrix_input[iter_i][iter_j];
                else dp[iter_i][iter_j] = dp[iter_i][iter_j - 1] + matrix_input[iter_i][iter_j];
            }
            else if(iter_j == 0){
                dp[iter_i][iter_j] = dp[iter_i-1][iter_j] + matrix_input[iter_i][iter_j];
            }

            // cout << dp[iter_i][iter_j] << " ";
        }
    }

    cout << dp[row - 1][col - 1] << endl;
}