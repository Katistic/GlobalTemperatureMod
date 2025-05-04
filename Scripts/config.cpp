class CfgPatches
{
	class GlobalTemperatureMod
	{
		requiredAddons[] =
		{
			// ""
		};
	};
};

class CfgMods
{
	class GlobalTemperatureMod
	{
		type = "mod";

		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = { "GlobalTemperatureMod/Scripts/4_World" };
			};
		};
	};
};