#include<bits/stdc++.h>
using namespace std;

int Cnt_Subary_WithOddOR(const vector<int>& ar,int t)
{
    int n=ar.size();
    int cnt=0;

    for(int i=0;i<=n-t;i++)
    {
        int rslt=ar[i];
        for (int j=i+1;j<i+t;j++)
        {
            rslt|=ar[j];
        }

        if(rslt%2 == 1)
        {
            cnt++;
        }
    }

    return cnt;
}
int main()
{
    int V;
    cin>>V;  

    while (V--)
    {
        int n,t;
        cin>>n>>t; 

        vector<int>X(n);
        for(int i= 0;i<n;i++)
        {
            cin>>X[i]; 
        }

        int result = Cnt_Subary_WithOddOR(X,t);
        cout<<result<<endl;
    }

    return 0;
}
