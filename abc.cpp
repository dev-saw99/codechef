#include<bits/stdc++.h>
using namespace std;
#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))
#define memo(a,v) memset(a,v,sizeof(a))
#define CLR(a) memo(a,0)
#define pb push_back
#define all(a) a.begin(),a.end()
#define eps (1e-9)
#define inf (1<<29)
#define i64 long long
#define u64 unsigned i64
#define AIN(a,b,c) assert(a<=b && b<=c)
#define MOD 1000000007

int main(){
    int i,x,ans,n,last;

   while(scanf("%d",&n)==1){
    //  AIN(1,n,10000);
        last = 0;
        ans = 0;
        for(i = 0;i<n;i++){
            scanf("%d",&x);
            AIN(0,x,10000);
            if(x==0){
                ans = max(ans,i - last);
                last = i+1;
            }
        }
        ans = max(ans,i - last);
        printf("%d\n",ans);
    }
	return 0;
}