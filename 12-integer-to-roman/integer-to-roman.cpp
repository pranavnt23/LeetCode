class Solution {
public:
    string intToRoman(int num) {
        unordered_map<int,string> hmap;
        hmap[1000]="M";hmap[900]="CM";
        hmap[500]="D";hmap[400]="CD";
        hmap[100]="C";hmap[90]="XC";
        hmap[50]="L";hmap[40]="XL";
        hmap[10]="X";hmap[9]="IX";
        hmap[5]="V";hmap[4]="IV";hmap[1]='I';

        vector<int> keys = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

        int i=0;string str;
        for(auto key:keys){
            while(num>=key){
                str+=hmap[key];
                num-=key;
            }
        }
        return str;  
    }
};