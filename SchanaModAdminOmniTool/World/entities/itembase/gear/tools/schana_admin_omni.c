class SchanaAdminOmniTool extends ToolBase
{
    override void SetActions()
    {
        super.SetActions();
        AddAction(ActionDismantlePart);
        AddAction(ActionExtinguishFireplaceByExtinguisher);
        AddAction(ActionUnrestrainTarget);
        AddAction(ActionMineBush);
        AddAction(ActionSawPlanks);
        AddAction(ActionDestroyPart);
        AddAction(ActionSkinning);
        AddAction(ActionBuildPart);
        AddAction(ActionLockDoors);
        AddAction(ActionUnlockDoors);
        AddAction(ActionClapBearTrapWithThisItem);
        AddAction(ActionSewTarget);
        AddAction(ActionSewSelf);
        AddAction(ActionGiveSalineTarget);
        AddAction(ActionDestroyCombinationLock);
        AddAction(ActionMineRock1H);
        AddAction(ActionLightItemOnFire);
        AddAction(ActionMineRock);
        AddAction(ActionUnmountBarbedWire);
        AddAction(ActionBuildPartSwitch);
        AddAction(ActionBandageTarget);
        AddAction(ActionBurnSewTarget);
		AddAction(ActionBurnSewSelf);
		AddAction(ActionBuryBody);
		AddAction(ActionBuryAshes);
		AddAction(ActionDigOutStash);
		AddAction(ActionDigInStash);
		AddAction(ActionFillObject);
		AddAction(ActionDigWorms);
    }

    override bool IsMeleeFinisher()
    {
        return true;
    }

    override void DecreaseHealth(string zoneName, string healthType, float value, bool auto_delete)
    {

    }
}
