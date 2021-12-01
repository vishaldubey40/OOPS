#include <bits/stdc++.h>

using namespace std;
void printvec(vector<int> &v){
    cout<<"size: "<<v.size()<<endl;              /*  input
                                                   4
                                                   3
                                                   1 2 3
                                                   4
                                                   1 5 8 2
                                                   4
                                                   7 3 3 6
                                                   9
                                                   9 2 5 2 6 38 3 2 3
                                                   */
    for(int i=0;i<v.size();++i){
        cout<<v[i]<<" ";
    }cout<<endl;
}

int main() {
    int N;
    cin>>N;
    vector<int> v[N];
    for(int i=0;i<N;i++){
        int n;
        cin>>n;
        for(int j=0;j<n;j++){
            int c;
            cin>>c;
            v[i].push_back(c);
            
        }
    }
    for(int i=0;i<N;i++){
printvec(v[i]);
}
}
