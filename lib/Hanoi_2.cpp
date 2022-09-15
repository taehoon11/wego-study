#include "Hanoi_2.h"

using namespace std;

Hanoi::Hanoi(int N_new, const std::string& fromInput, const std::string& toInput, const std::string& byInput)
    : N(N_new), from(fromInput), to(toInput), by(byInput)
{
    if (N == 1)
    {
        cout << "Move disk 1 from "<<from << " to " << to << endl;
    }
    else
    {
        auto smartPTR=make_unique<Hanoi>(N-1,from, to, by);
        cout << "Move disk "  << N << " from " <<from <<" to " << to << endl;
        auto smartPTR2=make_unique<Hanoi>(N-1, by, from, to);
    }    
}