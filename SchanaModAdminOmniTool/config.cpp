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
		descriptionShort = "tool for admins to use for nearly anything";
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeSchanaAdminOmniTool";
				range=1.1;
			};
			class Heavy
			{
				ammo="MeleeSchanaAdminOmniTool";
				range=1.1;
			};
			class Sprint
			{
				ammo="MeleeSchanaAdminOmniTool";
				range=3.3;
			};
		};
	};
};

class CfgAmmo
{
	class MeleeDamage;
	class MeleeSchanaAdminOmniTool: MeleeDamage
	{
		class DamageApplied
		{
			type="Melee";
			class Health
			{
				damage=150;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=100;
			};
		};
	};
};
