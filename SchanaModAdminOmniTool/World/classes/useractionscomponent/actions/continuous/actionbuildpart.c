modded class ActionBuildPartCB
{
    override float SetBuildingDuration( ItemBase item )
	{
        if(item.Type() == SchanaAdminOmniTool)
        {
            return 0.2;
        }
        return super.SetBuildingDuration(item);
	}
}
