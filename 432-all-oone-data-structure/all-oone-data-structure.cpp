class AllOne {
private:
    vector<pair<string,int>> dat;
    string maxKey,minKey;
public:
    AllOne() {

    }
    
    void inc(string key) {
        bool found=false;
        for(auto& d:dat)
        {
            if(d.first==key){
                found=true;
                d.second++;
                break;
            }
        }
        if(!found){dat.push_back(make_pair(key,1));}
    }
    
    void dec(string key) {
        for(auto d=dat.begin();d!=dat.end();++d)
        {
            if(d->first==key){
                if(d->second==1){
                    dat.erase(d);
                    break;
                }
                else{d->second--;}
            }
        }
    }
    
    string getMaxKey() {
        int max=0;
        for(auto& d:dat){
            if(d.second > max){
                max=d.second;
                maxKey=d.first;
            }
        }
        return maxKey;
    }
    
    string getMinKey() {
        int min=INT_MAX;
        for(auto& d:dat){
            if(d.second < min){
                min=d.second;
                minKey=d.first;
            }
        }
        return minKey;
    }
};

/**
 * Your AllOne object will be instantiated and called as such:
 * AllOne* obj = new AllOne();
 * obj->inc(key);
 * obj->dec(key);
 * string param_3 = obj->getMaxKey();
 * string param_4 = obj->getMinKey();
 */