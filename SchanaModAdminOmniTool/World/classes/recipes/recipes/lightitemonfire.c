modded class LightItemOnFire extends RecipeBase
{
    override void Init()
    {
        InsertIngredient(0, "SchanaAdminOmniTool");
        InsertIngredient(1, "SchanaAdminOmniTool");

        super.Init();
    }
}