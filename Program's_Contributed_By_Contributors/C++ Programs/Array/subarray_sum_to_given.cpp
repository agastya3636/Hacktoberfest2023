#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        vector<int>l;
        long long int sum=0;
        int k=0,j=0;
        
        while(j<n)
        {
            sum=sum+arr[j];
            while(sum>s)
            {
                sum=sum-arr[k];
                k++;
            }
            if(sum==s&&k<=j)
            {
                l.push_back(k+1);
                l.push_back(j+1);
                return l;
            }
            j++;
            
        }
        l.push_back(-1);
        return l;
    }
};

int main()
 {
    int t;
    cout<<"Enter the no of test case."<<endl;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cout<<"Enter the length of array and sum :"<<endl;
        cin>>n>>s;
        vector<int>arr(n);
        cout<<"Enter the element"<<endl;
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
