
#include <string>
#include <iostream>
#include <algorithm>

int main()
{   
    int nro_rounds;
    std::cin >> nro_rounds;
    
    for(int ind = 0; ind <= nro_rounds; ind++)
    {
        char in_cadena[2000];
        fgets(in_cadena, 2000, stdin);
        
        std::string str_cad(in_cadena);
        str_cad.erase(std::remove_if(str_cad.begin(), str_cad.end(), ::isspace), str_cad.end());

        std::string w_inverted;
        for(int ind = str_cad.length() - 1; ind >=0; ind--)
        {
            w_inverted.append(str_cad.substr(ind, 1));
        }

        for(int ind = 1; ind <= w_inverted.length(); ind++)
        {
            std::string temp_1;
            std::string temp_2;
            if(ind % 2 != 0 && ind != w_inverted.length())
            {
                temp_1 = w_inverted.substr(ind - 1, 1);
                temp_2 = w_inverted.substr(ind, 1);

                w_inverted.replace(ind - 1, 1, temp_2);
                w_inverted.replace(ind, 1, temp_1);
            }
        }

        std::cout << w_inverted << "\n";
    }

}