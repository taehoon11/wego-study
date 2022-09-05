#include <iostream>
#include "../include/Hanoi_2.h"
using namespace std;


int main(){
int n = 0;

cout << "Enter n for Hanoi tower: ";
cin >> n;
Hanoi my_tower(n,1,3,2);
cout << "Hanoi Count : " << my_tower.Hanoi_count(n) << "\n\n";
cout << "log is as follow !!!\n\n";
my_tower.Hanoi_log(n,1,3,2);

return 0;
}
