//600B : Queries about less or equal elements
#include <iostream>
using namespace std;
int ans = -1;
int UB(int* a, int n, int target){
    int s = 0;
    int e = n-1;
    int ans = -1;
    while(s<=e){
        int mid = (s+e)/2;
        if(a[mid] > target) {
            ans = mid;
            e = mid-1;
        }
        else s = mid+1; //a[mid] < target     
    }
    return ans;
}

int main() {
   int n , m;
   cin >> n>> m;
   int a[n];
   int b[m];
   for(int i =0; i<n;i++){
       cin >> a[i];
   }
    for(int i =0; i<m;i++){
       cin >> b[i];
   }
   for(int i = 0 ; i < m; i++){
       cout << UB(a, n , b[i]) << " ";
   }
}
