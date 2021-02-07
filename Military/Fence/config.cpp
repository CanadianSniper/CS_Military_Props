class CfgPatches
{
	class CS_Military_Fence
	{
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class CS_Military_Fence: HouseNoDestruct
	{
		scope = 2;
		model = "Military\Fence\CS_Military_Fence.p3d";
		hiddenSelections[]=
        {
            "fence"
        };
		hiddenSelectionsTextures[]=
		{
		"military\Fence\data\fence_co.paa"
		};
	};
	class CS_Military_Fence2: CS_Military_Fence
	{
		hiddenSelectionsTextures[]=
		{
			"military\Fence\data\fence2_co.paa"
		};
	};
	class CS_Military_Fence3: CS_Military_Fence
	{
		hiddenSelectionsTextures[]=
		{
			"military\Fence\data\fence3_co.paa"
		};
	};
	class CS_Military_Fence4: CS_Military_Fence
	{
		hiddenSelectionsTextures[]=
		{
			"military\Fence\data\fence4_co.paa"
		};
	};
};