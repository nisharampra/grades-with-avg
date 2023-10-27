//
//  main.cpp
//  grades with average
//
//  Created by Nisha Ramprasath on 26/10/23.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int m1,m2,m3,total;
    float avg;
    cout<<"enter marks of 3 sub";
    cin>>m1>>m2>>m3;
    avg = total / 3.0;
    if(avg>=60){
        cout<<"a"<<endl;
    }
   else if(avg>=35 && avg<60){
        cout<<"b"<<endl;
    }
    
   else{
       cout<<"c"<<endl;
   }
    return 0;
}
