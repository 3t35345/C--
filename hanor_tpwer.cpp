#include <iostream>
using namespace std;

int steps = 0;
void hanoi_tower(char from, char via, char to, int num);

int main(){
    int num = 0;
    cin >> num;
    char a = 'A', b = 'B', c = ' C';

    hanoi_tower(a,b,c,num);
    cout << steps << endl;
    return 0;
}

void hanoi_tower(char from, char via, char to, int num){
    if(num == 1){
        cout << "from " << from << " to " << to << endl;
        steps++;
    }else{
        hanoi_tower(from, to, via, num-1);
        cout << "from " << from << " to " << to << endl;
        steps++;
        hanoi_tower(via, from, to, num-1);
    }

}