
class Solution {
  public:
    vector<int> EvenOddSum(int N, int Arr[]) {
        // code here
        vector<int>ans;
        int sum1=0;
        for(int i=0;i<N;i=i+2){
            sum1+=Arr[i];
        }
         int sum2=0;
        for(int i=1;i<N;i=i+2){
            sum2+=Arr[i];
        }
        ans.push_back(sum1);
         ans.push_back(sum2);
         return ans;
    }
};
