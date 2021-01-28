#include "Board.h" 
#include "Physics.h"

void DrawHorizontal()
{
	for (int i = 0; i<(SIZEHOR+2); i++)
        	{
                printf("_");
        	}
	printf("\n\n");
}

void DrawRows(pos position, int index)
{
	printf("|");
		// look for a matching y coordinate and then search for the correct x to insert the Character representing the ball
		// Coordinate system is x from left to right, y from top to bottom
	if (index == position.y)
	{
		for (int j = 0; j<position.x;j++)
		{
			printf(" ");
		}
		printf("O");
		for(int j = 0; j< (SIZEHOR - position.x)-1; j++)
		{
			printf(" ");
		}
	}
	else
	{
		for(int j = 0; j<SIZEHOR; j++)
		{
		printf(" ");
		}
	}

		printf("|\n");

}

int DrawBoard(pos position)
{
	DrawHorizontal();
	for (int i = 0; i<(SIZEVERT-1); i++)
	{
		DrawRows(position, i);
	}
	DrawRows(position,SIZEVERT);
	DrawHorizontal();
}

//void SetPositions
