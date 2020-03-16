modded class ActionMineRockCB
{
    override void CreateActionComponent()
	{
        if(m_ActionData.m_MainItem.Type() == SchanaAdminOmniTool)
        {
            m_ActionData.m_ActionComponent = new CAContinuousMineRock( 0.2 );
        }
        else
        {
            super.CreateActionComponent();
        }
	}
}
