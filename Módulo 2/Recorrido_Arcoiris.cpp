
#include <string>
#include <iostream>

int main()
{
    int len_arreglo;
    std::cin >> len_arreglo;

    char cont_letras[len_arreglo];
    for(int ind = 0; ind < len_arreglo; ind++)
    {
        scanf("%s, ", &cont_letras[ind]);
    }

    std::string letters(cont_letras);
    std::string new_letters;
    new_letters = letters.substr(0, 1);

    int len_array = letters.length();
    int ind_final = int(len_array / 2);
    for(int ind = 1; ind <= ind_final; ind++)
    {
        new_letters.append(letters.substr(len_array - ind, 1));
        new_letters.append(letters.substr(ind, 1));
    }


    std::string exit;
    if(new_letters.length() == len_array)
    {
        exit = new_letters;
    }
    else
    {   
        new_letters.pop_back();
        exit = new_letters;
    }

    std::cout << exit;
    
}