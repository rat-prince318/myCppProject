#include <iostream>
using namespace std;

enum CPU_rank {P1=1,P2,P3,P4,P5,P6,P7}

class CPU
{
    public:
    CPU_rank rank;
    int frequency;
    float voltage;
    
};