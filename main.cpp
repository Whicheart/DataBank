#include <iostream>
#include <string>
#include <nlohmann/json.hpp>
#include <fstream>

using json = nlohmann::json;
using string = std::string;

class Artifact
{
private:
	int m_id;
	string m_SetName;
	string m_Position;

	string m_mainTag;
	float m_mainTagVaule;

	string m_normalTag_1;
	float m_normalTag_1_Value;
	string m_normalTag_2;
	float m_normalTag_2_Value;
	string m_normalTag_3;
	float m_normalTag_3_Value;
	string m_normalTag_4;
	float m_normalTag_4_Value;

	int m_level;
	int m_star;
public:
	/*Artifact(int _id, string& _setname, string& _position,
		string& _maintag, float& _maintagvalue,
		string& _normaltag1, float& _normaltagvalue1,
		string& _normaltag2, float& _normaltagvalue2,
		string& _normaltag3, float& _normaltagvalue3,
		string& _normaltag4, float& _normaltagvalue4,
		int& _level, int& _star)
		:m_id(_id), m_SetName(_setname), m_Position(_position),
		m_mainTag(_maintag), m_mainTagVaule(_maintagvalue),
		m_normalTag_1(_normaltag1), m_normalTag_1_Value(_normaltagvalue1),
		m_normalTag_2(_normaltag2), m_normalTag_2_Value(_normaltagvalue2),
		m_normalTag_3(_normaltag3), m_normalTag_3_Value(_normaltagvalue3),
		m_normalTag_4(_normaltag4), m_normalTag_4_Value(_normaltagvalue4),
		m_level(_level), m_star(_star) {}

	Artifact(int _id, string& _setname, string& _position,
		string& _maintag, float& _maintagvalue,
		string& _normaltag1, float& _normaltagvalue1,
		string& _normaltag2, float& _normaltagvalue2,
		string& _normaltag3, float& _normaltagvalue3,
		int& _level, int& _star)
		:m_id(_id), m_SetName(_setname), m_Position(_position),
		m_mainTag(_maintag), m_mainTagVaule(_maintagvalue),
		m_normalTag_1(_normaltag1), m_normalTag_1_Value(_normaltagvalue1),
		m_normalTag_2(_normaltag2), m_normalTag_2_Value(_normaltagvalue2),
		m_normalTag_3(_normaltag3), m_normalTag_3_Value(_normaltagvalue3),
		m_normalTag_4("Null"), m_normalTag_4_Value(0),
		m_level(_level), m_star(_star) {}*/

	Artifact(int _id, string _setname, string _position,
		string _maintag, float _maintagvalue,
		string _normaltag1, float _normaltagvalue1,
		string _normaltag2, float _normaltagvalue2,
		string _normaltag3, float _normaltagvalue3,
		string _normaltag4, float _normaltagvalue4,
		int _level, int _star)
		:m_id(_id), m_SetName(_setname), m_Position(_position),
		m_mainTag(_maintag), m_mainTagVaule(_maintagvalue),
		m_normalTag_1(_normaltag1), m_normalTag_1_Value(_normaltagvalue1),
		m_normalTag_2(_normaltag2), m_normalTag_2_Value(_normaltagvalue2),
		m_normalTag_3(_normaltag3), m_normalTag_3_Value(_normaltagvalue3),
		m_normalTag_4(_normaltag4), m_normalTag_4_Value(_normaltagvalue4),
		m_level(_level), m_star(_star) {}

	void print()
	{
		std::cout << "序号:" << m_id << std::endl;
		std::cout << "套装：" << m_SetName << std::endl;
		std::cout << "部位：" << m_Position << std::endl;
		std::cout << "主词条：" << m_mainTag << std::endl;
		std::cout << "   ：" << m_mainTagVaule << std::endl;
		std::cout << "副词条1：" << m_normalTag_1 << std::endl;
		std::cout << "   ：" << m_normalTag_1_Value << std::endl;
		std::cout << "副词条2：" << m_normalTag_2 << std::endl;
		std::cout << "   ：" << m_normalTag_2_Value << std::endl;
		std::cout << "副词条3：" << m_normalTag_3 << std::endl;
		std::cout << "   ：" << m_normalTag_3_Value << std::endl;
		std::cout << "副词条4：" << m_normalTag_4 << std::endl;
		std::cout << "   ：" << m_normalTag_4_Value << std::endl;
		std::cout << "等级：" << m_level << std::endl;
		std::cout << "星级：" << m_star << std::endl;
	}
};

void PrintArtifact(Artifact& artifact)
{
	artifact.print();
}

