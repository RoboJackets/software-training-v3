#include <iostream>
#include <vector>

void passByValue(int num) {
  num = 20; // This change will not affect the original variable
  std::cout << "Inside passByValue: " << num << std::endl;
}

void passByReference(int &num) {
  num = 20; // This change will affect the original variable
  std::cout << "Inside passByReference: " << num << std::endl;
}

int dfs(std::vector<std::vector<int>> &grid, int r, int c,
        std::vector<std::vector<int>> &visit) {
  int ROWS = grid.size(), COLS = grid[0].size();

  if (std::min(r, c) < 0 || r == ROWS || c == COLS || visit[r][c] == 1 ||
      grid[r][c] == 1) {
    return 0;
  }
  if (r == ROWS - 1 && c == COLS - 1) {
    return 1;
  }
  visit[r][c] = 1;

  int count = 0;
  count += dfs(grid, r + 1, c, visit); // down
  count += dfs(grid, r - 1, c, visit); // up
  count += dfs(grid, r, c + 1, visit); // right
  count += dfs(grid, r, c - 1, visit); // left

  visit[r][c] = 0;
  return count;
}

int countPaths(std::vector<std::vector<int>> &grid) {
  int ROWS = grid.size(), COLS = grid[0].size();
  std::vector<std::vector<int>> visit(ROWS, std::vector<int>(COLS, 0));
  return dfs(grid, 0, 0, visit);
}

int main() {
  // /* Pass by Value */
  // int x = 10;
  // std::cout << "Before passByValue: " << x << std::endl;
  // passByValue(x);
  // std::cout << "After passByValue: " << x << std::endl;

  // /* Pass by Reference */
  // int y = 10;
  // std::cout << "Before passByReference: " << y << std::endl;
  // passByReference(y);
  // std::cout << "After passByReference: " << y << std::endl;

  std::vector<std::vector<int>> grid1 = {
      {0, 0, 0},
      {0, 1, 0},
      {0, 0, 0}
  };

  std::cout << countPaths(grid1) << std::endl; // Expected output: 2

  std::vector<std::vector<int>> grid2 = {
      {0, 1, 0},
      {1, 1, 0},
      {0, 0, 0}
  };

  std::cout << countPaths(grid2) << std::endl; // Expected output: 0


  std::vector<std::vector<int>> grid3 = {
      {0, 1, 0},
      {1, 1, 0},
      {0, 1, 0}
  };

  std::cout << countPaths(grid3) << std::endl; // Expected output: 0

  return 0;
}
