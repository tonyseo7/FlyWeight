#pragma once
#include "common.h"

class Meta
{
public:
	enum BodyType { EH_BA, EH_BB, EH_BC };
	enum LensType { EH_L1, EH_L2, EH_L3 };
	enum LightType { LT_CLEAR, LT_CLOUDY, LT_LAMP };

private:
	const BodyType body;
	const LensType lens;
	const LightType light;
	static const string bodyname[EH_BC + 1];
	static const string lensname[EH_L3 + 1];
	static const string lightname[LT_LAMP + 1];

public:
	Meta(BodyType body, LensType lens, LightType light);
	BodyType GetBodyType() const;
	LensType GetLensType() const;
	LightType GetLightType() const;
	bool IsEqual(BodyType _body, LensType _lens, LightType _light);
	void View() const;
};

typedef Meta::BodyType BodyType;
typedef Meta::LensType LensType;
typedef Meta::LightType LightType;
