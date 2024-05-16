//enum ArtifactSetName
//{
//	Empty = 0,//��ʥ����
//	Adventurer,//ð�ռ�
//	LuckyDog,//���˶�
//	TravelingDoctor,//��ҽ
//	ResolutionOfSojourner,//����֮��
//	TinyMiracle,//�漣
//	Berserker,//ս��
//	Instructor,//�̹�
//	TheExile,//������
//	DefendersWill,//�ػ�֮��
//	BraveHeart,//����֮��
//	MartialArtist,//����
//	Gambler,//��ͽ
//	Scholar,//ѧʿ
//	PrayersForIllumination,//����֮��
//	PrayersForDestiny,//��ˮ֮��
//	PrayersForWisdom,//����֮��
//	PrayersToSpringtime,//����֮��
//	BlizzardStrayer,//������;����ʿ
//	Thundersoother,//ƽϢ���׵�����
//	Lavawalker,//�ɹ��һ������
//	MaidenBeloved,//����������Ů
//	GladiatorsFinale,//�Ƕ�ʿ����Ļ��
//	ViridescentVenerer,//����֮Ӱ
//	WanderersTroupe,//���˴�ص�����
//	ThunderingFury,//���׵�ʢŭ
//	CrimsonWitchOfFlames,//���ҵ���֮ħŮ
//	NoblesseOblige,//��������֮��
//	BloodstainedChivalry,//ȾѪ����ʿ��
//	ArchaicPetra,//�Ĺŵ�����
//	RetracingBloide,//��ɵ�����
//	HeartOfDepth,//����֮��
//	TenacityOfTheMillelith,//ǧ���ι�
//	PaleFlame,//�԰�֮��
//	ShimenawasReminiscence,//׷��֮ע��
//	EmblemOfSeveredFate,//��Ե֮��ӡ
//	HuskOfOpulentDreams,//���������κ���
//	OceanHuedClam,//��Ⱦ���
//	VermillonHereafter,//��ɰ����¼
//	EchoesOfAnOffering,//�������
//	DeepwoodMemories,//���ֵļ���
//	GildedDreams,//�ν�֮��
//	DesertPavilionChronicle,//ɳ��¥��ʷ��
//	FlowerOfParadiseLost,//��԰����֮��
//	NymphsDream,//ˮ��֮��
//	VourukashasGlow,//������¶֮��
//	MarechausseeHunter,//��Ӱ����
//	GoldenTroupe,//�ƽ����
//	SongOfDaysPast,//��ʱ֮��
//	NighttimeWhispersInTheEchoingWoods,//����֮��ҹ��
//	FragmentOfHarmonicWhimsy,//г���������
//	UnfinishedReverie,//δ������˼
//	ArtifactSetCount,//ö������
//};
//
//enum ArtifactPosition
//{
//	Flower = 0,
//	Feather,
//	Sand,
//	Goblet,
//	Head,
//	ArtifactPositionCount,
//};
//
//std::unordered_map<ArtifactSetName, std::string> ArtifactSetName_ToString =
//{
//	{ArtifactSetName::Empty, "��ʥ����"},
//	{ArtifactSetName::Adventurer, "ð�ռ�"},
//	{ArtifactSetName::LuckyDog, "���˶�"},
//	{ArtifactSetName::TravelingDoctor, "��ҽ"},
//	{ArtifactSetName::ResolutionOfSojourner, "����֮��"},
//	{ArtifactSetName::TinyMiracle, "�漣"},
//	{ArtifactSetName::Berserker, "ս��"},
//	{ArtifactSetName::Instructor, "�̹�"},
//	{ArtifactSetName::TheExile, "������"},
//	{ArtifactSetName::DefendersWill, "�ػ�֮��"},
//	{ArtifactSetName::BraveHeart, "����֮��"},
//	{ArtifactSetName::MartialArtist, "����"},
//	{ArtifactSetName::Gambler, "��ͽ"},
//	{ArtifactSetName::Scholar, "ѧʿ"},
//	{ArtifactSetName::PrayersForIllumination, "����֮��"},
//	{ArtifactSetName::PrayersForDestiny, "��ˮ֮��"},
//	{ArtifactSetName::PrayersForWisdom, "����֮��"},
//	{ArtifactSetName::PrayersToSpringtime, "����֮��"},
//	{ArtifactSetName::BlizzardStrayer, "������;����ʿ"},
//	{ArtifactSetName::Thundersoother, "ƽϢ���׵�����"},
//	{ArtifactSetName::Lavawalker, "�ɹ��һ������"},
//	{ArtifactSetName::MaidenBeloved, "����������Ů"},
//	{ArtifactSetName::GladiatorsFinale, "�Ƕ�ʿ����Ļ��"},
//	{ArtifactSetName::ViridescentVenerer, "����֮Ӱ"},
//	{ArtifactSetName::WanderersTroupe, "���˴�ص�����"},
//	{ArtifactSetName::ThunderingFury, "���׵�ʢŭ"},
//	{ArtifactSetName::CrimsonWitchOfFlames, "���ҵ���֮ħŮ"},
//	{ArtifactSetName::NoblesseOblige, "��������֮��"},
//	{ArtifactSetName::BloodstainedChivalry, "ȾѪ����ʿ��"},
//	{ArtifactSetName::ArchaicPetra, "�Ĺŵ�����"},
//	{ArtifactSetName::RetracingBloide, "��ɵ�����"},
//	{ArtifactSetName::HeartOfDepth, "����֮��"},
//	{ArtifactSetName::TenacityOfTheMillelith, "ǧ���ι�"},
//	{ArtifactSetName::PaleFlame, "�԰�֮��"},
//	{ArtifactSetName::ShimenawasReminiscence, "׷��֮ע��"},
//	{ArtifactSetName::EmblemOfSeveredFate, "��Ե֮��ӡ"},
//	{ArtifactSetName::HuskOfOpulentDreams, "���������κ���"},
//	{ArtifactSetName::OceanHuedClam, "��Ⱦ���"},
//	{ArtifactSetName::VermillonHereafter, "��ɰ����¼"},
//	{ArtifactSetName::EchoesOfAnOffering, "�������"},
//	{ArtifactSetName::DeepwoodMemories, "���ֵļ���"},
//	{ArtifactSetName::GildedDreams, "�ν�֮��"},
//	{ArtifactSetName::DesertPavilionChronicle, "ɳ��¥��ʷ��"},
//	{ArtifactSetName::FlowerOfParadiseLost, "��԰����֮��"},
//	{ArtifactSetName::NymphsDream, "ˮ��֮��"},
//	{ArtifactSetName::VourukashasGlow, "������¶֮��"},
//	{ArtifactSetName::MarechausseeHunter, "��Ӱ����"},
//	{ArtifactSetName::GoldenTroupe, "�ƽ����"},
//	{ArtifactSetName::SongOfDaysPast, "��ʱ֮��"},
//	{ArtifactSetName::NighttimeWhispersInTheEchoingWoods, "����֮��ҹ��"},
//	{ArtifactSetName::FragmentOfHarmonicWhimsy, "г���������"},
//	{ArtifactSetName::UnfinishedReverie, "δ������˼"}
//};
//
//std::unordered_map<ArtifactPosition, std::string> ArtifactPosition_ToString =
//{
//	{ArtifactPosition::Flower, "��֮��"},
//	{ArtifactPosition::Feather, "��֮��"},
//	{ArtifactPosition::Sand, "ʱ֮ɳ"},
//	{ArtifactPosition::Goblet, "��֮��"},
//	{ArtifactPosition::Head, "��֮��"},
//};
//enum defindMainTag
//	{
//		m_AttackStatic,
//		m_LifeStatic,
//		m_AttackPercentage,
//		m_LifePercentage,
//		m_DefendPercentage,
//		m_PyroDamageBonus,
//		m_HydroDamageBonus,
//		m_CryoDamageBonus,
//		m_ElectroDamageBonus,
//		m_AnemoDamageBonus,
//		m_GeoDamageBonus,
//		m_DendroDamageBonus,
//		m_PhysicalDamageBonus,
//		m_Rechargeing,
//		m_ElementMastery,
//		m_HealingBonus,
//		m_CriticalRate,
//		m_CriticalDamage,
//	};
//	enum defindNormalTag
//	{
//		n_AttackStatic,
//		n_LifeStatic,
//		n_DefendStatic,
//		n_AttackPercentage,
//		n_LifePercentage,
//		n_DefendPercentage,
//		n_Rechargeing,
//		n_ElementMastery,
//		n_CriticalRate,
//		n_CriticalDamage,
//	};
