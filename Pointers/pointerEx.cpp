#include<iostream>
using namespace std;
int main(){
    int a;
    int *ptr=&a;
    cout<<ptr<<endl;
    cout<<sizeof(ptr);
    return 0;
}