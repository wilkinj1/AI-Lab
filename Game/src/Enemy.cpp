#include "Enemy.h"
#include "Cube.h"

Enemy::~Enemy()
{
  delete _enemyCube;
  _enemyCube = nullptr;
}

void Enemy::Initialize(Graphics *graphics)
{
  _enemyCube = new Cube();
  _enemyCube->Initialize(graphics);

  _transform.scale = Vector3(0.5f, 0.5f, 0.5f);
}

void Enemy::Update(float dt)
{
  // Position the enemy cube wherever the enemy is.
  _enemyCube->GetTransform().position = _transform.position;
  _enemyCube->GetTransform().scale = _transform.scale;
}

void Enemy::Draw(Graphics *graphics, Matrix4x4 relativeTo, float dt)
{
  _enemyCube->Draw(graphics, relativeTo, dt);
}