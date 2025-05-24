#include "Block.h"

Block::Block(int stick_rate) {
	int shape;
	int i;
	i=rand()%100;
	if(i<=stick_rate)		//막대기 나올확률 계산
		return;				//막대기 모양으로 리턴

	shape = (rand()%6)+1;		//shape에는 1~6의 값이 들어감

    block_shape = shape;
}

int Block::get_x() {
    return block_x;
}

int Block::get_y() {
    return block_y;
}

int Block::get_shape() {
    return block_shape;
}

int Block::get_angle() {
    return block_angle;
}

char (*Block::get_block())[4] {
    return block[block_shape][block_angle];
}

int Block::get_number(int i, int j) {
    return block[block_shape][block_angle][i][j];
}

void Block::rotate(int angle) {
    block_angle = angle;
}

void Block::movetoxy(int x, int y) {
    block_x = x;
    block_y = y;
}

void Block::move_left() {
    block_x--;
}

void Block::move_right() {
    block_x++;
}
void Block::move_down() {
    block_y++;
}

void Block::move_up() {
    block_y--;
}

int Block::start() {
    block_x = 5;
    block_y = -3;
    block_angle = 0;

    return 0;
}




char Block::block[7][4][4][4] = {
	//막대모양
	1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,	1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,	1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,	1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,

	//네모모양
	1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,	1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,	1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,	1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,

	//'ㅓ' 모양
	0,1,0,0,1,1,0,0,0,1,0,0,0,0,0,0,	1,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,	1,0,0,0,1,1,0,0,1,0,0,0,0,0,0,0,	0,1,0,0,1,1,1,0,0,0,0,0,0,0,0,0,

	//'ㄱ'모양
	1,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,	1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,	1,0,0,0,1,0,0,0,1,1,0,0,0,0,0,0,	0,0,1,0,1,1,1,0,0,0,0,0,0,0,0,0,

	//'ㄴ' 모양
	1,1,0,0,1,0,0,0,1,0,0,0,0,0,0,0,	1,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,	0,1,0,0,0,1,0,0,1,1,0,0,0,0,0,0,	1,1,1,0,0,0,1,0,0,0,0,0,0,0,0,0,

	//'Z' 모양
	1,1,0,0,0,1,1,0,0,0,0,0,0,0,0,0,	0,1,0,0,1,1,0,0,1,0,0,0,0,0,0,0,	1,1,0,0,0,1,1,0,0,0,0,0,0,0,0,0,	0,1,0,0,1,1,0,0,1,0,0,0,0,0,0,0,

	//'S' 모양
	0,1,1,0,1,1,0,0,0,0,0,0,0,0,0,0,	1,0,0,0,1,1,0,0,0,1,0,0,0,0,0,0,	0,1,1,0,1,1,0,0,0,0,0,0,0,0,0,0,	1,0,0,0,1,1,0,0,0,1,0,0,0,0,0,0

};