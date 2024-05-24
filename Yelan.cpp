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
	string m_Weapon;
	string m_Elem;

	float a1[15] = { 40.68f,43.99f,47.30f,52.03f,55.34f,59.13f,64.33f,69.53f,74.73f,80.41f,86.09f,91.76f,97.44f,103.11f,108.79f };
	float a2[15] = { 39.04f,42.22f,45.40f,49.94f,53.12f,56.75f,61.74f,66.74f,71.73f,77.18f,82.63f,88.08f,93.52f,98.97f,104.42f };
	float a3[15] = { 51.60f,55.80f,60.00f,66.00f,70.20f,75.00f,81.60f,88.20f,94.80f,102.00f,109.20f,116.40f,123.60f,130.80f,138.00f };
	float a4[15] = { 32.51f,35.15f,37.80f,41.58f,44.23f,47.25f,51.41f,55.57f,59.72f,64.26f,68.80f,73.33f,77.87f,82.40f,86.94f };
	float charged1[15] = { 43.86f,47.43f,51.00f,56.10f,59.67f,63.75f,69.36f,74.97f,80.58f,86.70f,92.82f,98.94f,105.06f,111.18f,117.30f };
	float charged2[15] = { 124.0f,133.3f,142.6f,155.0f,164.3f,173.6f,186.0f,198.4f,210.8f,223.2f,235.6f,248.0f,263.5f,279.0f,294.5f };
	float charged3[15] = { 11.58f,12.44f,13.31f,14.47f,15.34f,16.21f,17.36f,18.52f,19.68f,20.84f,21.99f,23.15f,24.60f,26.05f,27.49f };
	float plunging1[15] = { 56.83f,61.45f,66.08f,72.69f,77.31f,82.60f,89.87f,97.14f,104.41f,112.34f,120.27f,128.20f,136.12f,144.05f,151.98f };
	float plunging2[15] = { 113.63f,122.88f,132.13f,145.35f,154.59f,165.16f,179.70f,194.23f,208.77f,224.62f,240.48f,256.34f,272.19f,288.05f,303.90f };
	float plunging3[15] = { 141.93f,153.49f,165.04f,181.54f,193.10f,206.30f,224.45f,242.61f,260.76f,280.57f,300.37f,320.18f,339.98f,359.79f,379.59f };
	float e[15] = { 22.61f,24.31f,26.01f,28.27f,29.96f,31.66f,33.92f,36.18f,38.44f,40.70f,42.97f,45.23f,48.05f,50.88f,53.71f };
	float q1[15] = { 7.31f,7.86f,8.40f,9.13f,9.68f,10.23f,10.96f,11.69f,12.42f,13.15f,13.89f,14.62f,15.53f,16.44f,17.36f };
	float q2[15] = { 4.87f,5.24f,5.60f,6.09f,6.46f,6.82f,7.31f,7.80f,8.28f,8.77f,9.26f,9.74f,10.35f,10.96f,11.57f };

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
	float eRate = e[m_Constellation == 6 ? m_Elevel + 2 : m_Elevel - 1];
	float qRate1 = q1[m_Constellation >= 3 ? m_Qlevel + 2 : m_Qlevel - 1];
	float qRate2 = q2[m_Constellation >= 3 ? m_Qlevel + 2 : m_Qlevel - 1];
public:
	Yelan(int level, int alevel, int elevel, int qlevel, int constellation)
		:m_Name("夜兰"), m_Level(level), m_Alevel(alevel), m_Elevel(elevel), m_Qlevel(qlevel),
		m_Constellation(constellation), m_Weapon("弓"), m_Elem("水") {}



	void printcheck()
	{
		std::cout << m_Name << std::endl;
		std::cout << m_Level << std::endl;
		std::cout << m_Alevel << std::endl;
		std::cout << m_Elevel << std::endl;
		std::cout << m_Qlevel << std::endl;
		std::cout << m_Constellation << std::endl;
		std::cout << m_Weapon << std::endl;
		std::cout << m_Elem << std::endl;
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
	Yelan yelan(90, 10, 10, 10, 6);
	yelan.printcheck();
}
