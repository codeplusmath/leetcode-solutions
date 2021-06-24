class Solution {
public:
    string convert(string s, int numRows) {
        int current=numRows, len= s.length();
        if(numRows>len || numRows<=1){
            return s;
        }        
        string temp("");
        int interval = (2 * numRows - 2),check;
        for(int i=0; i< numRows; i++){
            int step = interval - 2*i;
            for(int j=i; j<len;j+=interval){
                temp+=s[j];
                check = j+ step;
                if(step>0 && step<interval && check<len){
                    temp+=s[check];
                }
            }
        }
        return temp;
    }
};

static const int _ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
