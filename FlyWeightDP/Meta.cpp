#include "stdafx.h"
#include "Meta.h"

const string Meta::bodyname[EH_BC + 1] = { "EH_BA", "EH_BB", "EH_BC" };
const string Meta::lensname[EH_L3 + 1] = { "EH_L1", "EH_L2", "EH_L3" };
const string Meta::lightname[LT_LAMP + 1] = { "∏º¿Ω", "»Â∏≤", "∑•«¡" };

Meta::Meta(BodyType body, LensType lens, LightType light) :
	body(body), lens(lens), light(light)
{

}

BodyType Meta::GetBodyType()const { return body; }
LensType Meta::GetLensType()const { return lens; }
LightType Meta::GetLightType()const { return light; }
bool Meta::IsEqual(BodyType _body, LensType _lens, LightType _light)
{
	return (body == _body) && (lens == _lens) && (light == _light);

}

void Meta::View()const
{
	cout << "Body: " << bodyname[body];
	cout << "Lens: " << lensname[lens];
	cout << "Light: " << lightname[light] << endl;
}