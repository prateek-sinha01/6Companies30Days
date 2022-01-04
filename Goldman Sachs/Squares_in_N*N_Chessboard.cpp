//Problem link : https://practice.geeksforgeeks.org/problems/squares-in-nn-chessboard1801/1

//Date : 05/01/2021
//Time Complexity : O(n)
//Space Complexity : O(n)

class Solution {
  public:
    long long squaresInChessBoard(long long N) {
        if(N==1)
            return 1;
        else
            return N*N + squaresInChessBoard(N-1);
    }
};
