class Solution {
public:
    void solve(vector<vector<int>>& image, int r, int c, int new1, int old){
       if(r<0 or c<0 or r>=image.size() or c>=image[0].size() or image[r][c]!=old){
           return;
       }
       image[r][c]=new1;
       solve(image, r-1, c, new1, old);
       solve(image, r, c-1, new1, old);
       solve(image, r, c+1, new1, old);
       solve(image, r+1, c ,new1, old);
   }
   vector<vector<int>> ff(vector<vector<int>>& image, int sr, int sc, int newColor) {
       // Code here 
       
       int row =image.size();
       int col=image[0].size();
       int oldColor=image[sr][sc];
       if(newColor==oldColor){
           return image;
       }
       solve(image, sr, sc, newColor, oldColor);
       return image;
   }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        return ff(image , sr,sc,color);
    }
};