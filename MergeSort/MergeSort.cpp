#include <bits/stdc++.h>
using namespace std;
const int MAX=3e5+5;
int n;
float a[MAX],b[MAX];
void nhap(int &n, float a[]);
void mergeSort(float a[], float b[], int l, int r);
void xuat(int n, float a[]);
int main(){
    /*freopen("test.inp","r",stdin);
    freopen("test.out","w",stdout);*/
    ios_base::sync_with_stdio(0); cin.tie(0);
    nhap(n,a);
    mergeSort(a,b,0,n-1);
    xuat(n,a);
}
void nhap(int &n, float a[]){
    cin>>n;
    for (int i=0; i<n; i++) cin>>a[i];
}
void mergeSort(float a[], float b[], int l, int r){//sắp xếp dãy từ vị trí l đến r của dãy a không giảm
    if (l>=r) return;
    int mid=(l+r)/2;
    mergeSort(a,b,l,mid); mergeSort(a,b,mid+1,r);
    int il=l,el=mid,ir=mid+1,er=r;
    int i=l-1;
    while(il<=el || ir<=er){
        if (il>el){
            for (int j=ir; j<=er; j++){
                b[++i]=a[j];
            }
            break;
        }
        if (ir>er){
            for (int j=il; j<=el; j++){
                b[++i]=a[j];
            }
            break;
        }
        if (a[il]<=a[ir]){
            b[++i]=a[il]; il++;
        }
        else{
            b[++i]=a[ir]; ir++;
        }
    }
    for (int j=l; j<=r; j++){
        a[j]=b[j];
    }
}
void xuat(int n, float a[]){
    for (int i=0; i<n; i++) cout<<a[i]<<" ";
}
