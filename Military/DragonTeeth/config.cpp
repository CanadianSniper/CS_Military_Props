class CfgPatches
{
	class CS_Military_DragonTeeth
	{
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class CS_Military_DragonTeeth_Large: HouseNoDestruct
	{
		scope = 2;
		model = "Military\DragonTeeth\CS_Military_DragonTeeth_Large.p3d";
	};
	class CS_Military_DragonTeeth_Small: HouseNoDestruct
	{
		scope = 2;
		model = "Military\DragonTeeth\CS_Military_DragonTeeth_Small.p3d";
	};
};