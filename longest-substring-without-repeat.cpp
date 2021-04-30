class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0)return 0;
        int x = s.size();
        int i=0,j=0;

        vector<int> cnt(350,0);
        cnt[s[0]]++;

        int result=1;
        while(j!=x-1){
            if(cnt[s[j+1]]==0){
                j++;
                cnt[s[j]]=1;
                result=max(result,j-i+1);
            }
            else{
                cnt[s[i]]--;
                i++;
            }
        }
        return result;
    }
};
