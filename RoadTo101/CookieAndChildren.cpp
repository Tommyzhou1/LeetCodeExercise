class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());    
        int cookies = 0, children = 0;
        while(cookies < s.size() && children < g.size()){
            if(s[cookies]>=g[children]){
                children++;
            }
            cookies++;
        }
        return children;
    }
};