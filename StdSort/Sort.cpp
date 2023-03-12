#include <bits/stdc++.h>
using namespace std;
const int MAX=3e5+5;
int n;
float a[MAX];
void nhap(int &n, float a[]);
void xuat(int n, float a[]);
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    nhap(n,a);
    sort(a,a+n);
    xuat(n,a);
}
void nhap(int &n, float a[]){
    cin>>n;
    for (int i=0; i<n; i++) cin>>a[i];
}
void xuat(int n, float a[]){
    for (int i=0; i<n; i++) cout<<a[i]<<" ";
}
