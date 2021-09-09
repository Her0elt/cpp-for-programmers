#include <vector>
#include <iostream>

using namespace std;

int main(){
    vector<double> vec{1.0,2.0,3.0,4.0,5.0};
    cout << "front " <<vec.front() << endl;
    cout << "back " <<vec.back() << endl;
    vec.emplace(vec.begin()+ 1, 8.0);
    cout << "front " <<vec.front() << endl;
}   