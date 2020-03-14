class CfgPatches
{
	class SchanaModAdminOmniTool
	{
		requiredAddons[] = {};
	};
};

class CfgMods
{
	class SchanaModAdminOmniTool
	{
	    type = "mod";
		
	    class defs
	    {
			class worldScriptModule		
            {
                value = "";
                files[] = {"SchanaModAdminOmniTool/World"};
            };
        };
    };
};

class CfgVehicles
{
	class Wrench;
	class SchanaAdminOmniTool: Wrench
	{
		displayName = "Schana_AdminOmniTool";
		descriptionShort = "tool for admins to use for nearly anything"
	};
};
