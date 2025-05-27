#pragma once
#include "Stages.h"
#include "Block.h"
#include "Printer.h"
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <Windows.h>

class Game {
    private:
        int level;
        int score;
        int lines;
        int i;
	    int is_gameover=0;
        char keytemp;
        char total_block[21][14];
        Stages* stages;
        Printer* printer;
        Block* curr_block;
        Block* next_block;
        Block* keeped_block;
    public:
        Game();
        void run();
        int init();
        int init_Reversed();    //거꾸로 나라 초기화하는 함수

        int input_data();

        int move_block();
        int move_block_Reversed();      //거꾸로 나라의 블록 움직임을 나타내는 추가된 함수

        int strike_check();
        int strike_check_Reversed();        //거꾸로 나라 전용 충돌 감지 함수 거의 strike_check함수와 비슷하지만 추가된 내용 블록의 y좌표가 0보다 작아도 충돌로 가정한다는 내용이 추가되었습니다

        int merge_block();
        int check_full_line();
        int rotate();
        int keep();                         // called when 'K' pressed -> keep current block

        bool isReverseWorld(int level);     //거꾸로 나라인지 여부를 판단하는 함수로 신규 추가됨
    
};
