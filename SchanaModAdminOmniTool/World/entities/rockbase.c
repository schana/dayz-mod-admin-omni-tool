modded class RockBase
{
    override void GetMaterialAndQuantityMap(ItemBase item, out map<string,int> output_map)
	{
        super.GetMaterialAndQuantityMap(item, output_map);
		if ( item && item.KindOf("SchanaAdminOmniTool") )
		{
			output_map.Insert("Stone",1);
		}
	}

    override float GetDamageToMiningItemEachDrop(ItemBase item)
	{
		if ( item && item.KindOf("SchanaAdminOmniTool") )
		{
			return 0;
		}
        else
        {
            return super.GetDamageToMiningItemEachDrop(item);
        }
	}
}
