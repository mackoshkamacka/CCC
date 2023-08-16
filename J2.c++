
#include<iostream>


using namespace std; 
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n; 
    int shu = 0; 

    string pepper; 
    for(int i = 0; i<n; i++){
        
        cin>>pepper; 

        if(pepper=="Poblano"){
            shu = shu + 1500; 
        }
        else if(pepper == "Mirasol"){
            shu = shu + 6000; 
        }
        else if(pepper == "Serrano"){
            shu = shu + 15500; 
        }
        else if(pepper == "Cayenne"){
            shu = shu + 40000; 
        }        
        else if(pepper == "Thai"){
            shu = shu + 75000; 
        }        
        else if(pepper == "Habanero"){
            shu = shu + 125000; 
        }

    }
    
    cout<<shu<<endl; 
    return 0; 
}
