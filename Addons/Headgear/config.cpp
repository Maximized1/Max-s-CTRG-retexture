class CfgPatches
{
	class MAX_CTRG_HEADGEAR_RESKIN
	{
		addonRootClass="MAX_CTRG_UNIFORM_RESKIN";
		requiredAddons[]=
		{
			"A3_Characters_F_Exp"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Headgear_H_HelmetB_TI_urban_F",
			"Headgear_H_HelmetB_TI_winter_F"
		};
		weapons[]=
		{
			"H_HelmetB_TI_urban_F",
			"H_HelmetB_TI_winter_F"
		};
	};
};
class CfgVehicles
{
	class Headgear_Base_F;
	class Headgear_H_HelmetB_TI_urban_F: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Stealth Combat Helmet (Urban)";
		author="Maximized";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		class TransportItems
		{
			class H_HelmetB_TI_urban_F
			{
				name="H_HelmetB_TI_urban_F";
				count=1;
			};
		};
	};
	class Headgear_H_HelmetB_TI_winter_F: Headgear_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Stealth Combat Helmet (Winter)";
		author="Maximized";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Helmets";
		vehicleClass="ItemsHeadgear";
		class TransportItems
		{
			class H_HelmetB_TI_winter_F
			{
				name="H_HelmetB_TI_winter_F";
				count=1;
			};
		};
	};
};
class CfgWeapons
{
	class HeadgearItem;
	class ItemCore;
	class H_HelmetB: ItemCore
	{
		class ItemInfo;
	};
	class H_HelmetB_TI_urban_F: H_HelmetB
	{
		author="Maximized";
		_generalMacro="H_HelmetB_TI_tna_F";
		displayName="Stealth Combat Helmet (Urban)";
		picture="\CTRG_Reskin\Headgear\Data\UI\icon_H_HelmetB_TI_urban_F_ca.paa";
		model="\A3\Characters_F_Exp\BLUFOR\H_HelmetB_TI_tna_F.p3d";
		DLC="Expansion";
		descriptionShort="$STR_A3_SP_AL_II";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\CTRG_Reskin\Headgear\Data\H_HelmetB_TI_urban_F_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Characters_F_Exp\BLUFOR\Data\H_HelmetB_TI_tna_F.rvmat"
		};
		class ItemInfo: HeadgearItem
		{
			mass=50;
			uniformModel="\A3\Characters_F_Exp\BLUFOR\H_HelmetB_TI_tna_F.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			modelSides[]={0,3};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=4;
					passThrough=0.5;
				};
			};
		};
	};
	class H_HelmetB_TI_winter_F: H_HelmetB
	{
		author="Maximized";
		_generalMacro="H_HelmetB_TI_tna_F";
		displayName="Stealth Combat Helmet (Winter)";
		picture="\CTRG_Reskin\Headgear\Data\UI\icon_H_HelmetB_TI_winter_F_ca.paa";
		model="\A3\Characters_F_Exp\BLUFOR\H_HelmetB_TI_tna_F.p3d";
		DLC="Expansion";
		descriptionShort="$STR_A3_SP_AL_II";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\CTRG_Reskin\Headgear\Data\H_HelmetB_TI_winter_F_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Characters_F_Exp\BLUFOR\Data\H_HelmetB_TI_tna_F.rvmat"
		};
		class ItemInfo: HeadgearItem
		{
			mass=50;
			uniformModel="\A3\Characters_F_Exp\BLUFOR\H_HelmetB_TI_tna_F.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			modelSides[]={0,3};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=4;
					passThrough=0.5;
				};
			};
		};
	};
};