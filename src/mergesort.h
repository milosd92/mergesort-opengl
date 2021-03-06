//
// Created by danilov on 25.6.16..
//

#ifndef MERGESORT_OPENGL_MERGESORT_H
#define MERGESORT_OPENGL_MERGESORT_H

#include "pillar.h"
#include "canvas.h"
#include "sound.h"

#include <vector>


class Mergesort
{
public:
    Pillar *currentPillar;
    bool drawCurrentPillar = false;

    Mergesort(Canvas *canvas, const std::vector<Pillar*> &pillars, Sound *soundEffect)
    {
        this->canvas = canvas;
        this->pillars = pillars;
        this->soundEffect = soundEffect;
    };

    void draw(void);
    void drawPillars(void);

    virtual ~Mergesort() {};

    std::vector<Pillar*> sort();
protected:
    std::vector<Pillar*> merge(const std::vector<Pillar*> &left, const std::vector<Pillar*> &right);
    std::vector<Pillar*> mergeSort(const std::vector<Pillar*> &pillars);

private:
    Canvas *canvas;
    std::vector<Pillar*> pillars;

    Sound *soundEffect;
};

#endif //MERGESORT_OPENGL_MERGESORT_H
