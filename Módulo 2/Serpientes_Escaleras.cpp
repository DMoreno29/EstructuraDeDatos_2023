
#include <iostream>
#include <map>

int main()
{

    int nro_rondas;
    std::cin >> nro_rondas;

    for(int ind = 0; ind < nro_rondas; ind++)
    {
        int tam_arreglo;
        std::cin >> tam_arreglo;

        int cont_numbers[tam_arreglo];
        for(int ind = 0; ind < tam_arreglo; ind++)
        {
            scanf("%d", &cont_numbers[ind]);
        }

        std::map<int, int> indices = {};
        int indice = 0; int cont = 0;

        for(int num : cont_numbers)
        {
            indices.insert(std::pair<int, int>(indice, indice));
            indice += num;
            cont++;

            if(indice >= tam_arreglo){
                std::cout << cont << "\n";
                break;
            }

            if(indice < 0){
                std::cout << cont << "\n";
                break;
            }

            bool exist = indices.count(indice) == 0;
            if(indice == 0)
            {
                std::cout << cont << "\n";
                break;
            }
        }
    }   
}