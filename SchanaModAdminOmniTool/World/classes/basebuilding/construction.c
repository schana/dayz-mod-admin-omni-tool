modded class Construction
{
    override bool CanBuildPart( string part_name, ItemBase tool )
    {
        if ( tool.Type() == SchanaAdminOmniTool && !IsPartConstructed( part_name ) && HasRequiredPart( part_name ) && !HasConflictPart( part_name ) )
		{
			return true;
		}
        return super.CanBuildPart(part_name, tool);
    }

    override bool CanDismantlePart( string part_name, ItemBase tool )
	{
        if ( tool.Type() == SchanaAdminOmniTool && IsPartConstructed( part_name ) && !HasDependentPart( part_name ) )
		{
			return true;
		}
		return super.CanDismantlePart(part_name, tool);
	}
}
