#include <iostream>
#include "Hanoi_2.h"
using namespace std;

Hanoi::Hanoi(int N_new,int home_new,int target_new,int remain_new)
    : N(N_new), home(home_new), target(target_new), remain(remain_new){}
    


int Hanoi::Hanoi_count(int N){
int result = 1;
for (int i = 0;  i<N; i++){
result = result * 2;
}
return result-1;
}

void Hanoi::Hanoi_log(int N,int home,int target,int remain){
    Hanoi_seq(N,home,target,remain);

}

void Hanoi_seq(int N,int home,int target,int remain){
    if (N == 1){
        cout << home << "  " << target << "\n";
    }
    else {
        Hanoi_seq(N-1,home,remain,target);
        cout << home << "  " << target << "\n";
        Hanoi_seq(N-1,remain,target,home);
    }

}
