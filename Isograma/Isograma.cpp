#include <iostream>
#include <cstring>

using namespace std;

int main(){
    
    string p ;

    cout<<"Ya sabes : ";cin>>p;

    int cont[p.length()]= {0};

    for(int i=0 ; i<p.length(); i++){

        for(int a=0 ; a<p.length(); a++){

            if(p[i] == p[a]){

                cont[i]++;

                if(cont[i]>1){
                    cout<<"false";
                    return 0;
                }

            }
            
        }

    }

    cout<<"true";

    // Cantidad de veces que se repitio dicha letra (No es necesario , lo puse para ver errores)

    for(int i=0 ; i<p.length(); i++){

        cout<<cont[i]<<endl;

    }
   
    return 0;
}