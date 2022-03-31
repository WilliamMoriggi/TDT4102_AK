#pragma once
#include "AnimationWindow.h"
#include "GUI.h"


class MeetingWindow:public AnimationWindow{
private:
public: 
MeetingWindow(int x, int y, int w, int h, const std::string &title)
            : AnimationWindow(x, y, w, h, title){};
static void cb_quit(Fl_Widget*, void* pw);

};