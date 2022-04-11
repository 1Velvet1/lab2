#include <iostream>

int main(int agc, string* argv[]){

     std::string name;  //для хранения имени пользователя

     std::cin >> name;  //получения имени

     std::cout << "Hello, World from " + name + "!\n"; //вывод

    return 0;  

}
