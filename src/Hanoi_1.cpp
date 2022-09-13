#include "Hanoi_2.h"

using namespace std;

int main()
{
    int n = 0;
    cout << "Enter n for Hanoi tower: ";
    cin >> n;
    Hanoi my_tower(n,"Pose_A","Pose_B","Pose_C");
    
 
    return 0;
}
