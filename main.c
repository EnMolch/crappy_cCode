#include "Board.h"
#include <unistd.h>
#include <stdlib.h>
int SIZEHOR = 60;
int SIZEVERT = 40;

void MainLoop(pos* position, vel* velocity)
{
	position->x = position->x + velocity->vx;
	position->y = position->y + velocity->vy;
	reflectCollision(position, velocity); 
	printf("%d,%d\n", position->x, position->y);
	usleep(8000);
	system("clear");
} 
int main()
{
	pos position = {10,10};
	DrawBoard(position);
	sleep(1);
        vel velocity = {1, 1};
	while(1)
	{
		MainLoop(&position, &velocity);
		DrawBoard(position, velocity);
	}
	return 0;
}
