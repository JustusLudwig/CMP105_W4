#pragma once
#include "Framework/GameObject.h"

class Enemy : public GameObject
{
public:
	Enemy();
	~Enemy();

	void handleInput(float dt);
};

