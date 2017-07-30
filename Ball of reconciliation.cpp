
#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
  optimizar_io
  long long n,f;
  map<int,int>lol;
  for (int i=0;i<10001;++i) {
    for (int j=0;j<=i;++j) {
      for (int k=0;k<=j;++k) {
        f=i*(j+k)+j*k;
        if (f>=10001)break;
        lol[f]++;
      }
    }
  }
  while (cin>>n && n!=-1) {
    cout<<lol[n]<<endl;
  }
  return 0;
}
