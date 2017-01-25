#pragma once
#include "Meta.h"
typedef vector<Meta *> Metas;
typedef vector<Meta *>::iterator MIter;

class MetaPool
{
	Metas metas;
	static MetaPool singleton;		//���ϰ�ü

public:
	static MetaPool *GetSingleton();
	Meta *MakeMeta(BodyType body, LensType lens, LightType light);

private:
	MetaPool();
	~MetaPool(void);
};
