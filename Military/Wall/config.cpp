class CfgPatches
{
	class CS_Military_Wall
	{
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class CS_Military_Wall: HouseNoDestruct
	{
		scope = 2;
		model = "Military\Wall\CS_Military_Wall.p3d";
		hiddenSelections[]=
        {
            "wall"
        };
		hiddenSelectionsTextures[]=
		{
			"military\wall\data\cs_military_wall_co.paa"
		};
	};
	class CS_Military_Wall2: CS_Military_Wall
	{
		hiddenSelectionsTextures[]=
		{
			"military\wall\data\cs_military_wall2_co.paa"
		};
	};
	class CS_Military_Wall3: CS_Military_Wall
	{
		hiddenSelectionsTextures[]=
		{
			"military\wall\data\cs_military_wall3_co.paa"
		};
	};
	class CS_Military_Wall4: CS_Military_Wall
	{
		hiddenSelectionsTextures[]=
		{
			"military\wall\data\cs_military_wall4_co.paa"
		};
	};
	class CS_Military_Wall5: CS_Military_Wall
	{
		hiddenSelectionsTextures[]=
		{
			"military\wall\data\cs_military_wall5_co.paa"
		};
	};
	class CS_Military_Wall6: CS_Military_Wall
	{
		hiddenSelectionsTextures[]=
		{
			"military\wall\data\cs_military_wall6_co.paa"
		};
	};
		class CS_Military_Wall_Gate: HouseNoDestruct
	{
		scope = 2;
		model = "Military\Wall\CS_Military_Wall_Gate.p3d";
		class Doors
		{
			class DoorsTwin1
			{
				displayName = "Twin Doors 1";
				component = "doorsTwin1";
				soundPos = "doorsTwin1_action";
				animPeriod = 2.0;
				initPhase = 0.0;
				initOpened = 0.0;
				soundOpen = "doorMetalTwinBigOpen";
				soundClose = "doorMetalTwinBigClose";
				soundLocked = "doorMetalTwinBigRattle";
				soundOpenABit = "doorMetalTwinBigOpenABit";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health { damage = 0; };
					class Blood { damage = 0; };
					class Shock { damage = 0; };
				};
				class Melee
				{
					class Health { damage = 0; };
					class Blood { damage = 0; };
					class Shock { damage = 0; };
				};
			};
			class DamageZones
			{
				class DoorsTwin1
				{
					class Health
					{
						hitpoints = 2000;
						transferToGlobalCoef = 0;
					};
					componentNames[] = {"doorsTwin1"};
					fatalInjuryCoef = -1;
					class ArmorType
					{
						class Projectile
						{
							class Health { damage = 2; };
							class Blood { damage = 0; };
							class Shock { damage = 0; };
						};
						class Melee
						{
							class Health { damage = 2.5; };
							class Blood { damage = 0; };
							class Shock { damage = 0; };
						};
					};
				};
			};
		};
	};
};