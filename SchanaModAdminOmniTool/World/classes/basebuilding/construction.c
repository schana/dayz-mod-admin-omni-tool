modded class Construction
{
    override bool CanBuildPart(string part_name, ItemBase tool)
    {
        if ( tool.Type() == SchanaAdminOmniTool && !IsPartConstructed( part_name ) && HasRequiredPart( part_name ) && !HasConflictPart( part_name ) && CanUseToolToBuildPart( part_name, tool ) )
		{
			return true;
		}
        return super.CanBuildPart(part_name, tool);
    }
}
