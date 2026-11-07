
class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        int rows[3] = {0};
        int cols[3] = {0};
        int diag = 0, antiDiag = 0;

        for (int i = 0; i < moves.size(); i++) {
            int row = moves[i][0];
            int col = moves[i][1];

            int player = (i % 2 == 0) ? 1 : -1;

            rows[row] += player;
            cols[col] += player;

            if (row == col)
                diag += player;

            if (row + col == 2)
                antiDiag += player;

            if (abs(rows[row]) == 3 ||
                abs(cols[col]) == 3 ||
                abs(diag) == 3 ||
                abs(antiDiag) == 3) {
                return player == 1 ? "A" : "B";
            }
        }

        return moves.size() == 9 ? "Draw" : "Pending";
    }
};
