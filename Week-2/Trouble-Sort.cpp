#include<bits/stdc++.h>
using namespace std;

#define vi vector<int> 
#define ll long long int
#define vll vector<long long int>

void TroubleSort(vi& vect){
    // Triple Bubble Sort
    bool done = false;
    while(!done){
        done=true;
        for(int i=0;i<vect.size()-2;i++){
            if(vect[i]>vect[i+2]){
                done=false;
                auto temp = vect[i];
                vect[i]=vect[i+2];
                vect[i+2] = temp;
            }
        }
    }
}

void TroubleSort_stylish(vi& v){
    vi odd,even;
    for(int i=0;i<v.size();i++){
        if(i%2==0){
            even.push_back(v[i]);
        }
        else{
            odd.push_back(v[i]);
        }
    }
    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end());

    vi vsorted;
    for(int i=0;i<v.size();i++){
        if(i%2==0){
            vsorted.push_back(even[0]);
            even.erase(even.begin());
        }
        else{
            vsorted.push_back(odd[0]);
            odd.erase(odd.begin());
        }
    }

    int flag = -1;
    for(int i=0; i<v.size();i++){
        if(i<v.size()-1){
            if(vsorted[i] > vsorted[i+1]){
                flag=i;
                break;
            }
        }
    }
    if(flag==-1)
        cout<<"OK"<<endl;
    else
        cout<<"NO"<<endl;
}

int main(){

    int T;cin>>T;
    for(int tcase=1;tcase<=T;tcase++){
        int N;cin>>N;
        int num=0;
        vi v;
        for(int i=0;i<N;i++){
            cin>>num;
            v.push_back(num);
        }

    }
}