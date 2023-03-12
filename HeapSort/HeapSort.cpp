#include <bits/stdc++.h>
using namespace std;
const int MAX=3e5+5;
void nhap(float a[], int &n);
void heapify(float a[], int n, int root);
void heapSort(float a[], int n);
void xuat(float a[], int n);
int main(){
    /*freopen("test.inp","r",stdin);
    freopen("test.out","w",stdout);*/
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    float a[MAX];
    nhap(a,n);
    heapSort(a,n);
    xuat(a,n);
}
void nhap(float a[], int &n){
    cin>>n;
    for (int i=0; i<n; i++) cin>>a[i];
}
void heapify(float a[], int n, int root){
    int imax=root;
    int l=root*2+1; int r=root*2+2;
    if (l<n && a[imax]<a[l]) imax=l;
    if (r<n && a[imax]<a[r]) imax=r;
    if (imax!=root){
        swap(a[imax],a[root]);
        heapify(a,n,imax);
    }
}
void heapSort(float a[], int n){
    for (int i=n/2-1; i>=0; i--){
        heapify(a,n,i);
    }
    for (int i=n-1; i>=0; i--){
        swap(a[0],a[i]);
        heapify(a,i,0);
    }
}
void xuat(float a[], int n){
    for (int i=0; i<n; i++) cout<<a[i]<<" ";
}
