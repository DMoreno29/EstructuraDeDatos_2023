
#include <iostream>
using namespace std;

int main() 
{
    int n_rondas;
    cin >> n_rondas;

    int array_so[n_rondas];
    for(int ind = 0; ind < n_rondas; ind++)
    {
        scanf("%d, ", &array_so[ind]);
    }

    int array_lar[n_rondas];
    for(int ind = 0; ind < n_rondas; ind++)
    {
        scanf("%d, ", &array_lar[ind]);
    }

    int array_is[n_rondas];
    for(int ind = 0; ind < n_rondas; ind++)
    {
        scanf("%d, ", &array_is[ind]);
    }


    int cont_so = 0; 
    int cont_lar = 0; 
    int cont_is = 0;
    for(int x = 0; x < n_rondas; x++)
    {
        int s_all = array_so[x] + array_lar[x] + array_is[x];
        if(s_all % 2 == 0)
        {
            array_so[x] % 2 == 0? cont_so++ : 0;
            array_lar[x] % 2 == 0? cont_lar++ : 0;
            array_is[x] % 2 == 0? cont_is++ : 0;
        }
        else
        {
            array_so[x] % 2 != 0? cont_so++ : 0;
            array_lar[x] % 2 != 0? cont_lar++ : 0;
            array_is[x] % 2 != 0? cont_is++ : 0;
        }
    }

    cout << "SO:" << cont_so << ", LAR:" << cont_lar << ", IS:" << cont_is;
}