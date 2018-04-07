class Solution {
public:
    vector<pair<char,int>> fn(const string &S) {
        vector<pair<char,int>> a;
        for(int i=0,j;i<S.length();i=j) {
            j = i;
            while(j < S.length() && S[j] == S[i]) j++;
            a.push_back({S[i],j-i});
        }
        return a;
    }
    
    int expressiveWords(string S, vector<string>& words) {
        vector<pair<char,int>> a = fn(S);
        int ans = 0;
        for(auto it:words) {
            vector<pair<char,int>> b = fn(it);
            if(a.size() != b.size()) continue;
            bool ok = 1;
            for(int i=0;i<a.size();i++) {
                if(a[i].first != b[i].first || a[i].second < b[i].second
                   || (a[i].second > b[i].second && a[i].second < 3)) {
                    ok = 0;
                    break;
                }
            }
            if(ok) ans++;
        }
        return ans;
    }
};