int main()
{
	std::ifstream i("C:\\Users\\Administrator\\Desktop\\Yas\\mona.json");
	json j;
	i >> j;
	i.close();

	std::cout << "Version: " << j["version"] << std::endl;
	std::cout << std::endl;

	Artifact test(1, "a", "b", "nihao", 123.0f, "wobuhao", 234.0f, "shim", 345.0f, "hauso", 456.0f, "ashd", 567.0f, 20, 5);
	PrintArtifact(test);

	/*for (const auto& flower : j["flower"])
	{
		Artifact abc(1, flower["setName"], flower["position"], flower["mainTag"]["name"], flower["mainTag"]["value"],
			flower["normalTags"], flower["normalTags"]["value"], flower["normalTags"], flower["normalTags"]["value"],
			flower["normalTags"], flower["normalTags"]["value"], flower["normalTags"], flower["normalTags"]["value"],
			flower["level"], flower["star"]);
		PrintArtifact(abc);
	}*/


	/*for (const auto& flower : j["flower"])
	{
		std::cout << "套装: " << flower["setName"] << std::endl;
		std::cout << "部位: " << flower["position"] << std::endl;

		std::cout << "主词条名称: " << flower["mainTag"]["name"] << std::endl;
		std::cout << "数值: " << flower["mainTag"]["value"] << std::endl;

		std::cout << "副词条:" << std::endl;
		for (const auto& tag : flower["normalTags"]) {
			std::cout << "  名称: " << tag["name"] << ", 数值: " << tag["value"] << std::endl;
		}

		std::cout << "等级: " << flower["level"] << std::endl;
		std::cout << "星级: " << flower["star"] << std::endl;
		std::cout << "属于: " << flower["equip"] << std::endl;
		std::cout << std::endl;
	}*/

	/*for (const auto& feather : j["feather"]) {
		std::cout << "套装: " << feather["setName"] << std::endl;
		std::cout << "部位: " << feather["position"] << std::endl;


		std::cout << "主词条名称: " << feather["mainTag"]["name"] << std::endl;
		std::cout << "数值: " << feather["mainTag"]["value"] << std::endl;


		std::cout << "副词条:" << std::endl;
		for (const auto& tag : feather["normalTags"]) {
			std::cout << "  名称: " << tag["name"] << ", 数值: " << tag["value"] << std::endl;
		}


		std::cout << "等级: " << feather["level"] << std::endl;
		std::cout << "星级: " << feather["star"] << std::endl;
		std::cout << std::endl;
	}

	for (const auto& sand : j["sand"]) {
		std::cout << "套装: " << sand["setName"] << std::endl;
		std::cout << "部位: " << sand["position"] << std::endl;


		std::cout << "主词条名称: " << sand["mainTag"]["name"] << std::endl;
		std::cout << "数值: " << sand["mainTag"]["value"] << std::endl;


		std::cout << "副词条:" << std::endl;
		for (const auto& tag : sand["normalTags"]) {
			std::cout << "  名称: " << tag["name"] << ", 数值: " << tag["value"] << std::endl;
		}


		std::cout << "等级: " << sand["level"] << std::endl;
		std::cout << "星级: " << sand["star"] << std::endl;
		std::cout << std::endl;
	}

	for (const auto& cup : j["cup"]) {
		std::cout << "套装: " << cup["setName"] << std::endl;
		std::cout << "部位: " << cup["position"] << std::endl;


		std::cout << "主词条名称: " << cup["mainTag"]["name"] << std::endl;
		std::cout << "数值: " << cup["mainTag"]["value"] << std::endl;


		std::cout << "副词条:" << std::endl;
		for (const auto& tag : cup["normalTags"]) {
			std::cout << "  名称: " << tag["name"] << ", 数值: " << tag["value"] << std::endl;
		}


		std::cout << "等级: " << cup["level"] << std::endl;
		std::cout << "星级: " << cup["star"] << std::endl;
		std::cout << std::endl;
	}

	for (const auto& head : j["head"]) {
		std::cout << "套装: " << head["setName"] << std::endl;
		std::cout << "部位: " << head["position"] << std::endl;


		std::cout << "主词条名称: " << head["mainTag"]["name"] << std::endl;
		std::cout << "数值: " << head["mainTag"]["value"] << std::endl;


		std::cout << "副词条:" << std::endl;
		for (const auto& tag : head["normalTags"]) {
			std::cout << "  名称: " << tag["name"] << ", 数值: " << tag["value"] << std::endl;
		}


		std::cout << "等级: " << head["level"] << std::endl;
		std::cout << "星级: " << head["star"] << std::endl;
		std::cout << std::endl;
	}*/

	std::cin.get();
	return 0;
}
