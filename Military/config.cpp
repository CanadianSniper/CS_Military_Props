class CfgPatches
{
    class CS_Military
    {
		units[]={};
		weapons[]={};
        requiredAddons[] = {"DZ_Data"};
    };
};
class CfgMods
{
	class CS_Military
	{	
		dir = "Military";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "Military";
		author = "CanadianSniper";
		authorID = "2039448058";
		version = "1.0";
		extra = 0;
		
		type = "mod";
		dependencies[]=
		{
			"Game",
			"World"
		};
		
		class defs
		{
			class gameScriptModule
            {
                value = "";
                files[] = {"Military/Scripts/3_Game"};
			};

            class worldScriptModule
            {
                value = "";
                files[] = {"Military/Scripts/4_World"};
			};
		};
	};
};
