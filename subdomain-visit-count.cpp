class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        map<string,int> mp;
        for(string _it:cpdomains) {
            stringstream ss(_it);
            int cnt; string it;
            ss >> cnt >> it;
            mp[it] += cnt;
            int i = 0, n = it.length();
            while(i < n) {
                while(i < it.length() && it[i] != '.') i++;
                if(i < n) {
                    mp[it.substr(i+1)] += cnt;
                    i++;
                }
            }
        }
        vector<string> ans;
        for(auto it:mp) ans.push_back(to_string(it.second) + " " + it.first);
        return ans;            
    }
};
