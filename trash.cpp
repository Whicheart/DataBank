//enum ArtifactSetName
//{
//	Empty = 0,//空圣遗物
//	Adventurer,//冒险家
//	LuckyDog,//幸运儿
//	TravelingDoctor,//游医
//	ResolutionOfSojourner,//行者之心
//	TinyMiracle,//奇迹
//	Berserker,//战狂
//	Instructor,//教官
//	TheExile,//流放者
//	DefendersWill,//守护之心
//	BraveHeart,//勇者之心
//	MartialArtist,//武人
//	Gambler,//赌徒
//	Scholar,//学士
//	PrayersForIllumination,//祭火之人
//	PrayersForDestiny,//祭水之人
//	PrayersForWisdom,//祭雷之人
//	PrayersToSpringtime,//祭冰之人
//	BlizzardStrayer,//冰风迷途的勇士
//	Thundersoother,//平息鸣雷的尊者
//	Lavawalker,//渡过烈火的贤人
//	MaidenBeloved,//被怜爱的少女
//	GladiatorsFinale,//角斗士的终幕礼
//	ViridescentVenerer,//翠绿之影
//	WanderersTroupe,//流浪大地的乐团
//	ThunderingFury,//如雷的盛怒
//	CrimsonWitchOfFlames,//炽烈的炎之魔女
//	NoblesseOblige,//昔日宗室之仪
//	BloodstainedChivalry,//染血的骑士道
//	ArchaicPetra,//幽古的磐岩
//	RetracingBloide,//逆飞的流星
//	HeartOfDepth,//沉沦之心
//	TenacityOfTheMillelith,//千岩牢固
//	PaleFlame,//苍白之火
//	ShimenawasReminiscence,//追忆之注连
//	EmblemOfSeveredFate,//绝缘之旗印
//	HuskOfOpulentDreams,//华馆梦醒形骸记
//	OceanHuedClam,//海染砗磲
//	VermillonHereafter,//辰砂往生录
//	EchoesOfAnOffering,//来歆余响
//	DeepwoodMemories,//深林的记忆
//	GildedDreams,//饰金之梦
//	DesertPavilionChronicle,//沙上楼阁史话
//	FlowerOfParadiseLost,//乐园遗落之花
//	NymphsDream,//水仙之梦
//	VourukashasGlow,//花海甘露之光
//	MarechausseeHunter,//逐影猎人
//	GoldenTroupe,//黄金剧团
//	SongOfDaysPast,//昔时之歌
//	NighttimeWhispersInTheEchoingWoods,//回声之林夜话
//	FragmentOfHarmonicWhimsy,//谐律异想断章
//	UnfinishedReverie,//未竟的遐思
//	ArtifactSetCount,//枚举数量
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
//	{ArtifactSetName::Empty, "空圣遗物"},
//	{ArtifactSetName::Adventurer, "冒险家"},
//	{ArtifactSetName::LuckyDog, "幸运儿"},
//	{ArtifactSetName::TravelingDoctor, "游医"},
//	{ArtifactSetName::ResolutionOfSojourner, "行者之心"},
//	{ArtifactSetName::TinyMiracle, "奇迹"},
//	{ArtifactSetName::Berserker, "战狂"},
//	{ArtifactSetName::Instructor, "教官"},
//	{ArtifactSetName::TheExile, "流放者"},
//	{ArtifactSetName::DefendersWill, "守护之心"},
//	{ArtifactSetName::BraveHeart, "勇者之心"},
//	{ArtifactSetName::MartialArtist, "武人"},
//	{ArtifactSetName::Gambler, "赌徒"},
//	{ArtifactSetName::Scholar, "学士"},
//	{ArtifactSetName::PrayersForIllumination, "祭火之人"},
//	{ArtifactSetName::PrayersForDestiny, "祭水之人"},
//	{ArtifactSetName::PrayersForWisdom, "祭雷之人"},
//	{ArtifactSetName::PrayersToSpringtime, "祭冰之人"},
//	{ArtifactSetName::BlizzardStrayer, "冰风迷途的勇士"},
//	{ArtifactSetName::Thundersoother, "平息鸣雷的尊者"},
//	{ArtifactSetName::Lavawalker, "渡过烈火的贤人"},
//	{ArtifactSetName::MaidenBeloved, "被怜爱的少女"},
//	{ArtifactSetName::GladiatorsFinale, "角斗士的终幕礼"},
//	{ArtifactSetName::ViridescentVenerer, "翠绿之影"},
//	{ArtifactSetName::WanderersTroupe, "流浪大地的乐团"},
//	{ArtifactSetName::ThunderingFury, "如雷的盛怒"},
//	{ArtifactSetName::CrimsonWitchOfFlames, "炽烈的炎之魔女"},
//	{ArtifactSetName::NoblesseOblige, "昔日宗室之仪"},
//	{ArtifactSetName::BloodstainedChivalry, "染血的骑士道"},
//	{ArtifactSetName::ArchaicPetra, "幽古的磐岩"},
//	{ArtifactSetName::RetracingBloide, "逆飞的流星"},
//	{ArtifactSetName::HeartOfDepth, "沉沦之心"},
//	{ArtifactSetName::TenacityOfTheMillelith, "千岩牢固"},
//	{ArtifactSetName::PaleFlame, "苍白之火"},
//	{ArtifactSetName::ShimenawasReminiscence, "追忆之注连"},
//	{ArtifactSetName::EmblemOfSeveredFate, "绝缘之旗印"},
//	{ArtifactSetName::HuskOfOpulentDreams, "华馆梦醒形骸记"},
//	{ArtifactSetName::OceanHuedClam, "海染砗磲"},
//	{ArtifactSetName::VermillonHereafter, "辰砂往生录"},
//	{ArtifactSetName::EchoesOfAnOffering, "来歆余响"},
//	{ArtifactSetName::DeepwoodMemories, "深林的记忆"},
//	{ArtifactSetName::GildedDreams, "饰金之梦"},
//	{ArtifactSetName::DesertPavilionChronicle, "沙上楼阁史话"},
//	{ArtifactSetName::FlowerOfParadiseLost, "乐园遗落之花"},
//	{ArtifactSetName::NymphsDream, "水仙之梦"},
//	{ArtifactSetName::VourukashasGlow, "花海甘露之光"},
//	{ArtifactSetName::MarechausseeHunter, "逐影猎人"},
//	{ArtifactSetName::GoldenTroupe, "黄金剧团"},
//	{ArtifactSetName::SongOfDaysPast, "昔时之歌"},
//	{ArtifactSetName::NighttimeWhispersInTheEchoingWoods, "回声之林夜话"},
//	{ArtifactSetName::FragmentOfHarmonicWhimsy, "谐律异想断章"},
//	{ArtifactSetName::UnfinishedReverie, "未竟的遐思"}
//};
//
//std::unordered_map<ArtifactPosition, std::string> ArtifactPosition_ToString =
//{
//	{ArtifactPosition::Flower, "生之花"},
//	{ArtifactPosition::Feather, "死之羽"},
//	{ArtifactPosition::Sand, "时之沙"},
//	{ArtifactPosition::Goblet, "空之杯"},
//	{ArtifactPosition::Head, "礼之冠"},
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
