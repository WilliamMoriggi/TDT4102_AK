#pragma once
#include "std_lib_facilities.h"
#include "AnimationWindow.h"

// Abstrakt klasse. Arvende konkrete klasser må implementere funksjonen draw()
// som tegner former i vinduet de skal bli vist i.
class Emoji
{
public:
    virtual void draw(AnimationWindow&) = 0;
    virtual ~Emoji(){}; //destruktør
};

class Face:public Emoji{
    protected:
        Point center;
        int radius;
    public:
        Face(Point c, int r);
        virtual void draw(AnimationWindow&) override = 0;
};

class EmptyFace:public Face{
    protected:
        int eyeSize = 20;
        int distance = 30;
        Point left_eye = {center.x - distance, center.y - distance};
        Point right_eye = {center.x + distance, center.y - distance};
        int pupil = 15;
    public:
        EmptyFace(Point c, int r);
        void draw(AnimationWindow&) override;

};

class SadFace:public EmptyFace{
    protected:
        int start = 0;
        int end = 180;
        Point mouth = {center.x, center.y + radius/3};

    public:
        SadFace(Point c, int r);
        void draw(AnimationWindow&) override;
};

class SurprisedFace: public EmptyFace{
    protected:
        int start = 0;
        int end = 360;
        Point mouth = {center.x, center.y + radius/3};
    public:
        SurprisedFace(Point c, int r);
        void draw(AnimationWindow&) override;
};