#include <iostream> 
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    unsigned int min = 0, max = 0;
    const int MAX = 3;
    unsigned int array[MAX];
    for (int i = 0; i < MAX; i++)
    {
        cout << "Введите число: "; cin >> array[i];
        if (array[i] > max)
        {
            max = array[i];
            min = array[i];
        }
        else
        {
            if (min > array[i])
                min = array[i];
        }
    }
    cout << "Минимальное число: " << min << endl << "Максимальное число: " << max << endl;
    return 0;
}