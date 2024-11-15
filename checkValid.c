#include <stdio.h>

user[6][7];
int main(void) {
    user[3][6]=3;
int id=0;
    scanf("%d",&id);
    for(int i=0;i<6;i++) {
        if (user[i][6]==id){
            return 1;
        }
    }
    return 0;
}