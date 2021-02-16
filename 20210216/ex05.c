#include <stdio.h>
typedef struct
{
    int xpos;
    int ypos;
} Point;
void showPoint(Point pos){
    printf("pos.xpos = %d, pos.ypos =%d", pos.xpos, pos.ypos);
}
Point makePoint(){
    Point pos;
    printf("xpos = ");  scanf("%d",&pos.xpos);
    printf("ypos = ");  scanf("%d",&pos.ypos);
    return pos;
}
int main(){
    Point cPos1 = makePoint();
    Point cPos2 = makePoint();
    Point cPos3 = makePoint();
    showPoint(cPos1);
    showPoint(cPos2);
    showPoint(cPos3);
    return 0;
}
