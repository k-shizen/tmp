#include<iostream>
using namespace std;

void say(int i){
    cout << i << endl;
}

void say(double i){
    cout << i << endl;
}

int main(){
    say(2);
    say(2.0);
}