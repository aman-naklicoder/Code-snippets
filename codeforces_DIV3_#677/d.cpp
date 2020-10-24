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
        int arr[num];
        for(int i=0;i<num;i++)
        {
            cin>>arr[i];
        }
        bool visited[MAXN];
        vector<pii> ans;
        memset(visited,false,sizeof(visited));
        for(int i=0;i<num;i++)
        {
                for(int j=i+1;j<num;j++)
                {
                    if((!visited[j]||!visited[i])&&arr[i]!=arr[j])
                    {
                        ans.push_back({i+1,j+1});
                        visited[i]=true;
                        visited[j]=true;
                    }
                }
        }
        if(ans.size()==num-1)
        {
            bool ok=true;
            for(int i=0;i<num;i++)
            {
                if(visited[i]==false)
                {
                    ok=false;
                    break;
                }
            }
            if(!ok)
            {
                cout<<"NO"<<"\n";
            }
            else
            {
                cout<<"YES"<<"\n";
                for(auto i:ans)
                {
                    cout<<i.first<<" "<<i.second<<"\n";
                }
            }
        }
        else
        {
            cout<<"NO"<<"\n";
        }
        
    }
}