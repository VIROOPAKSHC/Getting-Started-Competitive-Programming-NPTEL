#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long int
#define vll vector<long long int>

void Reverse_Manual(int i,int j, vi& arr){
    if(i==j){
        return;
    }
    while(i<j){
        int temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
        i++;
        j--;
    }
}

int ReverSort_Manual(vi &vect){
    int cost=0;
    int N = vect.size();
    for(int i=0;i<N-1;i++){
        int smallest = i;
        int j=i;
        for(j=i;j<N;j++){
            if(vect[smallest]>vect[j]){
                smallest = j;
            }
        }
        Reverse_Manual(i,smallest,vect);
        cost+=(smallest-i+1);
    }
    return cost;
}


int ReverSort_Stylish(vi &vect){
    int cost = 0;
    for(int i=0; i<vect.size()-1; i++){
        int m = *min_element(vect.begin()+i,vect.end());
        auto x = find(vect.begin(),vect.end(),m);
        reverse(vect.begin()+i,x+1);
        cost += distance(vect.begin(),x) - i + 1;
    }
    return cost;
}


int main(){
    int t;cin>>t;
    // #ifndef ONLINE_JUDGE
    //     freopen("in.txt","r",stdin);
    //     freopen("out.txt","w",stdout);
    // #endif

    std::ios::sync_with_stdio(false);
    while(t--){
        int N;cin>>N;
        vi input = {};
        while(N--){
            int temp;cin>>temp;
            input.push_back(temp);
        }
        
        int cost = ReverSort_Manual(input);
        cout<<"Case Cost: "<<cost<<endl;
        for(int i=0;i<input.size();i++){
            cout<<input[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}