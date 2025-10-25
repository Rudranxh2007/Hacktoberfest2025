class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

     unordered_map<string,vector<string>>Store;
      for(int i=0;i<strs.size();i++){
        string p=strs[i];
        sort(p.begin(),p.end());
        Store[p].push_back(strs[i]);
      }   
      vector<vector<string>>ans;
      for(auto x: Store){
        ans.push_back(x.second);
      }
      return ans;
    }
};
