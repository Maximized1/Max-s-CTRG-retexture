class CfgPatches
{
	class MAX_CTRG_FACEWEAR_RESKIN
	{
		addonRootClass="MAX_CTRG_UNIFORM_RESKIN";
		requiredAddons[]=
		{
			"A3_Characters_F_Exp"
		};
		requiredVersion=0.1;
		weapons[]=
		{
			"G_Balaclava_TI_urban_F",
			"G_Balaclava_TI_winter_F"
		};
	};
};
class CfgGlasses
{
	class none;
	class G_Balaclava_TI_urban_F: none
	{
		author="Maximized";
		_generalMacro="G_Balaclava_TI_urban_F";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="Stealth Balaclava (Urban)";
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
		picture="\CTRG_Reskin\Facewear\Data\UI\icon_G_Balaclava_TI_urban_F_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\CTRG_Reskin\Facewear\Data\G_Balaclava_TI_urban_F_co.paa"
		};
		identityTypes[]={};
		mass=6;
		DLC="Expansion";
	};
	class G_Balaclava_TI_winter_F: G_Balaclava_TI_urban_F
	{
		author="Maximized";
		_generalMacro="G_Balaclava_TI_winter_F";
		displayName="Stealth Balaclava (Winter)";
		picture="\CTRG_Reskin\Facewear\Data\UI\icon_G_Balaclava_TI_winter_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\CTRG_Reskin\Facewear\Data\G_Balaclava_TI_winter_F_co.paa"
		};
		identityTypes[]={};
		mass=6;
		DLC="Expansion";
	};
	class G_Balaclava_TI_G_urban_F: G_Balaclava_TI_urban_F
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="G_Balaclava_TI_G_urban_F";
		displayName="Stealth Balaclava (Urban, Goggles)";
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
		picture="\CTRG_Reskin\Facewear\Data\UI\icon_G_Balaclava_TI_G_urban_F_ca.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\CTRG_Reskin\Facewear\Data\G_Balaclava_TI_urban_F_co.paa",
			"\CTRG_Reskin\Facewear\Data\G_Combat_Goggles_urban_F_ca.paa"
		};
		identityTypes[]={};
		mass=10;
		DLC="Expansion";
	};
	class G_Balaclava_TI_G_winter_F: G_Balaclava_TI_urban_F
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="G_Balaclava_TI_G_winter_F";
		displayName="Stealth Balaclava (Winter, Goggles)";
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
		picture="\CTRG_Reskin\Facewear\Data\UI\icon_G_Balaclava_TI_G_winter_F_ca.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\CTRG_Reskin\Facewear\Data\G_Balaclava_TI_winter_F_co.paa",
			"\CTRG_Reskin\Facewear\Data\G_Combat_Goggles_winter_F_ca.paa"
		};
		identityTypes[]={};
		mass=10;
		DLC="Expansion";
	};
};