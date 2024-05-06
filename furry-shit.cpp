#include <iostream>
#include <string>

const std::string name = "furry-shit";
const std::string author = "ANUSIXA66383";
const std::string description = "аргумент протиф фурри из набора супер аргументы. Гениальный аргумент так называемо Железный аргумент ";

int main(int argc, char* argv[]) {
    if (argc > 1) {
        std::string arg = argv[1];
        if (arg == "--version") {
            std::cout << name << "(1.0)" << std::endl;
            std::cout << author << std::endl;
            std::cout << "license: GNU" << std::endl;
            return 0;
        }
    }
   
    bool argument_top = true;
    
    std::string argument = "Фурри, к вам обращение вы переодиваетесь в животных ведь любите антропоморных животных но вы же даже не учли что своими опущеными сходками мешаете людям и вам даже полиция задержывала блять ведь вы не законно это делали а вывод из этого можно зделать что фурри мешает людям блять";
    std::cout << argument << std::endl;
    std::cout << "понравился аргумент? (N/Y)";
    std::string l;
    std::cin >> l;
    if (l == "Y" || l == "Д" || l == "Да" || l == "Yes") {
        std::cout << "thanks" << std::endl;
    }
    else {
        std::cout << "может ты фурри? Если так то сьеби нахуй";
        
    }
    return 0;


}