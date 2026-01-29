#include<iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    //precompute
    int hash[256] = {0};
    for(int i =0;i<s.size();i++){
        hash[s[i]]++;
    } 
    int p;
    cin >> p;
    while(p--){
        int c;
        cin >> c;
        //fetch
        cout << hash[c] << endl;
    }
}