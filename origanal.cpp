#include <iostream>
#include <string>
int main(){
    std::string name;
    std::cin >> name;
    if (name != ""){
        std::cout << "Hello "+name+"!";
    } else {
        std::cout << "Hello!";
    }
    return 0;
}
