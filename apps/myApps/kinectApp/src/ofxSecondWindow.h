#pragma once

#include "ofMain.h"
#include <GLFW/glfw3.h>

class ofxSecondWindow
{
	GLFWwindow *mainWindow, *auxWindow;
    int width, height;
public:
	void setup(const char *name, int xpos, int ypos, int width, int height, bool undecorated);
    void begin();
    void end();
    void show();
    void hide();
    int getWidth() { return width; }
    int getHeight() { return height; }
};

