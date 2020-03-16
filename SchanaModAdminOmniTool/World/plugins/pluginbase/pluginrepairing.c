modded class PluginRepairing extends PluginBase
{
    override bool Repair( PlayerBase player, ItemBase repair_kit, ItemBase item, float specialty_weight )
	{
        if (repair_kit.Type() == SchanaAdminOmniTool)
        {
            item.SetHealth("", "", item.GetMaxHealth("", ""));
            return true;
        }
        else
        {
            return super.Repair(player, repair_kit, item, specialty_weight);
        }
	}
}
