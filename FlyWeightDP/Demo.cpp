#include "stdafx.h"
#include "PictureFile.h"

void main()
{
	PictureFile *pf = new PictureFile("����", BodyType::EH_BA, LensType::EH_L1, LightType::LT_CLEAR);
	PictureFile *pf2 = new PictureFile("����", BodyType::EH_BA, LensType::EH_L1, LightType::LT_CLEAR);


	pf->View();
	pf2->View();

	delete pf2;
	delete pf;
}