#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int heights[n] = {0};

    for (int i = 0; i < n; i++)
    {
        cin >> heights[i];
    }
    
    int max_height = 0, min_height = 101;
    int max_index = 0, min_index = 0;

    for (int i = 0; i < n; i++)
    {
        if (heights[i] > max_height)
        {
            max_height = heights[i];
            max_index = i;
        }

        if (heights[i] <= min_height)
        {
            min_height = heights[i];
            min_index = i;
        }
    }
    
    int steps = 0;

    if (max_index < min_index)
    {
        steps = max_index + ((n - 1) - min_index);
    }
    if (max_index > min_index)
    {
        steps = max_index + ((n - 1) - (min_index + 1));
    }
    
    cout << steps << endl;

    return 0;
}