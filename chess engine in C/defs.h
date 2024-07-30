#ifndef DEFS_H // If not defined
#define DEFS_H // Define it

#include <stdlib.h> // for NULL

#define DEBUG // Comment this out to disable debug mode

#ifndef DEBUG
#define ASSERT(n)
#else
#define ASSERT(n) \
if(!(n)){ \
printf("%s - Failed \n", #n); \
printf("On %s  ", __DATE__); \
printf("At %s \n", __TIME__); \
printf("In File %s ", __FILE__); \
printf("At Line %d\n", __LINE__); \
exit(1);}
#endif


typedef unsigned long long U64; // 64 bit unsigned integer

#define NAME "Kince 1.0" // Name of the engine
#define BRD_SQ_NUM 120 // 120 squares on the board including the padding squares
#define MaxGameMoves 2048 // Maximum number of moves in a game

enum {EMPTY, 
      wP, wN, wB, wR, wQ, wK, 
      bP, bN, bB, bR, bQ, bK}; // Piece types

enum {FILE_A, FILE_B, FILE_C, FILE_D, 
      FILE_E, FILE_F, FILE_G, FILE_H, 
      FILE_NONE}; // Files

enum {RANK_1, RANK_2, RANK_3, RANK_4, 
      RANK_5, RANK_6, RANK_7, RANK_8, 
      RANK_NONE}; // Ranks

enum {WHITE, BLACK, BOTH}; // Colors

enum {
    A1 = 21, B1, C1, D1, E1, F1, G1, H1,
    A2 = 31, B2, C2, D2, E2, F2, G2, H2,
    A3 = 41, B3, C3, D3, E3, F3, G3, H3,
    A4 = 51, B4, C4, D4, E4, F4, G4, H4,
    A5 = 61, B5, C5, D5, E5, F5, G5, H5,
    A6 = 71, B6, C6, D6, E6, F6, G6, H6,
    A7 = 81, B7, C7, D7, E7, F7, G7, H7,
    A8 = 91, B8, C8, D8, E8, F8, G8, H8, NO_SQ
}; // coordinates of the squares on chess board (21-98) 

enum {FALSE, TRUE}; // Boolean values


enum {WKCA = 1, WQCA = 2, BKCA = 4, BQCA = 8}; 
// Castling permissions
// 0 0 0 1 = 1 = WKCA
// 0 0 1 0 = 2 = WQCA
// 0 1 0 0 = 4 = BKCA
// 1 0 0 0 = 8 = BQCA
// 0 0 0 0 = 0 = no castling
// castlePerm = the sum of the above values

typedef struct{
    int move; // the move made
    int castlePerm; // Castle permissions
    int enPas; // En passant square
    int fiftyMove; // 50-move rule counter
    U64 posKey; // Unique key for each position
} S_UNDO;

typedef struct{
    int pieces[BRD_SQ_NUM];
    U64 pawns[3]; // 3 bitboards for white, black and both
    int KingSq[2]; // King square for white and black

    int side; // which side to move, white or black
    int enPas; // En passant square
    int FiftyMove; // 50-move rule
    int ply; 

    int historyPly; // How many moves have been played

    int castlePerm; // Castling permissions

    U64 posKey; // Unique key for each position

    int pceNum[13]; // Number of pieces on the board

    int bigPceNum[3]; // Number of non-pawn pieces on the board 
    int majPceNum[3]; // Number of major pieces on the board e.g. rooks and queens
    int minPceNum[3]; // Number of minor pieces on the board e.g. knights and bishops

    S_UNDO history[MaxGameMoves]; // Array of undo structs

    // Piece list
    // 13 piece types, 10 pieces of each type
    // each int represents a square
    /* e.g. P_list[wP][0] = 34 means the first white pawn is on square 34*/
    
    // initially, all pieces are on the offboard square
    // when a piece is placed on the board, the corresponding square is updated
    // when a piece is captured, the corresponding square is set to offboard

    /* why there are 10 pieces?

        In the most extreme case, 8 pawns reach the baseline and all be promoted to Rock.
        8 transfromed Rock + 2 original Rock = 10 Rocks*/
    int P_list[13][10]; 
    
} S_BOARD;

/* MACROS */
#define FR2Sq(F,R) ( (21 + (F) ) + ( (R) * 10 ) ) // Converts file and rank to square
#define SQ64(sq120) Sq120_To_Sq64[sq120] // Converts 120 square to 64 square
#define POP(b) PopBit(b) // Pops the least significant bit
#define CNT(b) CountBits(b) // Counts the number of bits in a bitboard
#define CLRBIT(bb, sq) ((bb) &= ClearMask[(sq)]) // Clears a bit in a bitboard
#define SETBIT(bb, sq) ((bb) |= SetMask[(sq)]) // Sets a bit in a bitboard

/* GLOBALS */
extern int Sq120_To_Sq64[BRD_SQ_NUM]; // Array to convert 120 square to 64 square
extern int Sq64_To_Sq120[64]; // Array to convert 64 square to 120 square
extern U64 SetMask[64]; // Set mask for each square
extern U64 ClearMask[64]; // Clear mask for each square

/* FUNCTIONS */
// init.c
extern void AllInit(); // Initialize everything
extern void InitSq120To64(); // Initialize the square conversion arrays
extern void InitBitMasks(); // Initialize the bit masks

//bitboard.c
extern void Print_BitBoard(U64 bitboard); // Prints a bitboard
extern int PopBit(U64 *bitboard); // Pops the least significant bit
extern int CountBits(U64 bitboard);


#endif 