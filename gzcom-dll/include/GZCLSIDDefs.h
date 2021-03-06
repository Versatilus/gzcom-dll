#pragma once
#include <stdint.h>

/**
 * @brief Essentially an enumeration of all known class IDs in SC4.
 *
 * A list of all known engine class IDs (GZCLSIDs). There is the possibility
 * that some classes exist in the game that do not have their class IDs
 * documented here because they were not exposed in the Mac symbol table.
 *
 * This list was machine-generated and should not be altered without good
 * reason.
 */
class GZCLSID
{
	public:
		static const int32_t kGZWinFlatRect = 0xc2afa76e;
		static const int32_t kcGZBuffer = 0x0C470D325;
		static const int32_t kcGZDrawContext = 0x0AE6320E;
		static const int32_t kcGZDrawContextAsBuffer = 0x0AB300B20;
		static const int32_t kcGZDrawFontRenderer = 0x8B3255F9;
		static const int32_t kcGZDrawSystem = 0x0AB2EA3AA;
		static const int32_t kcGZLuaScriptServer = 0x0CBD101A9;
		static const int32_t kcGZMessageQueueManager2 = 0x452294DF;
		static const int32_t kcGZMessageServer2 = 0x252294E9;
		static const int32_t kcGZRealtimeDebugDisplay = 0x414A2B1;
		static const int32_t kcGZWinBMP = 0x82fe68c4;
		static const int32_t kcGZWinBtn = 0x22ecfc47;
		static const int32_t kcGZWinCustom = 0x478d1e6f;
		static const int32_t kcGZWinDebugDisplay = 0x0C414BAE9;
		static const int32_t kcGZWinFileBrowser = 0x1aa52ea4;
		static const int32_t kcGZWinFolders = 0x78e8055;
		static const int32_t kcGZWinGen = 0x4386d516;
		static const int32_t kcGZWinGrid = 0xdaa6b9bf;
		static const int32_t kcGZWinHTML = 0x0AA12E5F5;
		static const int32_t kcGZWinLineInput = 0x21335c5a;
		static const int32_t kcGZWinListBox = 0x598;
		static const int32_t kcGZWinLuaScriptConsole = 0x0EBA2BE1A;
		static const int32_t kcGZWinLuaScriptView = 0x6BA6CD0C;
		static const int32_t kcGZWinLuaScriptViewBreakpoints = 0x0EBD9423C;
		static const int32_t kcGZWinLuaScriptViewCallStack = 0x0ABD63ED3;
		static const int32_t kcGZWinLuaScriptViewVariables = 0x6BD941EB;
		static const int32_t kcGZWinOptGrp = 0xa1336cc1;
		static const int32_t kcGZWinOutline = 0x4303e5b6;
		static const int32_t kcGZWinScrollbar = 0x61325a2e;
		static const int32_t kcGZWinSlider = 0x21325208;
		static const int32_t kcGZWinSpinner = 0x612ce0c4;
		static const int32_t kcGZWinTestService = 0x440DF2A6;
		static const int32_t kcGZWinText = 0x592;
		static const int32_t kcGZWinTextEdit = 0x231a1c58;
		static const int32_t kcGZWinTextTicker = 0xe32f0b31;
		static const int32_t kcGZWinTreeView = 0x3ae8bae1;
		static const int32_t kcHitList = 0x7b1acfcd;
		static const int32_t kcIGZCanvasMessage = 0xda1062fa;
		static const int32_t kcIGZMessage2Standard = 0x65297976;
		static const int32_t kcIGZMessageTarget2 = 0x452294aa;
		static const int32_t kcISC4City = 0x66ba4db5;
		static const int32_t kcRZMessage2Standard = 0x46DF45E7;
		static const int32_t kcS3DCamera = 0x0E9C6262A;
		static const int32_t kcS3DFSHTextureFactory = 0x3AB50E2A;
		static const int32_t kcS3DMaterialManager = 0x9AC0E23D;
		static const int32_t kcS3DResModelFactory = 0x0FAD0F0B6;
		static const int32_t kcS3DTextureBindingFactory = 0x9AC0E23C;
		static const int32_t kcSC424HourClock = 0x0A7E7F929;
		static const int32_t kcSC43DRender = 0x0E9C622D8;
		static const int32_t kcSC4Advice = 0x8A09F5F4;
		static const int32_t kcSC4AdviceNeghborDeal = 0x6A3848DB;
		static const int32_t kcSC4AdviceSubject = 0x6A26D049;
		static const int32_t kcSC4Advisor = 0x0EAC937B4;
		static const int32_t kcSC4AdvisorBase = 0x0CA09F543;
		static const int32_t kcSC4AdvisorCityPlanning = 0x2A5F877D;
		static const int32_t kcSC4AdvisorCitySituations = 0x4BE372CD;
		static const int32_t kcSC4AdvisorFinance = 0x0AA5292D7;
		static const int32_t kcSC4AdvisorHQ = 0x6A5F8755;
		static const int32_t kcSC4AdvisorSafety = 0x0EA19E825;
		static const int32_t kcSC4AdvisorSystem = 0x4A0DD616;
		static const int32_t kcSC4AdvisorTraffic = 0x4A3AD3E1;
		static const int32_t kcSC4AdvisorUtility = 0x0CA2C2A2F;
		static const int32_t kcSC4Aircraft = 0x0C96E75DC;
		static const int32_t kcSC4AircraftManager = 0x0C98F9D4A;
		static const int32_t kcSC4Airplane = 0x0CBEB4F62;
		static const int32_t kcSC4AirportDeveloper = 0x0AA2049A1;
		static const int32_t kcSC4Ambulance = 0x6C1ACDE1;
		static const int32_t kcSC4AnimationTickManager = 0x0A9C73857;
		static const int32_t kcSC4AuraSimulator = 0x990BDD8;
		static const int32_t kcSC4AutomataAttractor = 0x6A1628BA;
		static const int32_t kcSC4AutomataController = 0x4A18672B;
		static const int32_t kcSC4AutomataControllerManager = 0x0CA14CA03;
		static const int32_t kcSC4AutomataGenerator = 0x4A1628C5;
		static const int32_t kcSC4AutomataManager = 0x498F9CB5;
		static const int32_t kcSC4AutomataScriptSystem = 0x4A1B664E;
		static const int32_t kcSC4BudgetSimulator = 0x0E990BE01;
		static const int32_t kcSC4BuildingDevelopmentSimulator = 0x8990BE7A;
		static const int32_t kcSC4BuildingOccupant = 0x0A9BD882D;
		static const int32_t kcSC4Bus = 0x0AA9F4A3D;
		static const int32_t kcSC4BusinessUnit = 0x4A232DA8;
		static const int32_t kcSC4CameraControl = 0x0C9C628EC;
		static const int32_t kcSC4CarjackedVehicle = 0x0CBB32B0A;
		static const int32_t kcSC4City = 0x8990C372;
		static const int32_t kcSC4CityDetailManager = 0x0EAD4BA36;
		static const int32_t kcSC4CitySituationAdvice = 0x8BE3753B;
		static const int32_t kcSC4CitySituationManager = 0x0BB14381;
		static const int32_t kcSC4CivicBuildingSimulator = 0x0A413481;
		static const int32_t kcSC4CommercialSimulator = 0x8990C080;
		static const int32_t kcSC4ComplexViewOccupantFilter = 0x0CA0E3852;
		static const int32_t kcSC4ConfigRuleManager = 0x0A1D8285;
		static const int32_t kcSC4ConstructionOccupant = 0x0A97F909E;
		static const int32_t kcSC4CrimeSimulator = 0x8990C09A;
		static const int32_t kcSC4DefaultOccupantFilter = 0x0C9C75EAE;
		static const int32_t kcSC4Demand = 0x8990C12D;
		static const int32_t kcSC4DemandSimulator = 0x2990BFF2;
		static const int32_t kcSC4Demolition = 0x990C38A;
		static const int32_t kcSC4DepartmentBudget = 0x0E990BFFC;
		static const int32_t kcSC4DisasterInstanceEarthquake = 0x0AA086D86;
		static const int32_t kcSC4DisasterInstanceFire = 0x69C1718F;
		static const int32_t kcSC4DisasterInstancePipeBurst = 0x0A133012;
		static const int32_t kcSC4DisasterInstanceRiot = 0x4A38206D;
		static const int32_t kcSC4DisasterInstanceVolcano = 0x29B5AB89;
		static const int32_t kcSC4DisasterLayer = 0x61F6ABF5;
		static const int32_t kcSC4DisasterManagerEarthquake = 0x0A086BD3;
		static const int32_t kcSC4DisasterManagerEffect = 0x6A7B3E9B;
		static const int32_t kcSC4DisasterManagerFire = 0x69C1718E;
		static const int32_t kcSC4DisasterManagerPipeBurst = 0x4A132FDF;
		static const int32_t kcSC4DisasterManagerRiot = 0x4A38206C;
		static const int32_t kcSC4DisasterManagerToxic = 0x0EBFB0402;
		static const int32_t kcSC4DisasterManagerVolcano = 0x0A9B5AB9F;
		static const int32_t kcSC4DispatchManager = 0x4990BD93;
		static const int32_t kcSC4EffectsManager = 0x49822F75;
		static const int32_t kcSC4EffectsParser = 0x0A956AD14;
		static const int32_t kcSC4EffectsResource = 0x2A5118AD;
		static const int32_t kcSC4EffectsResourceFactory = 0x0EA5118B5;
		static const int32_t kcSC4FireOccupant = 0x29D25F1D;
		static const int32_t kcSC4FirePlaneDispatchSource = 0x4C0AE114;
		static const int32_t kcSC4FireProtectionSimulator = 0x2990C05A;
		static const int32_t kcSC4FireTruck = 0x0AA222B83;
		static const int32_t kcSC4FlammabilitySimulator = 0x0E990C045;
		static const int32_t kcSC4FloraOccupant = 0x0A9C05C85;
		static const int32_t kcSC4FloraSimulator = 0x0C990C034;
		static const int32_t kcSC4FoundationOccupant = 0x49C05C8F;
		static const int32_t kcSC4GetawayVan = 0x0EA863423;
		static const int32_t kcSC4GrowthDeveloper = 0x990C138;
		static const int32_t kcSC4Helicopter = 0x8BA98EDA;
		static const int32_t kcSC4HistoryWarehouse = 0x89EFA536;
		static const int32_t kcSC4IndustrialSimulator = 0x0A990C022;
		static const int32_t kcSC4LandValueSimulator = 0x0E990C18E;
		static const int32_t kcSC4LandfillDeveloper = 0x0EA09D4AE;
		static const int32_t kcSC4LandfillOccupant = 0x8A22BEBE;
		static const int32_t kcSC4LineItem = 0x0AA313C9F;
		static const int32_t kcSC4Lot = 0x0C9BD5D4A;
		static const int32_t kcSC4LotBaseTextureOccupant = 0x0C97F987C;
		static const int32_t kcSC4LotConfigurationManager = 0x299062C0;
		static const int32_t kcSC4LotDeveloper = 0x0A990BFE0;
		static const int32_t kcSC4LotRetainingWallOccupant = 0x49C05C9F;
		static const int32_t kcSC4MassTransitTrain = 0x4C22AE53;
		static const int32_t kcSC4MayorLimo = 0x4C0DD224;
		static const int32_t kcSC4ModelMaker = 0x0A9C741B3;
		static const int32_t kcSC4MySim = 0x4A1DBBBF;
		static const int32_t kcSC4MySimAdvice = 0x6A9335DE;
		static const int32_t kcSC4MySimAgentSimulator = 0x29E37DEC;
		static const int32_t kcSC4MySimBalloonAdvice = 0x6B70EFAD;
		static const int32_t kcSC4MySimDispatch = 0x0CBC14674;
		static const int32_t kcSC4MyStreetSim = 0x0BF606A5;
		static const int32_t kcSC4Nation = 0x0C9DC0477;
		static const int32_t kcSC4NeighborConnection = 0x0A134F24;
		static const int32_t kcSC4NeighborDeal = 0x2A134F42;
		static const int32_t kcSC4NeighborsSimulator = 0x0C990C0A4;
		static const int32_t kcSC4NetworkBridgeOccupant = 0x49CC1BCD;
		static const int32_t kcSC4NetworkLayoutCustomView = 0x4B8EA424;
		static const int32_t kcSC4NetworkLotManager = 0x0E9A6CD3B;
		static const int32_t kcSC4NetworkManager = 0x0C990BD46;
		static const int32_t kcSC4NetworkOccupant = 0x0C9C05C6E;
		static const int32_t kcSC4NetworkOccupantFilter = 0x0EAC3A3D2;
		static const int32_t kcSC4NetworkOccupantWithPreBuiltModel = 0x49C1A034;
		static const int32_t kcSC4NetworkTunnelOccupant = 0x8A4BD52B;
		static const int32_t kcSC4Occupant = 0x0A9BC9AB6;
		static const int32_t kcSC4OccupantFilter = 0x0A9C74DC9;
		static const int32_t kcSC4OccupantManager = 0x98F964D;
		static const int32_t kcSC4OccupantTypeFilter = 0x0E9C75ED1;
		static const int32_t kcSC4OccupantTypesFilter = 0x0E9C75EE8;
		static const int32_t kcSC4OccupantTypesFilterHashed = 0x0AA25CB90;
		static const int32_t kcSC4OrdinanceCarpoolIncentive = 0x0A2BF1DDC;
		static const int32_t kcSC4OrdinanceCleanAir = 0x0A2BF1E43;
		static const int32_t kcSC4OrdinanceCommunityCPRTraining = 0x0D0723D;
		static const int32_t kcSC4OrdinanceFreeClinics = 0x40D07236;
		static const int32_t kcSC4OrdinanceJuniorSportsLeague = 0x815B4CEF;
		static const int32_t kcSC4OrdinanceLandfillGasRecovery = 0x22F6E80C;
		static const int32_t kcSC4OrdinanceLegalizeGambling = 0x0A0D07129;
		static const int32_t kcSC4OrdinanceMandatorySmokeDetectors = 0x62BF1DAA;
		static const int32_t kcSC4OrdinanceNeighborhoodWatch = 0x62BF1DB9;
		static const int32_t kcSC4OrdinanceNuclearFreeZone = 0x0E0D0722E;
		static const int32_t kcSC4OrdinancePaperReductionAct = 0x22F6E81B;
		static const int32_t kcSC4OrdinancePowerConservation = 0x82B9999B;
		static const int32_t kcSC4OrdinanceProReadingCampaign = 0x0E0D07233;
		static const int32_t kcSC4OrdinanceShuttleService = 0x0A2BF1DE5;
		static const int32_t kcSC4OrdinanceSimple = 0x8BD4FC74;
		static const int32_t kcSC4OrdinanceSimulator = 0x0A990C08E;
		static const int32_t kcSC4OrdinanceTireRecycling = 0x0C2F6E81F;
		static const int32_t kcSC4OrdinanceTouristPromotion = 0x62F6E7CF;
		static const int32_t kcSC4OrdinanceTrashPresort = 0x42BF1E18;
		static const int32_t kcSC4OrdinanceVehicleEmissionStandard = 0x0C2BF1E04;
		static const int32_t kcSC4OrdinanceWaterConservation = 0x2BF1DFA;
		static const int32_t kcSC4OrdinanceYouthCurfew = 0x0C2BF1DC5;
		static const int32_t kcSC4ParkManager = 0x0AA3FE6BC;
		static const int32_t kcSC4PathInfoFactory = 0x496678FE;
		static const int32_t kcSC4PatrolCar = 0x4A222B98;
		static const int32_t kcSC4Pedestrian = 0x896E75AF;
		static const int32_t kcSC4PedestrianManager = 0x0C98F9D17;
		static const int32_t kcSC4PedestrianOneShot = 0x0AA09DC28;
		static const int32_t kcSC4PipeConnectionOccupant = 0x0EA0A5ACF;
		static const int32_t kcSC4PipeCustomView = 0x6A19BDD8;
		static const int32_t kcSC4PipeOccupant = 0x49C05B9F;
		static const int32_t kcSC4PlumbingSimulator = 0x990C075;
		static const int32_t kcSC4PoliceHelicopterDispatchSource = 0x0C0B06E8;
		static const int32_t kcSC4PoliceSimulator = 0x6990C04F;
		static const int32_t kcSC4PollutionSimulator = 0x8990C065;
		static const int32_t kcSC4PortDeveloper = 0x0A2C4EEE;
		static const int32_t kcSC4PowerLineOccupant = 0x0C9C05C5D;
		static const int32_t kcSC4PowerPoleOccupant = 0x9C05C6A;
		static const int32_t kcSC4PowerSimulator = 0x990C005;
		static const int32_t kcSC4PropDeveloper = 0x89C48F47;
		static const int32_t kcSC4PropManager = 0x0A990BD10;
		static const int32_t kcSC4PropOccupant = 0x2977AA47;
		static const int32_t kcSC4PropOccupantAutomataController = 0x2A4017A0;
		static const int32_t kcSC4PropOccupantBurntBuilding = 0x0C9EFB016;
		static const int32_t kcSC4PropOccupantTerrainDecal = 0x2977AA48;
		static const int32_t kcSC4PropOccupantVisualEffect = 0x2977AA49;
		static const int32_t kcSC4PropPlacementPropertiesFactory = 0x0A83479EA;
		static const int32_t kcSC4PylonOccupant = 0x49B6D69B;
		static const int32_t kcSC4RealisticOccupantFilter = 0x8A7A1C2C;
		static const int32_t kcSC4RegionalCity = 0x6A037C24;
		static const int32_t kcSC4ResidentialSimulator = 0x4990C013;
		static const int32_t kcSC4RewardAdvice = 0x0AA371C32;
		static const int32_t kcSC4RiotPolice = 0x8A6E4FA4;
		static const int32_t kcSC4SeaportDeveloper = 0x0EA230A28;
		static const int32_t kcSC4SignpostOccupant = 0x0AB72FBB3;
		static const int32_t kcSC4SimFireCrew = 0x4A222E4D;
		static const int32_t kcSC4Simulator = 0x2990C1E5;
		static const int32_t kcSC4StringSpecificationOccupantFilter = 0x0BCEB6C2;
		static const int32_t kcSC4SubwayConnectionOccupant = 0x0CA15ED6B;
		static const int32_t kcSC4SubwayCustomView = 0x4A19BDE3;
		static const int32_t kcSC4SubwayOccupant = 0x0CA16374F;
		static const int32_t kcSC4Tank = 0x0EBE0DCAD;
		static const int32_t kcSC4TextDecalOccupant = 0x8B79C707;
		static const int32_t kcSC4ToxicOccupant = 0x0ABF98CB5;
		static const int32_t kcSC4TractDeveloper = 0x2990C142;
		static const int32_t kcSC4TrafficNetworkMap = 0x6A0F82B2;
		static const int32_t kcSC4TrafficSimulator = 0x6990C1AA;
		static const int32_t kcSC4TrailerVehicle = 0x4A5B69ED;
		static const int32_t kcSC4Train = 0x8A41625A;
		static const int32_t kcSC4TrainCar = 0x4A416254;
		static const int32_t kcSC4TutorialSystem = 0x0AA3836FB;
		static const int32_t kcSC4UndergroundConnectionOccupant = 0x8A139184;
		static const int32_t kcSC4Vehicle = 0x896E714A;
		static const int32_t kcSC4VehicleManager = 0x0A98F9D3B;
		static const int32_t kcSC4ViewLevelOccupantFilter = 0x0AAC3C01D;
		static const int32_t kcSC4Watercraft = 0x96E75F5;
		static const int32_t kcSC4WatercraftManager = 0x0A98F9D28;
		static const int32_t kcSC4WealthRequester = 0x89C49986;
		static const int32_t kcSC4WeatherSimulator = 0x2990C1BC;
		static const int32_t kcSC4WinAdviceList = 0x0CA1492AC;
		static const int32_t kcSC4WinAlertBorder = 0x0CA5D3294;
		static const int32_t kcSC4WinAuraBar = 0x0AA5D16A9;
		static const int32_t kcSC4WinMiniMap = 0x0CA318388;
		static const int32_t kcSC4WinText = 0x0AA7CECFD;
		static const int32_t kcSC4ZoneDeveloper = 0x498F9B01;
		static const int32_t kcSC4ZoneManager = 0x298F9B2D;
		static const int32_t kcSCResExemplar = 0xea;
		static const int32_t kcSCResExemplarCohort = 0xea;
		static const int32_t kcSCResKeyTable = 0x67336285;
		static const int32_t kcSGLDriverDX7 = 0x0BADB6906;
		static const int32_t kcSTESurfaceWater = 0x0B8DA7DB;
		static const int32_t kcSTETerrain = 0x0E98F9525;
		static const int32_t kcSTETerrainView3D = 0x0C9B84E10;
		static const int32_t knSCRes_cFileParser = 0x5CF9459A;
		static const int32_t knSGLDX7_cGDriver = 0x0BADB6906;
};