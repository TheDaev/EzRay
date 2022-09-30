#pragma once

#include <raylib.h>

class Entity {
	public:
		const char* type;
		float x, y;
		float radius;
		float width, height;
		Color color;
		void draw();
};