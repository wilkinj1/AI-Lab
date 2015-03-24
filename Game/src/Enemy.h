#pragma once

#include <GameObject.h>

class Cube;

class Enemy : public GameObject
{
public:
  ~Enemy();

  void Initialize(Graphics *graphics);

  void Update(float dt);
  void Draw(Graphics *graphics, Matrix4x4 relativeTo, float dt);

protected:
  Cube *_enemyCube;
};