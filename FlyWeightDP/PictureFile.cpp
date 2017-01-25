#include "stdafx.h"
#include "PictureFile.h"

PictureFile::PictureFile(string name, BodyType body, LensType lens, LightType light) :name(name)
{
	MetaPool *meta_pool = MetaPool::GetSingleton();
	meta = meta_pool->MakeMeta(body, lens, light);

}

void PictureFile::View() const
{
	cout << "�����̸�: " << name << endl;
	meta->View();
}

