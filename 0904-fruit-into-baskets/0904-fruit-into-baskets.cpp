class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int j=0;
        int k=0;
        map<int,int>m;
        int maxi=0;
        for(k=0;k<fruits.size();k++){
            m[fruits[k]]++;
            if(m.size()>2){
                maxi=max(maxi,(k-j));
                while(m.size()>2){
                    m[fruits[j]]--;
                    if(m[fruits[j]]==0)m.erase(fruits[j]);
                    j++;
                }
            }
        }
        maxi= max(maxi,(k-j));
        return maxi;
    }
};