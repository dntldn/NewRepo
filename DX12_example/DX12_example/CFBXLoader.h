#pragma once
#include "fbxsdk.h"

namespace FBX
{
	class CFBXLoader
	{
	private:
		FbxManager* m_pfbxmanager;
		FbxIOSettings* m_pIOsettings;
		FbxImporter* m_pImporter;
		FbxScene* m_pFbxScene;

		std::vector<FbxNode> mesh;

		void init();
		void destroy();
	public:
		HRESULT FBXLoad(std::string FBXfileName);

	};
}