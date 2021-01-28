#ifndef __Physics__h
#define __Physics__h

typedef struct position{
	int x;
	int y;
}pos;

typedef struct velocity{
	int vx;
	int vy;
}vel;

void reflectCollision(pos*, vel*);
#endif
