#Problem SecondLargest


class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int n = arr.size();
        int lar1 = -1;
        int lar2 = -1;
        
        for(int i = 0;i<n;i++){
            if(arr[i]>lar1){
                lar1 = arr[i];
            }
        }
        for(int i = 0;i<n;i++){
            if(arr[i]>lar2 && arr[i] != lar1){
                lar2 = arr[i];
            }
        }
      
        return lar2;
    }
};
