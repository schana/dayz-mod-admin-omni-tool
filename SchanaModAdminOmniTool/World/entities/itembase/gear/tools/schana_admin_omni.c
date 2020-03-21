class SchanaAdminOmniTool extends Inventory_Base
{
    override void SetActions()
    {
        super.SetActions();

        AddAction(ActionBuildPartSwitch);
        AddAction(ActionBuildPart);
        AddAction(ActionDismantlePart);
        AddAction(ActionDestroyPart);

        AddAction(ActionLockDoors);
        AddAction(ActionUnlockDoors);
        AddAction(ActionUnrestrainTarget);

        AddAction(ActionUnmountBarbedWire);
        AddAction(ActionDestroyCombinationLock);

        AddAction(ActionSkinning);
    }

    override bool IsMeleeFinisher()
    {
        return true;
    }

    override void OnInventoryExit(Man player)
    {
        super.OnInventoryExit(player);
        Delete();
        DeleteOnClient();
    }

    override void DecreaseHealth(string zoneName, string healthType, float value, bool auto_delete)
    {
        
    }
}
