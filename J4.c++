#include<bits/stdc++.h>
#include<iostream> 

using namespace std; 
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    int current[n], current2[n]; 
    cin>>current[0];
    int count = current[0]*3; 
    for(int i = 1; i<n; i++){
        cin>>current[i]; 
        count += (current[i]) - (current[i]==current[i-1])*(current[i]); 
    } 
    cin>>current2[0]; 
    count += current[0]*3; 
    for(int i = 1; i<n; i++){
        cin>>current2[i]; 
        count += (current2[i]*3) - (current2[i]==current2[i-1])*(current2[i]); 
    }
    for(int i = 0; i<n; i++){
        count = count - (current[i]==current2[i]);
    }

    cout<<count<<endl;
    return 0; 
}
