#pragma once
#include<glm.hpp>
using namespace glm;

#include"Const.h"
#include"Transform.h"
#include"PublicStruct.h"


//����
class Bounding
{
protected:
	
public:
	virtual void Init(MeshData& meshData) = 0;		//��ʼ��
	virtual void UpdatePos(Transform& trans) = 0;			//���ŵ�ǰobject��������ƽ����ת
};

class BoundingBox :public Bounding
{
protected:
	vec3 minPos;
	vec3 maxPos;


public:
	BoundingBox()
	{
		maxPos = vec3(float(-M_INFINITE), float(-M_INFINITE), float(-M_INFINITE));
		minPos = vec3(float(M_INFINITE), float(M_INFINITE), float(M_INFINITE));
	}

	void UpdatePos(Transform& trans) override;
	void Init(MeshData& meshData) override;

};

//class BoundingSphere:public Bounding
//{
//
//};