modded class ActionDestroyPartCB
{
	override void CreateActionComponent()
	{
        if(m_ActionData.m_MainItem.Type() == SchanaAdminOmniTool)
        {
            m_ActionData.m_ActionComponent = new CAContinuousTime( 0.2 );
        }
        else
        {
            m_ActionData.m_ActionComponent = new CAContinuousTime( UATimeSpent.DEFAULT_DESTROY );
        }
	}
};
