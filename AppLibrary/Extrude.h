#pragma once
#include "AppFeaturesOpsExports.h"
#include "Feature.h"
#include <iostream>
#include <fstream>


void ReadInExtrude(std::ifstream& streamObject);

class APPLIBRARY_API IExtrude 
{
public:
	virtual std::string GetVersion() = 0;

};

namespace Application
{
	class APPLIBRARY_API Extrude : public Application::Feature, public IExtrude
	{
	public:
		Extrude() = delete;
		Extrude(std::string distance, std::string targetFace, std::string vectorObject, std::string isAddition, std::string isSubtraction, int m_guid);
		std::string GetVersion() override;

		const std::string& GetDistance()
		{
			return m_distance;
		};
		const std::string& GetTargetFace()
		{
			return m_targetFace;
		};
		const std::string& GetVectorObject()
		{
			return m_vectorObject;
		};
		const std::string& GetIsAddition()
		{
			return m_isAddition;
		};
		const std::string& GetIsSubtraction()
		{
			return m_isSubtraction;
		};

	private:
		std::string m_distance;
		std::string m_targetFace;
		std::string m_vectorObject;
		std::string m_isAddition;
		std::string m_isSubtraction;
	};
}





