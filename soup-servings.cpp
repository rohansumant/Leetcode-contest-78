const int dA[] = {100,75,50,25};
const int dB[] = {0,25,50,75};

class Solution {
public:
    double go(int N) {
        map<pair<int,int>,double> mp;
        mp[{N,N}] = 1.0;
        double p = 0, q = 0;
        while(mp.size()) {
            auto it = --mp.end();
            auto pr = it->first;
            double prob = it->second;
            mp.erase(it);
            if(min(pr.first,pr.second) > 0) {
                for(int i=0;i<4;i++) {
                    mp[{pr.first-dA[i],pr.second-dB[i]}] += prob/4.0;
                }
            } else {
                if(pr.first <= 0 && pr.second <= 0) q += prob;
                else if(pr.first <= 0) p += prob;
            }
        }
        return p + q/2;
    }
    double soupServings(int N) {
        return go(min(10000,N));
    }
};
