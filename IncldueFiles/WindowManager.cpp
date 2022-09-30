#include "WindowManager.h"


int Window::a() {

	InitWindow(WindowWidth, WindowHeight, windowTitle);
	SetTargetFPS(60);

	while (!WindowShouldClose()) {
		
		BeginDrawing();

		ClearBackground(windowBufferCollor);

		code();

		EndDrawing();

	}

	CloseWindow();
	return 0;

}

void Window::code()
{
	DrawRectangle(200, 200, 50, 50, RED);
}



void Window::init(int WindowWidth, int WindowHeight, Color windowBufferCollor, const char* windowTitle){
	this->windowBufferCollor = windowBufferCollor;
	this->WindowHeight = WindowHeight;
	this->WindowWidth = WindowWidth;
	this->windowTitle = windowTitle;
}

void Window::Run(){
	a();
}
