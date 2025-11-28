class Solution {
public:
    int countDigits(int num) {
        vector <int> temp;
        int tem = num;
        int count =0;
       
        while (num>0){
             temp.push_back(num%10);
             num = num/10;
        }
        for (int c :temp){
            if(tem%c==0){
                count++;
            }
        }
        return count ;
    }
};