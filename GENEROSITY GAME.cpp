
#include <stdio.h>
long long n,a,q,r,sum=0,in,mid,f,aux=0;
int main(){
    scanf("%lld", &n);
    long long v[n];
    for(int i=0;i<n;++i){
            scanf("%lld", &v[i]);
            sum+=v[i];
            v[i]=sum;
    }
    scanf("%lld", &q);
    while(q--){
        scanf("%lld", &r);
        if(r>v[n-1]){printf("none\n");}
        else{
            in=0,f=n-1;
            while(in<=f){
                mid=(in+f)/2;
                if(v[mid]>=r){
                    aux=mid;
                    f=mid-1;
                }
                else{
                    in=mid+1;
                }
            }
            printf("%lld\n", aux+1);
        }
    }
}
