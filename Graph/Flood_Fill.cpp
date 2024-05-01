#include <bits/stdc++.h>
using namespace std;
 
#define ll                  long long
#define mod                 1000000007
#define pb                  push_back
#define mp                  make_pair
#define endl                '\n'
#define fastread()          (ios_base:: sync_with_stdio(false),cin.tie(NULL));

void dfs(int row, int col, vector<vector<int>>& ans, vector<vector<int>>& image, int iniColor, int newColor) {
    ans[row][col] = newColor;
    int n = image.size();
    int m = image[0].size();
    int delrow[] = {-1, 0, 1, 0};
    int delcol[] = {0, 1, 0, -1};
    for(int i = 0; i < 4; i++) {
        int nrow = row + delrow[i];
        int ncol = col + delcol[i];
        if(nrow >= 0 and nrow < n and ncol >= 0 and ncol < m and image[nrow][ncol] == iniColor and ans[nrow][ncol] != newColor) {
            dfs(nrow, ncol, ans, image, iniColor, newColor);
        }
    }
}

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
    int iniColor = image[sr][sc];
    vector<vector<int>> ans = image;
    dfs(sr, sc, ans, image, iniColor, newColor);
    return ans;
}

int main()
{
   fastread();
   
   
   
}
