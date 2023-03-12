#include <bits/stdc++.h>
using namespace std;
const int MAX=1e5;
int rand_int(int l, int r){
    return l+(rand()%(r-l+1));
}
float arr[MAX+5];
int main(){
    /*freopen("test.inp","r",stdin);
    freopen("test.out","w",stdout);
    ios_base::sync_with_stdio(0); cin.tie(0);*/
    srand(time(0));
    int n=MAX;
    cout<<n<<"\n";
    for (int i=0; i<n; i++){
        int a=rand_int(0,MAX); //random phần nguyên
        int b=rand_int(1,100); //random phần thập phân
        arr[i]=(float)a+1.0/(float)b;
    }
    //sort(arr,arr+n); //nếu như là dãy đã sắp xếp tăng dần
    //sort(arr,arr+n,greater<float>()); //nếu như là dãy đã sắp xếp giảm dần
    for (int i=0; i<n; i++)
        cout<<fixed<<setprecision(5)<<arr[i]<<" ";
}
