#include "stdio.h"
#include "stdlib.h"
#include "defs.h"

int main(){
    AllInit();

    // printf("Sq120_To_Sq64:");
    // for(int index = 0; index < BRD_SQ_NUM; ++index){
    //     if(index%10==0){
    //         printf("\n");
    //     }
    //     printf("%5d", Sq120_To_Sq64[index]);
    // }
    // printf("\n");
    // printf("\n");
    // printf("Sq64_To_Sq120:");
    // for(int index=0; index < 64; ++index){
    //     if(index%8==0){
    //         printf("\n");
    //     }
    //     printf("%5d", Sq64_To_Sq120[index]);
    // }
    
    // U64 playBitBoard = 0ULL;
    // SETBIT(playBitBoard, 8);
    // SETBIT(playBitBoard, 9);
    // SETBIT(playBitBoard, 10);
    // SETBIT(playBitBoard, 11);
    // CLRBIT(playBitBoard, 8);
    // CLRBIT(playBitBoard, 9);
    
    // Print_BitBoard(playBitBoard);

    int PieceOne = rand();
    int PieceTwo = rand();
    int PieceThree = rand();
    int PieceTour = rand();
    // print all 3 random variables
    printf("PieceOne: %X\nPieceTwo: %X\nPieceThree: %X\n", PieceOne, PieceTwo, PieceThree);

    int Key = PieceOne ^ PieceTwo ^ PieceThree ^ PieceTour;
    printf("Key: %X\n", Key);
    int Temp_Key = PieceOne;
    Temp_Key ^= PieceTwo;
    Temp_Key ^= PieceThree;
    Temp_Key ^= PieceTour;
    return 0;
}