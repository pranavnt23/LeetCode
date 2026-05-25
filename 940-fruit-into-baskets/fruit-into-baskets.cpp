class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> hmap;
        int maxi=INT_MIN,start_element=0;
        for(int i=0;i<fruits.size();i++){
            hmap[fruits[i]]++;
            while(hmap.size()>2){
                hmap[fruits[start_element]]--;
                if(hmap[fruits[start_element]]==0){
                    hmap.erase(fruits[start_element]);
                }
                start_element++;
            }
            maxi=max(maxi,i-start_element+1);
        }
        return maxi;
    }
};