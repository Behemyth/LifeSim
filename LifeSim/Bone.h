#pragma once

#include "BasicIncludes.h"
#include "BoundingBox.h"

class Joint;

class Bone : public Object
{
public:
	Bone(btDiscreteDynamicsWorld*,Joint *,Joint*,glm::vec3,float,float);
	~Bone();
	float height;
private:
	float radius;
	
	Joint* endLeft;
	Joint* endRight;

};

