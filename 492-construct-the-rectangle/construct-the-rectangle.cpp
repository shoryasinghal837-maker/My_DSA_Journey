class Solution {
public:
    vector<int> constructRectangle(int area) {
        int w = sqrt(area);
        while(w>=1){
            if(area%w==0){
                int l = area/w;
                return {l,w};
            }
            w--;
        }return {};
    }
};