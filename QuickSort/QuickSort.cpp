#include <bits/stdc++.h>
using namespace std;
const int MAX=3e5+5;
int n;
float a[MAX];
void nhap(int &n, float a[]);
void quickSort(float a[], int l, int r);
void xuat(int n, float a[]);
int main(){
    /*freopen("test.inp","r",stdin);
    freopen("test.out","w",stdout);*/
    ios_base::sync_with_stdio(0); cin.tie(0);
    nhap(n,a);
    quickSort(a,0,n-1);
    xuat(n,a);
}
void nhap(int &n, float a[]){
    cin>>n;
    for (int i=0; i<n; i++) cin>>a[i];
}
void quickSort(float a[], int l, int r){//sắp xếp dãy từ vị trí l đến r của dãy a không giảm
    if (l>=r) return;
    int pv=l; //chọn mốc là vị trí đầu tiên của dãy cần sắp xếp
    int i=l;
    for (int j=l+1; j<=r; j++){
        if (a[j]<a[pv]){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i],a[pv]);
    quickSort(a,l,i-1); quickSort(a,i+1,r);
}
void xuat(int n, float a[]){
    for (int i=0; i<n; i++) cout<<a[i]<<" ";
}
