//???
#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int mod;

int testpos (vector<int>&sto,int testpos ) {
    bool check=true;
    int n=sto.size();
    int x=n;
    for (int i=testpos-1;i>=0;i--) {
        if(abs(sto[i]-x)<=1) {

        }
        else {
            check=false;
        }
        x--;
    }
    x=2;
    for (int i=testpos+1;i<n;i++) {
        //cout<<x<<" "<<sto[i]<<endl;
        if(abs(sto[i]-x)<=1) {

        }
        else {
            check=false;
        }
        x++;
    }
    if(check==true) {
        return testpos+1;
    }
    return -1;
}

signed main() {
    ios::sync_with_stdio(false);
      cin.tie(0);
     // freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n;
    cin>>n;
    vector<int> sto(n);
    vector<vector<int>> pos(3);
    for (int i=0;i<n;i++) {
        cin>>sto[i];
        if(sto[i]<3) {
            pos[sto[i]].push_back(i);
        }
    }
    int out=-1;
    for (int i=0;i<3;i++) {
        //cout<<i<<endl;
        for (int j=0;j<pos[i].size();j++) {
            //cout<<pos[i][j]<<" "<<testpos(sto,pos[i][j])<<endl;
            out=max(out,testpos(sto,pos[i][j]));
        }
    }
    if(out==-1) {
        cout<<"NO";
    }
    else {
        cout<<"YES"<<endl<<out;
    }
}
