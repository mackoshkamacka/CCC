#include<bits/stdc++.h>

using namespace std; 
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int pack, obs;

    cin>>pack>>obs; 

    cout<<(50*pack)-(10*obs)+(pack>obs)*500<<endl;
    return 0; 
}