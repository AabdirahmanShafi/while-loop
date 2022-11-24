#include <iostream>
using namespace std;

int main(){
    int sum, count=20;
    
    while(count<=25)
    {
        sum += count;
        count++;

    }
    cout<<"sum of while numbers from 20 to 25 is "<<sum;
}