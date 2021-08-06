class CfgPatches
{
	class MAX_CTRG_VEST_RESKIN
	{
		addonRootClass="MAX_CTRG_UNIFORM_RESKIN";
		requiredAddons[]=
		{
			"A3_Characters_F"
		};
		requiredVersion=0.1;
		weapons[]=
		{
			"V_PlateCarrier1_winter",
			"V_PlateCarrier2_winter"
		};
	};
};
class cfgWeapons
{
	class ItemCore;
	class VestItem;
	class Vest_Camo_Base: ItemCore
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="Vest_Camo_Base";
		scope=0;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		picture="\A3\characters_f\Data\UI\icon_V_BandollierB_CA.paa";
		model="\A3\Weapons_F\Ammo\mag_univ.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		descriptionShort="$STR_A3_SP_NOARMOR";
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_bandolier";
			hiddenSelections[]=
			{
				"camo"
			};
			containerClass="Supply0";
			mass=0;
		};
	};
	class V_PlateCarrier1_winter: Vest_Camo_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="V_PlateCarrier1_winter";
		scope=2;
		picture="\CTRG_Reskin\Vest\Data\UI\icon_V_plate_carrier_1_winter_CA.paa";
		displayName="Carrier Lite (Winter)";
		hiddenSelectionsTextures[]=
		{
			"\CTRG_Reskin\Vest\Data\vests_winter_co.paa"
		};
		model="\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
		descriptionShort="$STR_A3_SP_AL_III";
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
			containerClass="Supply140";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class V_PlateCarrier2_winter: V_PlateCarrier1_winter
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="V_PlateCarrier2_blk";
		scope=2;
		displayName="Carrier Rig (Winter)";
		picture="\CTRG_Reskin\Vest\Data\UI\icon_V_plate_carrier_2_winter_CA.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\CTRG_Reskin\Vest\Data\vests_winter_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass="Supply140";
			mass=100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=20;
					PassThrough=0.2;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=20;
					PassThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=20;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
	};
};