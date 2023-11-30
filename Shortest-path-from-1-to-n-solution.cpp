*******************************************************************************  Question  **************************************************************************************************************************************************
Money can’t buy you happiness. But Geekbits can buy you GfG goodies and it’s the same thing. Earn 2X Geekbits Now

banner
Consider a directed graph whose vertices are numbered from 1 to n. There is an edge from a vertex i to a vertex j if and only if either j = i + 1 or j = 3 * i. The task is to find the minimum number of edges in a path from vertex 1 to vertex n.

Example 1:

Input:
n = 9
Output:
2
Explanation:
Many paths are possible from 1 to 9.
Shortest one possible is,
1 -> 3 -> 9, of length 2.
Example 2:

Input:
n = 4
Output:
2
Explanation:
Possible paths from 1 to 4 are,
1 -> 2 -> 3 -> 4 and
1 -> 3 -> 4.
Second path of length 2 is the shortest.
Your Task:  
You don't need to read input or print anything. Your task is to complete the function minimumStep() which takes an integer n as inputs and returns the minimum number of edges in a path from vertex 1 to vertex N.

Expected Time Complexity: O( log(n) )
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ N ≤ 105








********************************************************************************  Solution  *************************************************************************************************************************************************

//{ Driver Code Starts
//Initial template for c++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int minimumStep(int n){
        //complete the function here
           int c=0;
        while(n!=0)
        {
            if(n%3==0)
            n=n/3;
            else
            n--;
            c++;
        }
        return c-1;
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.minimumStep(n) << endl;
    
    }
    return 0; 
} 


// } Driver Code Ends

