modded class ActionMineTreeCB
{
    override void CreateActionComponent()
	{
        if(m_ActionData.m_MainItem.Type() == SchanaAdminOmniTool)
        {
            m_ActionData.m_ActionComponent = new CAContinuousMineWood( 0.01 );
        }
        else
        {
            super.CreateActionComponent();
        }
	}
}
