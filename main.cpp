#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <nlohmann/json.hpp>
#include <fstream>

class Artifact
{
public:
	std::string SetName;
	std::string Position;
	std::string mainTagName;
	float mainTagValue;
	std::string normalTags;
	int level;
	int star;
	std::string equip;
	int id;
};

int main()
{ 
    std::ifstream i("C:\\Users\\Administrator\\Desktop\\Yas\\mona.json");
    nlohmann::json j;
    i >> j;

    i.close();

    std::cout << "Version: " << j["version"] << std::endl;
    std::cout << std::endl;

    for (const auto& flower : j["flower"]) {
        std::cout << "套装: " << flower["setName"] << std::endl;
        std::cout << "部位: " << flower["position"] << std::endl;

        
        std::cout << "主词条名称: " << flower["mainTag"]["name"] << std::endl;
        std::cout << "数值: " << flower["mainTag"]["value"] << std::endl;

        
        std::cout << "副词条:" << std::endl;
        for (const auto& tag : flower["normalTags"]) {
            std::cout << "  名称: " << tag["name"] << ", 数值: " << tag["value"] << std::endl;
        }

         
        std::cout << "Omit: " << (flower["omit"] ? "true" : "false") << std::endl;
        std::cout << "等级: " << flower["level"] << std::endl;
        std::cout << "星级: " << flower["star"] << std::endl;
        /*std::cout << "属于: " << flower["equip"].get_ref<const std::string&>() << std::endl;*/
        std::cout << std::endl;
    }

    for (const auto& feather : j["feather"]) {
        std::cout << "套装: " << feather["setName"] << std::endl;
        std::cout << "部位: " << feather["position"] << std::endl;


        std::cout << "主词条名称: " << feather["mainTag"]["name"] << std::endl;
        std::cout << "数值: " << feather["mainTag"]["value"] << std::endl;


        std::cout << "副词条:" << std::endl;
        for (const auto& tag : feather["normalTags"]) {
            std::cout << "  名称: " << tag["name"] << ", 数值: " << tag["value"] << std::endl;
        }


        std::cout << "Omit: " << (feather["omit"] ? "true" : "false") << std::endl;
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


        std::cout << "Omit: " << (sand["omit"] ? "true" : "false") << std::endl;
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


        std::cout << "Omit: " << (cup["omit"] ? "true" : "false") << std::endl;
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


        std::cout << "Omit: " << (head["omit"] ? "true" : "false") << std::endl;
        std::cout << "等级: " << head["level"] << std::endl;
        std::cout << "星级: " << head["star"] << std::endl;
        std::cout << std::endl;
    }

	return 0;
}
