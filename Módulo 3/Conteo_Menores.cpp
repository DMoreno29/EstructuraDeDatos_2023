
#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>
#include <map>

int main()
{
    int nro_rondas;
    std::cin >> nro_rondas;
    std::cin.ignore();

    for(int i = 0; i < nro_rondas; i++)
    {
        std::vector<int> numbers;

        std::string line;
        std::getline(std::cin, line);
        std::istringstream ing(line);

        int number;
        while(ing >> number)
        {
            numbers.push_back(number);
        }

        std::sort(numbers.begin(), numbers.end());

        std::map<int, int> map = {};
        std::vector<int> result;
        for(int number : numbers)
        {
            bool exists = map.count(number) == 0;
            if(exists)
            {   
                result.push_back(std::count(numbers.begin(), numbers.end(), number));
                map.insert(std::pair<int, int>(number, number));
            }
        }
        
        for(int ind = 0; ind < result.size(); ind++)
        {
            if(ind != result.size() - 1)
            {
                std::cout << result[ind] << " ";
            }
            else
            {
                std::cout << result[ind] << std::endl;
            }
        }
    }
}
