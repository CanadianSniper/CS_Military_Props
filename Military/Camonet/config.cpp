class CfgPatches
{
	class CS_Military_Camonet
	{
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class CS_Military_Camonet: HouseNoDestruct
	{
		scope = 2;
		model = "Military\Camonet\CS_Military_Camonet.p3d";
	};
};