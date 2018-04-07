const int N = (1<<16)+5;
class Solution {
public:
    bool xorGame(vector<int> &nums) {
        vector<int> a(N);
        int base = 0;
        for(int i:nums) {
            a[i] = (a[i] + 1) % 2;
            base ^= i;
        }
        if(!base) return 1;
        int len = 0;
        for(int i=0;i<N;i++) {
            if(a[i]) len++;
        }
        bool ans;
        if(a[0]) {
            ans = 1^((len-1) % 2);
            ans ^= 1;
        } else {
            ans = 1^(len % 2);
        }
        return ans;
    }
};
