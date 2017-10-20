#pragma once

#include "Arcball.h"

class MyArcball
{
public:
	MyArcball(float w, float h);

	ArcBallT    ArcBall;
	Matrix4fT   Transform;
	Matrix3fT   LastRot;
	Matrix3fT   ThisRot;
	Point2fT    MousePt;
	float		mRadius;
	Point2fT	mLastMousePos;
	int			button_status;
	float translate_x, translate_y;
};

