#include "Emoji.h"
#include "std_lib_facilities.h"

Face::Face(Point c, int r):
    center{c},
    radius{r}
{}

void Face::draw(AnimationWindow& win){
    win.draw_circle(center, radius, Color::yellow);
}

EmptyFace::EmptyFace(Point c, int r):
    Face{c,r}
{}

void EmptyFace::draw(AnimationWindow& win){
    Face::draw(win);
    win.draw_circle(left_eye, eyeSize, Color::white);
    win.draw_circle(right_eye, eyeSize, Color::white);
    win.draw_circle(left_eye, pupil, Color::black);
    win.draw_circle(right_eye, pupil, Color::black);
}

SadFace::SadFace(Point c, int r):
    EmptyFace{c,r}
{}

void SadFace::draw(AnimationWindow& win){
    Face::draw(win);
    EmptyFace::draw(win);
    win.draw_arc(mouth, mouthWidth, mouthHight, start, end, Color::black);
}

SurprisedFace::SurprisedFace(Point c, int r):
    SurprisedFace{c,r}
{}

void SurprisedFace::draw(AnimationWindow& win){
    Face::draw(win);
    EmptyFace::draw(win);
    win.draw_arc(mouth, mouthWidth, mouthHight, start, end, Color::black);
}