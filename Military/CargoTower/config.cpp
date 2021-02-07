class CfgPatches
{
	class CS_Military_CargoTower
	{
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class CS_Military_CargoTower1: HouseNoDestruct
	{
		scope = 2;
		model = "Military\CargoTower\CS_Military_CargoTower1.p3d";
		class Doors
        {
            class Door1
            {
                displayName = "Door1";
                component = "Door1";
                soundPos = "Door1_action";
                animPeriod= 1.0;
                initPhase = 0.0;
                initOpened = 0.0;
                soundOpen = "doorMetalTwinBigOpen";
                soundClose = "doorMetalTwinBigClose";
                soundLocked = "doorMetalTwinBigRattle";
                soundOpenABit = "doorMetalTwinBigOpenABit";
            };
			class Door2
            {
                displayName = "Door2";
                component = "Door2";
                soundPos = "Door2_action";
                animPeriod= 1.0;
                initPhase = 0.0;
                initOpened = 0.0;
                soundOpen = "doorMetalTwinBigOpen";
                soundClose = "doorMetalTwinBigClose";
                soundLocked = "doorMetalTwinBigRattle";
                soundOpenABit = "doorMetalTwinBigOpenABit";
            };
			class Door3
            {
                displayName = "Door3";
                component = "Door3";
                soundPos = "Door3_action";
                animPeriod= 1.0;
                initPhase = 0.0;
                initOpened = 0.0;
                soundOpen = "doorMetalTwinBigOpen";
                soundClose = "doorMetalTwinBigClose";
                soundLocked = "doorMetalTwinBigRattle";
                soundOpenABit = "doorMetalTwinBigOpenABit";
            };
			class Door4
            {
                displayName = "Door4";
                component = "Door4";
                soundPos = "Door4_action";
                animPeriod= 1.0;
                initPhase = 0.0;
                initOpened = 0.0;
                soundOpen = "doorMetalTwinBigOpen";
                soundClose = "doorMetalTwinBigClose";
                soundLocked = "doorMetalTwinBigRattle";
                soundOpenABit = "doorMetalTwinBigOpenABit";
            };
			class door5
            {
                displayName = "Door5";
                component = "Door5";
                soundPos = "Door5_action";
                animPeriod= 1.0;
                initPhase = 0.0;
                initOpened = 0.0;
                soundOpen = "doorMetalTwinBigOpen";
                soundClose = "doorMetalTwinBigClose";
                soundLocked = "doorMetalTwinBigRattle";
                soundOpenABit = "doorMetalTwinBigOpenABit";
            };
        };
	};
	class CS_Military_CargoTower2: HouseNoDestruct
	{
		scope = 2;
		model = "Military\CargoTower\CS_Military_CargoTower2.p3d";
	};
};