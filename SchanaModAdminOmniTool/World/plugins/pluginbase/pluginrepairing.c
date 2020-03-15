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

    override bool CanRepair( ItemBase repair_kit, ItemBase item )
    {
        if (repair_kit.Type() == SchanaAdminOmniTool)
        {
            if ( item.GetHealthLevel() < WORN_STATE )
            {
                return false;
            }
            return true;
        }
        else
        {
            return super.CanRepair(repair_kit, item);
        }
    }
}