#include <iostream>
#include <cmath>
using namespace std;
float f(float y){
    return pow(y,2)*cos(y)+1;
}

int main() {
    float a=0,b=0, x=0,err=0;
    do {
        cout << "inserire estremi"<<endl;
        cin >> a;
        cin >> b;
    }while(f(a)*f(b)>=0);
    do {
        x=(a+b)/2;
        if(f(x)!=0) {
            if (f(a) * f(b) < 0) {
                a = x;
            } else {
                b = x;
            }
        }else
            break;
        err=abs((b-a)/2);  
    }while(err>=1e-6);
    cout << int(x * 10000) / 10000.0 <<endl;
    cout << int(f(x) * 10000) / 10000.0 <<endl;
    return 0;
}
