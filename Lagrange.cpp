#include<bits/stdc++.h>
using namespace std;

struct Data{
    int x,y;
};

double Interpolate(Data f[],int xi,int n){
    double result=0;
    for(int i=0;i<n;i++){
        // Compute individual term
        double term = f[i].y;
        for(int j=0;j<n;j++){
            if(j!=i){
                term = term*(xi-f[j].x) / double(f[i].x - f[j].x);
            }
        }
        result = result + term;
    }
    return result;
}

int main(){
    Data f[] = {{0,2},{1,3},{2,12},{5,147}};
    cout<< "Value at f(3): "<< Interpolate(f,3,5);
    return 0;
}
