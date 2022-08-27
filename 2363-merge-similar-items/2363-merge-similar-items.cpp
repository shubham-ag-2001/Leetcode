class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<vector<int>> ret ;
        pair<int, int> p;
        int l1 = items1.size();
        int l2 = items2.size();
        for(int i=0; i<l1; i++){
            vector<int> a;
            int b=0;
            for(int j=0; j<l2; j++){
                if(items2[j][0]==items1[i][0]){
                    b++;
                    a.push_back(items1[i][0]);
                    a.push_back((items1[i][1]+items2[j][1]));
                }
            }
            if(!b){
                ret.push_back(items1[i]);
            }
            else{
                ret.push_back(a);
            }
        } 
        for(int i=0; i<l2; i++){
            int c=0;
            for(int j=0; j<l1; j++){  
                if(items1[j][0]==items2[i][0]){
                    c++;
                    break;
                }
            }
            if(!c){
                    ret.push_back(items2[i]);
                }
        }  
    sort(ret.begin(),ret.end());
    return ret;
    }
};