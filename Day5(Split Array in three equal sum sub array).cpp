//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
//  Class Solution to contain the method for solving the proble
class Solution {
  public:
    // Function to determine if array arr can be split into three equal sum sets.
    vector<int> findSplit(vector<int>& arr) {
        // code here

    int n = arr.size();
    int totalSum = accumulate(arr.begin(), arr.end(), 0);

    // If the total sum is not divisible by 3, it's impossible to split the array
    if (totalSum % 3 != 0) {
        return {-1, -1};
    }

    int targetSum = totalSum / 3;
    int currentSum = 0;
    int count = 0;
    int i = -1, j = -1;

    for (int k = 0; k < n; k++) {
        currentSum += arr[k];

        // Check for the first split point
        if (count == 0 && currentSum == targetSum) {
            i = k;
            currentSum = 0;  // Reset current sum for the next segment
            count++;
        }
        // Check for the second split point
        else if (count == 1 && currentSum == targetSum) {
            j = k;
            count++;
            break;
        }
    }

    // If both split points are found and the sum of the remaining part is also equal to targetSum
    if (count == 2 && accumulate(arr.begin() + j + 1, arr.end(), 0) == targetSum) {
        return {i, j};
    }

    return {-1, -1};
}

};
    

//{ Driver Code Starts.

int main() {
    int test_cases;
    cin >> test_cases;
    cin.ignore();
    while (test_cases--) {
        string input;
        vector<int> arr;

        // Read the array from input line
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        // Solution instance to invoke the function
        Solution ob;
        vector<int> result = ob.findSplit(arr);

        // Output result
        if (result[0] == -1 && result[1] == -1 || result.size() != 2) {
            cout << "false" << endl;
        } else {
            int sum1 = 0, sum2 = 0, sum3 = 0;
            for (int i = 0; i < arr.size(); i++) {
                if (i <= result[0])
                    sum1 += arr[i];

                else if (i <= result[1])
                    sum2 += arr[i];

                else
                    sum3 += arr[i];
            }
            if (sum1 == sum2 && sum2 == sum3) {
                cout << "true" << endl;
            } else {
                cout << "false" << endl;
            }
        }
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
