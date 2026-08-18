class Solution {
  public:
    vector<string>res;
    void helper(vector<vector<int>>maze, int i, int j, string path){

            
        if(i==maze.size()-1 && j==maze.size()-1){
            res.push_back(path);
            return;
        }
        
        maze[i][j] = 0;
            // Downward
            if(i+1<maze.size() && maze[i+1][j]!=0)
                helper(maze, i+1, j, path+"D");
            
            // left
            if(j-1>=0 && maze[i][j-1]!=0)
                helper(maze, i, j-1, path+"L");
                
            // right
            if(j+1<maze.size() && maze[i][j+1]!=0)
                helper(maze, i, j+1, path+"R");
                
            // Upward
            if(i-1>=0 && maze[i-1][j]!=0)
                helper(maze, i-1, j, path+"U");
            
        maze[i][j]=1;
    }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        if(maze[0][0] == 0)
        return res;
        // code here
        string path;
        helper(maze, 0, 0, path);
        return res;
    }
};