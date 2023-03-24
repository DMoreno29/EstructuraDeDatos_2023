
#include <iostream>

int aumento_indice(int ind, int max_ind)
{
    return ind == (max_ind - 1) ? 0 : ind + 1; 
}

int max_element(int parameter[], int num_array)
{   
    int max = 0;
    for(int ind = 0; ind < num_array; ind++)
    {
        if(parameter[ind] > max)
        {
            max = parameter[ind];
        }
    }
    return max;
}

int min_element(int parameter[], int num_array)
{   
    int min = parameter[0];
    for(int ind = 1; ind < num_array; ind++)
    {
        if(parameter[ind] < min)
        {
            min = parameter[ind];
        }
    }
    return min;
}

int main()
{
    int num_casos;
    std:: cin >> num_casos;

    for(int ind = 0; ind < num_casos; ind++)
    {
        int num_players, num_bill;
        scanf("%d %d", &num_players, &num_bill);

        int arr_numbers[num_bill];
        for(int ind = 0; ind < num_bill; ind++)
        {
            scanf("%d", &arr_numbers[ind]);
        }

        int contadores[num_players];
        for(int ind_cont = 0; ind_cont < num_players; ind_cont++)
        {
            contadores[ind_cont] = 0;
        }

        int ind_player = 0;
        for(int number : arr_numbers)
        {
            int temp = contadores[ind_player];
            contadores[ind_player] = temp + number;

            ind_player = aumento_indice(ind_player, num_players);
        }

        int max = max_element(contadores, num_players);
        int min = min_element(contadores, num_players);

        std::cout << max - min << "\n";
    }
}