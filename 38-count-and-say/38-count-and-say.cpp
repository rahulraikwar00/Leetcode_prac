class Solution {
public:
    string say(string s){
        int i=0;
        int c=1;
        string ans="";
        
        while(i<s.length()){
            if(s[i]==s[i+1]){
                c++;
                i++;
            }
            else{
                string ch= to_string(c);
                ans=ans+ch+s[i];
                c=1;
                i++;
                    
            }
        }
        return ans;
    }
    string countAndSay(int n) {
        
        string ans;
        ans = say("1");
        
        if(n==1) return "1";
        
        for(int i=1;i<n-1;i++)
        {
            ans = say(ans);
        }
        return ans;  
    }
};
