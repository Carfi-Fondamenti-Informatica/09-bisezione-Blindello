#include <iostream>
#include <cmath>
using namespace std;

float f (float y) {
    return ((y * y) * cos(y)) + 1;
}

int main() {
    float y;
    float a, b, x, err;
    do{
        cout<<"inserire estremi"<<endl;
        cin>>a>>b;

}while (f(a)*f(b)>=0);
    do{
        x=(a+b)/2;
        if (f(x)==0)
            break;
            if(f(a)*f(x)<0){
                a=x;
            }
            else{
                b=x;
            }
            err= abs ((b-a)/2);

    }while (err>= 1e-6);
    cout<<x<<endl;

    return 0;
}
