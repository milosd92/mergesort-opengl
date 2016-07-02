//
// Created by danilov on 2.7.16..
//

#ifndef MERGESORT_OPENGL_CANVAS_H
#define MERGESORT_OPENGL_CANVAS_H


#include <GL/glew.h>
#include "window.h"

class Canvas
{
public:
    Canvas(Window *window)
    {
        this->window = window;
        this->setCanvasRanges(0, 0, this->window->getWidth(), this->window->getHeight());
    }

    virtual ~Canvas();
protected:
    void setCanvasRanges(GLint x, GLint y, GLsizei width, GLsizei height)
private:
    Window *window;
};


#endif //MERGESORT_OPENGL_CANVAS_H