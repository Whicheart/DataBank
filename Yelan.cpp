#include <iostream>
#include <string>

using string = std::string;

//class CharacterBase
//{
//protected:
//	string m_Name;
//	int m_Level;
//	int m_Alevel;
//	int m_Elevel;
//	int m_Qlevel;
//	int m_Constellation;
//};

class Yelan/* : public CharacterBase*/
{
private:
	string m_Name;
	int m_Level;
	int m_Alevel;
	int m_Elevel;
	int m_Qlevel;
	int m_Constellation;
public:
	Yelan(int level, int alevel, int elevel, int qlevel, int constellation)
		:m_Name("Ò¹À¼"), m_Level(level), m_Alevel(alevel), m_Elevel(elevel), m_Qlevel(qlevel), m_Constellation(constellation) {}
	
	/*void CheckConstellation()
	{
		if (m_Constellation >= 3) { m_Qlevel += 3; }
		if (m_Constellation == 6) { m_Elevel += 3; }
	}*/
	
	float a1[13] = { 40.7f,44.0f,47.3f,52.0f,55.3f,59.13f,64.33f,69.53f,74.73f,80.41f,86.09f,91.76f,97.44f };
	float a2[13] = { 39.0f,42.2f,45.4f,49.9f,53.1f,56.75f,61.74f,66.74f,71.73f,77.18f,82.63f,88.08f,93.52f };
	float a3[13] = { 51.6f,55.8f,60.0f,66.0f,70.2f,75.00f,81.60f,88.20f,94.80f,102.0f,109.2f,116.4f,123.6f };
	float a4[13] = { 32.5f,35.2f,37.8f,41.6f,44.2f,47.25f,51.41f,55.57f,59.72f,64.26f,68.80f,73.33f,77.87f };
	float charged1[13] = { 43.9f,47.4f,51.0f,56.1f,59.7f,63.75f,69.36f,74.97f,80.58f,86.70f,92.82f,98.94f,105.06f };
	float charged2[13] = { 124.0f,133.0f,143.0f,155.0f,164.0f,173.6f,186.0f,198.4f,210.8f,223.2f,235.6f,248.0f,263.5f };
	float charged3[13] = { 11.58f,12.44f,13.31f,14.47f,15.34f,16.21f,17.36f,18.52f,19.68f,20.84f,21.99f,23.15f,24.60f };
	float plunging1[13] = { 56.8f,61.5f,66.1f,72.7f,77.3f,82.6f,89.87f,97.14f,104.41f,112.34f,120.27f,128.2f,136.12f };
	float plunging2[13] = { 114.0f,123.0f,132.0f,145.0f,155.0f,165.16f,179.7f,194.23f,208.77f,224.62f,240.48f,256.34f,272.19f };
	float plunging3[13] = { 142.0f,153.0f,165.0f,182.0f,193.0f,206.3f,224.45f,242.61f,260.76f,280.57f,300.37f,320.18f,339.98f };
	float e[13] = { 22.6f,24.3f,26.0f,28.3f,30.0f,31.66f,33.92f,36.18f,38.44f,40.7f,42.97f,45.23f,48.05f };
	float q1[13] = { 7.31f,7.86f,8.4f,9.13f,9.68f,10.23f,10.96f,11.69f,12.42f,13.15f,13.89f,14.62f,15.53f };
	float q2[13] = { 4.87f,5.24f,5.6f,6.19f,6.46f,6.82f,7.31f,7.80f,8.28f,8.77f,9.26f,9.74f,10.35f };

	float aRate1 = a1[m_Alevel - 1];
	float aRate2 = a2[m_Alevel - 1];
	float aRate3 = a3[m_Alevel - 1];
	float aRate4 = a4[m_Alevel - 1];
	float chargedRate1 = charged1[m_Alevel - 1];
	float chargedRate2 = charged2[m_Alevel - 1];
	float chargedRate3 = charged3[m_Alevel - 1];
	float plungingRate1 = plunging1[m_Alevel - 1];
	float plungingRate2 = plunging2[m_Alevel - 1];
	float plungingRate3 = plunging3[m_Alevel - 1];
	float eRate = e[m_Elevel - 1];
	float qRate1 = q1[m_Qlevel - 1];
	float qRate2 = q2[m_Qlevel - 1];

	void getter()
	{
		std::cout << m_Name << std::endl;
		std::cout << m_Level << std::endl;
		std::cout << m_Alevel << std::endl;
		std::cout << m_Elevel << std::endl;
		std::cout << m_Qlevel << std::endl;
		std::cout << m_Constellation << std::endl;
		std::cout << std::endl;
		std::cout << "a:" << std::endl;
		std::cout << aRate1 << std::endl;
		std::cout << aRate2 << std::endl;
		std::cout << aRate3 << std::endl;
		std::cout << aRate4 << std::endl;
		std::cout << chargedRate1 << std::endl;
		std::cout << chargedRate2 << std::endl;
		std::cout << chargedRate3 << std::endl;
		std::cout << plungingRate1 << std::endl;
		std::cout << plungingRate2 << std::endl;
		std::cout << plungingRate3 << std::endl;
		std::cout << std::endl;
		std::cout << "e:" << std::endl;
		std::cout << eRate << std::endl;
		std::cout << std::endl;
		std::cout << "q:" << std::endl;
		std::cout << qRate1 << std::endl;
		std::cout << qRate2 << std::endl;
		std::cout << std::endl;
	}
};


int main()
{
	Yelan yelan(90, 4, 10, 10, 6);
	yelan.getter();
}