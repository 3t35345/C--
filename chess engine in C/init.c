#include "defs.h"

int Sq120_To_Sq64[BRD_SQ_NUM];
int Sq64_To_Sq120[64];

U64 SetMask[64];
U64 ClearMask[64];

void Init_BitMask(){
    int index = 0;
    for(index = 0; index<64;++index){
        SetMask[index] = 0ULL;
        ClearMask[index] = 0ULL;
    }
    
    for(index=0; index<64; ++index){
        SetMask[index] |= (1ULL << index);
        ClearMask[index] = ~SetMask[index];
    }
}

void InitSq120To64(){
    int index = 0;
    int file = FILE_A;
    int rank = RANK_1;
    int sq = A1;
    int sq_64 = 0;

    for(index=0; index<BRD_SQ_NUM; ++index){
        Sq120_To_Sq64[index] = 65;
    }

    for(index=0; index<64;++index){
        Sq64_To_Sq120[index] = 120;
    }

    for(rank=RANK_1; rank<=RANK_8; ++rank){
        for(file=FILE_A; file<=FILE_H; ++file){
            sq = FR2Sq(file,rank);
            Sq64_To_Sq120[sq_64] = sq;
            Sq120_To_Sq64[sq] = sq_64;
            sq_64++;
        }
    }
}
void AllInit(){
    InitSq120To64();
    Init_BitMask();
    
}