#pragma once
#include "../Core/Module.h"
#include "../Util/Singleton.h"
#include "../Util/Logger.h"

class AssetManager : public Module, public Singleton<AssetManager>
{
public:
	AssetManager() {};
	~AssetManager() {};

	virtual int Init() override;
	virtual int Shutdown() override;

	void Update();
	void Render();
};