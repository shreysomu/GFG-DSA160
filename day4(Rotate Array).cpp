class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        // code here
        // for(int i = 0;i<d;i++){
            
        //   int firstEle =  arr[0] ;
          
        //   for(int j = 0;j<arr.size()-1;j++){
        //       arr[j] = arr[j+1];
        //   }
          
        //   arr[arr.size()-1] = firstEle;
            
        // }
            d = d%arr.size();
            reverse(arr.begin(),arr.begin()+d);
            reverse(arr.begin()+d,arr.end());
            reverse(arr.begin(),arr.end());
    
    }
};
