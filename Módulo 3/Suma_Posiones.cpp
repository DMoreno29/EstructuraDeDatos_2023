
#include <iostream>

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
 
        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}

int main()
{
    int N;
    std::cin >> N;

    int cont_numbers[N];
    for(int ind = 0; ind < N; ind++)
    {
        scanf("%d", &cont_numbers[ind]);
    }

    int M;
    std::cin >> M;

    int cont_numbers2[M];
    for(int ind = 0; ind < M; ind++)
    {
        scanf("%d", &cont_numbers2[ind]);
    }

    int cont = 0;
    for(int number : cont_numbers2)
    {
        int result = binarySearch(cont_numbers, 0, N-1, number) != -1 ?  binarySearch(cont_numbers, 0, N-1, number) + 1 : 0;
        cont += result;
    }

    std::cout << cont << std::endl;
}