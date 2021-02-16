#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    // 사용자가 가위바위보 게임을 질때까지..
    // c언어는 값이 0 false
    // 0이 아닌 모든 값이 true

    // 100명주식... 그중.. 1명만.. 돈을따.. 99명 잃는 사람...

    int seo = 1;
    // 1 가위 2 바위 3 보
    int select = 0;
    int compu_select = 0;

    int win = 0;
    int lose = 0;
    int draw = 0;

    while(seo){
        printf("뭐 낼래?\n");
        scanf("%d",&select);
        
        srand((int)time(NULL));
        compu_select = (rand()%3) + 1;

        // 1 번
        // 1 2 3
        if(select == 1){
            if(compu_select == 1){
                draw++;
                printf("당신의 선택은 가위선택, 컴퓨터도 가위 선택\n");
            }else if(compu_select == 2){
                lose++;
                seo = 0;
                printf("당신의 선택은 가위선택, 컴퓨터도 바위 선택\n");
            }else if(compu_select == 3){
                win++;
                printf("당신의 선택은 가위선택, 컴퓨터도 보 선택\n");
            }
        }
    }
    printf("게임의 결과 %d승%d무%d패\n",win,draw,lose);
    
}