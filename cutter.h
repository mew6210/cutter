#pragma once

#include <iostream>
#include"raylib.h"


class drawParameters {
public:
	int posX = 0;
	int posY = 0;
	int length = 0;
	int height = 0;
	Color color = Color(0, 0, 0);

	drawParameters() = default;

};





class Widget {
public:
	int height = 0;
	int width = 0;

	virtual void draw(drawParameters param)=0;

	Widget() :height(0),width(0){};

};




class Line : public virtual Widget{

public:


	void draw(drawParameters param) override{
		DrawLine(param.posX,
			param.posY,
			param.posX+param.length,
			param.posY+param.height, 
			param.color);
	}

	Line() : Widget() {};


};



