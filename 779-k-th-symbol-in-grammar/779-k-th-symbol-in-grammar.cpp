class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n==1&&k==1){
            return 0;
        }
        int l = pow(2,n-1);
        if(k>l/2){
            
            return !kthGrammar(n-1,k-l/2);
            
        }
        else{
        return kthGrammar(n-1,k);
            }
    }
};