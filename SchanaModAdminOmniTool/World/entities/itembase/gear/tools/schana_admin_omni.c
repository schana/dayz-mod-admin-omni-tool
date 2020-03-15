class SchanaAdminOmniTool extends ToolBase
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

        AddAction(ActionMineRock1H);
        AddAction(ActionMineRock);
        AddAction(ActionMineBush);
        AddAction(ActionMineTree);
        AddAction(ActionSawPlanks);
        AddAction(ActionUnmountBarbedWire);
        AddAction(ActionDestroyCombinationLock);
        
        AddAction(ActionBandageTarget);
        AddAction(ActionGiveSalineTarget);
        AddAction(ActionBurnSewTarget);
		AddAction(ActionBurnSewSelf);
        AddAction(ActionSewTarget);
        AddAction(ActionSewSelf);

		//AddAction(ActionBuryBody);
		//AddAction(ActionBuryAshes);
		AddAction(ActionDigOutStash);
		AddAction(ActionDigInStash);
		AddAction(ActionFillObject);

        AddAction(ActionSkinning);
		AddAction(ActionDigWorms);
        AddAction(ActionClapBearTrapWithThisItem);
        AddAction(ActionLightItemOnFire);
        AddAction(ActionExtinguishFireplaceByExtinguisher);
    }

    override bool OnAction(int action_id, Man player, ParamsReadContext ctx)
    {
        this.SetHealth("", "", GetMaxHealth());
        return super.OnAction(action_id, player, ctx);
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
}
