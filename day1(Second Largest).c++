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




==============================================================================================================================================================================
  #include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int secondLargest(vector<int>arr){
  int n = arr.size();
    //using navie approach (sorting array and then finding second largest)
  //  sort(arr.begin(),arr.end());  // O(nlogn)

  //  for(int i = n-2;i>=0;i--){   //O(n)
  //    if(arr[i] != arr[n-1])
  //    return arr[i];
  //  }

  //####Second Approach with TC O(2*n)
//    int lar1 = -1;
//    int lar2 = -1;
//    for(int i = 0;i<n;i++){   //O(n)
//     if(arr[i]>lar1){
//        lar1 = arr[i];
//     }
//    }

//    for(int i = 0;i<n;i++){  // O(n)
//     if(arr[i]>lar2 && arr[i] != lar1){
//        lar2 = arr[i];
//     }
  
//    }
//   return lar2; 
  
// }

  //####Third Approach with TC O(n)
   int lar1 = -1;
   int lar2 = -1;
   for(int i = 0;i<n;i++){   //O(n)
    if(arr[i]>lar1){
       lar1 = arr[i];
    }
    else if(arr[i]>lar2 && arr[i] != lar1){
       lar2 = arr[i];
    }
  
   }
  return lar2; 
  
}


int main(){
  vector<int> arr{76,58,98,25,43};
  cout<<"Second largest is "<<secondLargest(arr);

  return 0 ;
}
