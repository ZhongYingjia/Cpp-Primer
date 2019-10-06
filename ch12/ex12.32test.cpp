#include "ex12.32.h"

void runQueries(std::ifstream& ifs)
{
    TextQuery tq(ifs);
    while(true){
        std::cout << "enter word to look for, or q to quit: ";
        std::string s;
        if(!(std::cin >> s)||s == "q") break;
        print(std::cout, tq.query(s)) << std::endl;
    } 
}


int main()
{
    std::ifstream file("../data/storyDataFile.txt");

    runQueries(file);
    return 0;

}