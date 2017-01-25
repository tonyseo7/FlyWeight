#pragma once
#include "MetaPool.h"

class PictureFile
{
	const string name;
	Meta *meta;
public:
	PictureFile(string name, BodyType body, LensType lens, LightType light);
	void View()const;
};
