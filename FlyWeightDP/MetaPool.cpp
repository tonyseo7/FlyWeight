#include "stdafx.h"
#include "MetaPool.h"

MetaPool MetaPool::singleton;
MetaPool::MetaPool() {}

MetaPool *MetaPool::GetSingleton()
{
	return &singleton;
}

MetaPool::~MetaPool(void)
{
	MIter seek = metas.begin();
	MIter end = metas.end();
	Meta *meta = 0;

	for (; seek != end; ++seek)
	{
		meta = (*seek);
		delete meta;
	}
}


Meta *MetaPool::MakeMeta(BodyType body, LensType lens, LightType light)
{
	MIter seek = metas.begin();
	MIter end = metas.end();
	Meta *meta = 0;

	for (; seek != end; ++seek)
	{
		meta = (*seek);
		if (meta->IsEqual(body, lens, light))
		{
			return meta;
		}
	}

	meta = new Meta(body, lens, light);

	metas.push_back(meta);

	return meta;
}