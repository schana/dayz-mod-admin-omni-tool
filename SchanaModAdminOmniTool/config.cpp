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
		displayName = "SchanaAdminOmniTool";
		descriptionShort = "Tool for admins to use for nearly anything";
		animClass="Knife";
		repairKitType = 5;
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeSchanaAdminOmniTool";
				range=6.0;
			};
			class Heavy
			{
				ammo="MeleeSchanaAdminOmniTool";
				range=6.0;
			};
			class Sprint
			{
				ammo="MeleeSchanaAdminOmniTool";
				range=8.0;
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
				damage=500;
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
