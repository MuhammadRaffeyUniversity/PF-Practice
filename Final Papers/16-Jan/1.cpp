#include <iostream>
using namespace std;
struct Player
{
    string name;
    float speed[6];
};

float SortSpeed(float arr[6])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                float temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
    return arr[0];
}
float CalculateAverage(float arr[6])
{
    float sum = 0.0;
    for (int i = 0; i < 6; i++)
    {
        sum += arr[i];
    }
    float avg = sum / 6.0;
    return avg;
}
int main()
{
    Player p1 = {"Mr. Abbas Afridi", {142, 144.5, 143.2, 145.3, 141.22, 150}};
    Player p2 = {"Mr. Ihsanullah", {145, 143.5, 142, 141.22, 154.5, 140}};
    cout << "Sorted Record:\n";
    float pl_1_TopSpeed = SortSpeed(p1.speed);
    float pl_2_TopSpeed = SortSpeed(p2.speed);
    cout << "Averages:\n";
    cout << p1.name << ":\t" << CalculateAverage(p1.speed) << endl;
    cout << p2.name << ":  \t" << CalculateAverage(p2.speed) << endl;
    cout << "Higher Bowling Speed:\n";
    if (pl_1_TopSpeed > pl_2_TopSpeed)
    {
        cout << p1.name << ":\t" << pl_1_TopSpeed << endl;
        cout << "Congratulations," << p1.name << "! You have been selected." << endl;
    }
    else
    {
        cout << p2.name << ":\t" << pl_2_TopSpeed << endl;
        cout << "Congratulations," << p2.name << "! You have been selected." << endl;
    }

    return 0;
}