#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> str = {"Hi", "welcome", "to", "the", "C++", "world"};
    for(auto s: str){
        cout<<s<<" ";
    }
    return 0;
}