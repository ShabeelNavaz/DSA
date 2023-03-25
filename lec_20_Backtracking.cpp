
// Rat in a maz problem
/*
bool isSafe(int newx,int newy, vector< vector< bool > > &vis, vector <vector <int>> & arr,int n){
        if((newx >=0 && newx < n) && (newy >=0 && newy < n) && vis[newx] [newy] != 1 && arr[newx] [newy] == 1){
            return true;
        }
        else
            return false;
    }

void solve(int x,int y,vector < vector <int >> & arr,int n,vector<string> &ans,vector< vector< bool > > &vis,string path){
        // base case
        if(x == n-1 && y == n-1){
            ans.push_back(path);
            return;
        }
        //4 movement
        // D,L,R,U
        //Down
    vis[x][y]=1;
        if(isSafe(x+1, y, vis, arr, n)){
            solve(x+1, y, arr, n, ans, vis, path + 'D');
        }
        //Left
        if(isSafe(x, y-1, vis, arr, n)){
            solve(x, y-1, arr, n, ans, vis, path + 'L');
        }
        //Right
        if(isSafe(x, y+1, vis, arr, n)){
            solve(x, y+1, arr, n, ans, vis, path + 'R');
        }
        //Up
        if(isSafe(x-1, y, vis, arr, n)){
            solve(x-1, y, arr, n, ans, vis, path + 'U');
        }
            vis[x][y]=0;
    }


vector < string > searchMaze(vector < vector < int >> & arr, int n) {
    vector<string> ans;
        vector< vector< bool > >visited (n, vector<bool> (n,0));
        string path="";
        if(arr[0][0]==0)
        return ans;
        solve(0, 0, arr, n, ans, visited, path);
        return ans;
}
*/


    //  Latter tile posibility
/*

    void solve(string tiles, string &output, set<string> &result, map<int, bool> &vis){
        // to check for each character in string
        for(int i=0; i<tiles.length(); i++){
            // to track indexes
            if(vis[i] == 0)
            {
                char ch = tiles[i];
                output.push_back(ch);
                vis[i] = 1;
                // store output string into result set
                result.insert(output);
                //recursive call
                solve(tiles, output, result, vis);
                //backtracking
                output.pop_back();
                flag[i] = 0;
            }
        }
    }

int numtilepossibilities(string tiles){
    string output="";
    set<string> result;
    map<int,bool> flag;
    solve(tiles, output, result, flag);
    return result.size();
}
*/
// Generate Parentheses

/*

void solve(int currOpen,int currClose,int remOpen,int remClose,vector<string> &result, string &output){
  
    // Base case
    if(remOpen == 0 && remClose ==0)
    {
        result.push_back(output);
        return;
    }

    //'(' bracket k liye call
    if(remOpen > 0){
        output.push_back('(');
        solve(currOpen+1,currClose,remOpen-1,remClose,result,output);
        // Backtracking
        output.pop_back();
    }

    //')' bracket k liye call
    if(remClose > 0 && currOpen > currClose){
        output.push_back(')');
        solve(currOpen,currClose+1,remOpen,remClose-1,result,output);
        output.pop_back();
    }
}

vector<string> generateParenthesis(int n){

    vector<string>result;
    string output = "(";

    int currOpen = 1;
    int currClose = 0;
    int remOpen = n-1;
    int remClose = n;

    solve(currOpen, currClose, remOpen, remClose, result, output);

    return result;
}
*/
//  Combination Sum
  /* 
    void solve(vector<int>& candidates, int target,vector<vector<int>> &output,vector<int> &tep,int i){

    // Base case
    if(target == 0){
        // ans store
        output.push_back(tep);
        return ;
    }

    if(target < 0 || i>= candidates.size())
        return;

    // exclude
    solve(candidates, target, output, tep, i+1);

    // include

    tep.push_back(candidates[i]);
    solve(candidates,target-candidates[i], output, tep, i);
    tep.pop_back();

  }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        vector<vector<int>> output;
        vector<int> tep;
        solve(candidates, target, output, tep, 0);
        return output;

    }
};
*/

// Combination Sum 2

/*

   void solve(vector<int>& candidates, int target, vector<vector<int>> &output, vector<int> &temp, int index){
        //base case
        if(target == 0){
            //ans store
            output.push_back(temp);
            return;
        }
        if(target < 0 || index >= candidates.size())
            return;
        for(int i = index; i < candidates.size(); i++){
            //special candidates
            if(i > index && candidates[i] == candidates[i-1])
                continue;
            if(candidates[i] > target)
                break;
            
            temp.push_back(candidates[i]);
            solve(candidates, target-candidates[i], output, temp, i+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> output;
        vector<int> temp;
        solve(candidates,target, output, temp, 0);
        return output;
    }
};

*/


//  Combination 3

/*

void solve(int k, int n, vector<vector<int>> &output, vector<int> &temp, int num){
    // base case
    if(k == 0 && n==0){
        output.push_back(temp);
        return; 
    }
    for(int i=num; i<10; i++){
        temp.push_back(i);
        solve(k-1, n-i, output, temp, i+1);
        temp.pop_back();
    }
}

vector<vector<int>> cominationSum3(int k, int n){
    vector<vector<int>> output;
    vector<int> temp;
    solve(k, n, output, temp, 1);
    return output;
}
*/

/*

 bool solve(vector<vector<char>>& board, int i, int j, int k , string& word) {
        
        //if not Safe
        if ( ( i < 0 || i >= board.size()) || ( j < 0 || j >= board[0].size()) ||
             ( board[i][j] == '*') || (board[i][j] != word[k]))
            return false;
        
        
        //Base case
        if(k == word.length()-1)
            return true;
        
        char ch = board[i][j];
        
        //mark visited
        board[i][j] = '*';
        
        //traverse LRUD
        
        bool left = solve(board,i, j-1, k+1, word);
        
        bool right = solve(board,i, j+1, k+1, word);
        
        bool up = solve(board, i-1, j, k+1, word);
        
        bool down = solve(board, i+1, j, k+1, word);
        
        //back track
         board[i][j] = ch;
        
        return left || right || up || down;
        
        
    }
    
    
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        
        //we will call from each cell
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                
                if(solve(board, i, j, 0, word)) {
                    return true;
                }
                
            }
        }
        return false;
    }
};
*/


