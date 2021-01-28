#include "Physics.h"
#include "Board.h"

void reflectCollision(pos*  position, vel* velocity)
{
		// invert the x velocity in case the ball would hit the side wall
		if(((position->x >= SIZEHOR-1) && (velocity->vx > 0)) || ((position->x <= 1) && (velocity->vx <0)))
		{
			velocity->vx = -1 * (velocity->vx);
		}

		// invert the y velocity in case the ball would hit the top || bottom wall
		if(((position->y >= SIZEVERT) && (velocity->vy > 0)) || ((position->y <= 0) && (velocity->vy <0)))
                        velocity->vy = -1 * (velocity->vy);
}
