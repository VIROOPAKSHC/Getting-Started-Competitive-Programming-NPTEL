#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int N;cin>>N;
        cout<<int((N*(N-1))/2)<<endl;
    }
    return 0;
}
// Resulting sum of the operations always
// reach nC2 for every N.
