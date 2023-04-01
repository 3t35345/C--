#include <iostream>
using namespace std;

int main(){
    char ANSWERS[] = {'A', 'B', 'C', 'A', 'A', 'B', 'A', 'C'};
    int ANSWERS_list_len = sizeof(ANSWERS)/sizeof(ANSWERS[0]);
    const char MODEL_ANSWER[]= {'A', 'B', 'C', 'D', 'A', 'B', 'D', 'C'};
    
    // cout << sizeof(MODEL_ANSWER);
    int NUMBER = 0;
    int SCORE = 0;

    for(int i = 0; i < ANSWERS_list_len; i++){
        if (ANSWERS[i] != 'A' && ANSWERS[i] != 'B' && ANSWERS[i] != 'C' && ANSWERS[i] != 'D'){
            cout << "incomplete" << endl;
            break;
        }
        NUMBER++;
        if (ANSWERS[i] == MODEL_ANSWER[i]){
            SCORE += 1;
        }
        
    }
    cout << "Final score: " << SCORE << endl;
    return 0;
}