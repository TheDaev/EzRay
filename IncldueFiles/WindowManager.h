#pragma once

#include <raylib.h>

class Window {
	private:
		int WindowWidth, WindowHeight; Color windowBufferCollor; const char* windowTitle;
		int a();
	public:
		void code();
		void init(int WindowWidth, int WindowHeight, Color windowBufferCollor, const char* windowTitle);
		void Run();
};
//class Premade {
//	private:
//		Premade();
//	public:
//		void Run();
//};
