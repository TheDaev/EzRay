#pragma once

#include "raylib.h"


class Text {
	public:
		const char* text;
		float x;
		float y;
		float fontSize;
		Color color;
		void draw();
};