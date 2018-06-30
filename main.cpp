#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int s[n+3];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    sort(s,s+n);
    int flag=1,counts=1,index=0;
    for(int i=1;i<n;i++){
        if(s[i]!=s[i-1]){
                if(counts>flag){
                        flag=counts;
                        index=i-1;
                }
                counts=1;
        }
        else{
                counts++;
        }
    }
    if(counts>flag){
        flag=counts;
        index=n-1;
    }
    cout<<s[index]<<endl;
    cout<<flag<<endl;

}
