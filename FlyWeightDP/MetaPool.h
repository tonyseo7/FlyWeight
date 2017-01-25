#pragma once
#include "Meta.h"
typedef vector<Meta *> Metas;
typedef vector<Meta *>::iterator MIter;

class MetaPool
{
	Metas metas;
	static MetaPool singleton;		//단일개체

public:
	static MetaPool *GetSingleton();
	Meta *MakeMeta(BodyType body, LensType lens, LightType light);

private:
	MetaPool();
	~MetaPool(void);
};
