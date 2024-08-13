vector<vector<vi>> solutions;
unordered_map<int, int> col;
unordered_map<int, int> d1;
unordered_map<int, int> d2;

void nqueen(vector<vi> &board, int y)
{
   int n = board.size();

   if (y == n)
   {
      solutions.push_back(board);
      return;
   }

   for (int x = 0; x < n; x++)
   {
      if (col[x] || d1[x + y] || d2[x - y + n - 1])
         continue;

      board[y][x] = col[x] = d1[x + y] = d2[x - y + n - 1] = 1;

      nqueen(board, y + 1);

      board[y][x] = col[x] = d1[x + y] = d2[x - y + n - 1] = 0;
   }
}