#include<bits/stdc++.h>
using namespace std;
#define MAX_ITERATION 1000000

double c;
double func(double x){
    return x*x*x - x*x + 2;
}

class FalsePositionClass{
public:
    void falsePosition(double a,double b){
        if(func(a)*func(b)>=0){
            cout<< "Invalid input!";
            return;
        }
        c=a;
        for(int i=0;i<MAX_ITERATION;i++){
            c = (a*func(b)-b*func(a))/(func(b)-func(a));
            if(func(c)==0.0){
                //cout<<"Root: "<<c<<endl;
                break;
            }
            else if(func(a)*func(c)<0.0){
                //cout<<"Root: "<<c<<endl;
                b=c;
            }
            else{

                a=c;
            }
        }
         cout<<"Root: "<<c<<endl;
    }

};

int main(){
    FalsePositionClass F;
    double a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    F.falsePosition(a,b);
    cout<< "Actual root: "<<c<<endl;
    return 0;
}
