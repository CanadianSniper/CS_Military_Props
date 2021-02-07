class CfgPatches
{
	class CS_Military_Tower
	{
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class CS_Military_Tower: HouseNoDestruct
	{
		scope = 2;
		model = "Military\Tower\CS_Military_Tower.p3d";
	};
	class CS_Military_Tower_Small: HouseNoDestruct
	{
		scope = 2;
		model = "Military\Tower\CS_Military_Tower_Small.p3d";
	};
};