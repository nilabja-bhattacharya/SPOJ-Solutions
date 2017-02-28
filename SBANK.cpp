#include<iostream>
using namespace std;
#include<set>
#include<map>
#include<string>
#include<cstdio>

int main(){
    int t;
    cin>>t;
    while(t--){
        int count;
        map<string, int> table;
        map<string, int>::iterator it;
        char str[40];
        for( scanf("%d\n", &count); count; count--){
            gets(str);
            table[(string)str]++;
        }
        for( it = table.begin(); it != table.end(); it++){
            printf("%s %d\n", it->first.c_str(), it->second);
        }
        printf("\n");
    }
}
