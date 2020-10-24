using namespace std;
#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define INFINITE 1e9 + 5
#define MOD 1000000007
#define MAXN 100001 
#define pll pair<ll,ll>
#define pii pair<int,int>
#define debugArray(arr) cout << #arr<<" : "<<endl;for(int i : arr){cout << i <<", ";} cout <<endl;
#define debugVariable(x) cout <<#x<<"="<<x<<"\n";
#define check(x) cout<<"CHECK="<<#x<<"\n";
int X[4]={1,0,-1,0};
int Y[4]={0,1,0,-1};
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
    int test;
    cin>>test;
    while(test--)
    {
        int num;
        cin>>num;
        bool ok=true;
        ll arr[num];
        for(int i=0;i<num;i++)
        {
            cin>>arr[i];
        }
        ll diff[num];
        ll mini=INFINITE;
        for(int i=0;i<num-1;i++)
        {
            diff[i]=arr[i+1]-arr[i];
            mini=min(diff[i],mini);
        }
        for(int i=0;i<num-1;i++)
        {
            // cout<<diff[i]<<" ";
            diff[i]=abs(arr[i+1]-arr[i]);
            if(diff[i]!=0)
            {
                ok=false;
            }
        }
        if(ok)
        {
            cout<<-1<<"\n";
        }
        else
        {
            int maxi=-INFINITE;
            int index=-1;
            for(int i=0;i<num;i++)
            {
                if(arr[i]>maxi)
                {
                    index=i;
                    maxi=arr[i];
                }
            }
            if(arr[index]==arr[index+1]&&index+1<num)
            {
                while(arr[index]==arr[index+1]&&index+1<num)
                {
                    index++;
                }
                if(index==num-1&&arr[index]==arr[index-1])
                {
                    while(arr[index]==arr[index-1]&&index-1>0)
                    {
                        index--;
                    }
                }
                // index+=1;
            }
            cout<<index+1<<"\n";
        }
    }
}