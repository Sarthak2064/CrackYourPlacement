class Solution {
public:
    int strStr(string s, string t) {
       int t_index = 0;

       for(int i = 0; i < s.size(); i++){
        if(s[i] == t[t_index]){
            t_index++;
        }else{
            i = i - t_index;
            t_index = 0;
        }

        if(t_index == t.size()){
            return t_index = i - t_index + 1;
        }
       }

       return -1;
    }
};