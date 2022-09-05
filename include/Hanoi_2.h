#include <iostream>


void Hanoi_seq(int N,int home,int target,int remain);

class Hanoi{
    int N;   //number of blocks
    int home; //position of start
    int target; //position of end
    int remain; // remain position

    public:
        Hanoi(int N_new,int home_new,int target_new,int remain_new);
        int Hanoi_count(int N);
        void Hanoi_log(int N,int home,int target,int remain);


};