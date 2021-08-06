class CfgPatches
{
	class MAX_CTRG_UNIFORM_RESKIN
	{
		author="Maximized";
		name="Arma 3 Apex - Reskinned Clothing";
		url="https://www.arma3.com";
		requiredAddons[]=
		{
			"A3_Data_F_Exp"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_CTRG_Soldier_Urban_F",
			"B_CTRG_Soldier_Urban_2_F",
			"B_CTRG_Soldier_Urban_3_F",
			"B_CTRG_Soldier_Winter_F",
			"B_CTRG_Soldier_Winter_2_F",
			"B_CTRG_Soldier_Winter_3_F"
		};
		weapons[]=
		{
			"U_B_CTRG_Soldier_Urban_F",
			"U_B_CTRG_Soldier_Urban_2_F",
			"U_B_CTRG_Soldier_Urban_3_F",
			"U_B_CTRG_Soldier_Winter_F",
			"U_B_CTRG_Soldier_Winter_2_F",
			"U_B_CTRG_Soldier_Winter_3_F"
		};
	};
};
class CfgVehicles
{
	class Item_Base_F;
	class B_Soldier_base_F;
	class B_Soldier_F: B_Soldier_base_F
	{
		class EventHandlers;
	};
	class B_CTRG_Soldier_base_F: B_Soldier_base_F
	{
	};
	class B_CTRG_Soldier_F: B_CTRG_Soldier_base_F
	{
	};
	class B_CTRG_Soldier_urban_F: B_CTRG_Soldier_F
	{
		_generalMacro="B_CTRG_Soldier_urban_F";
		uniformClass="U_B_CTRG_Soldier_urban_F";
		hiddenSelectionsTextures[]=
		{
			"\CTRG_Reskin\Uniform\Data\u_b_ctrg_soldier_urban_f_co.paa"
		};
	};
	class B_CTRG_Soldier_winter_F: B_CTRG_Soldier_F
	{
		_generalMacro="B_CTRG_Soldier_winter_F";
		uniformClass="U_B_CTRG_Soldier_winter_F";
		hiddenSelectionsTextures[]=
		{
			"\CTRG_Reskin\Uniform\Data\u_b_ctrg_soldier_winter_f_co.paa"
		};
	};
	class B_CTRG_Soldier_2_F: B_CTRG_Soldier_base_F
	{
	};
	class B_CTRG_Soldier_urban_2_F: B_CTRG_Soldier_2_F
	{
		_generalMacro="B_CTRG_Soldier_2_F";
		uniformClass="U_B_CTRG_Soldier_urban_2_F";
		hiddenSelectionsTextures[]=
		{
			"\CTRG_Reskin\Uniform\Data\u_b_ctrg_soldier_urban_f_co.paa",
			"\CTRG_Reskin\Uniform\Data\u_bt_soldier_ar_f_urban_co.paa"
		};
	};
	class B_CTRG_Soldier_winter_2_F: B_CTRG_Soldier_2_F
	{
		_generalMacro="B_CTRG_Soldier_winter_2_F";
		uniformClass="U_B_CTRG_Soldier_winter_2_F";
		hiddenSelectionsTextures[]=
		{
			"\CTRG_Reskin\Uniform\Data\u_b_ctrg_soldier_winter_f_co.paa",
			"\CTRG_Reskin\Uniform\Data\u_bt_soldier_ar_f_winter_co.paa"
		};
	};
	class B_CTRG_Soldier_3_F: B_CTRG_Soldier_base_F
	{
	};
	class B_CTRG_Soldier_urban_3_F: B_CTRG_Soldier_3_F
	{
		_generalMacro="B_CTRG_Soldier_3_F";
		uniformClass="U_B_CTRG_Soldier_urban_3_F";
		hiddenSelectionsTextures[]=
		{
			"\CTRG_Reskin\Uniform\Data\u_b_ctrg_soldier_urban_f_co.paa"
		};
	};
	class B_CTRG_Soldier_winter_3_F: B_CTRG_Soldier_3_F
	{
		_generalMacro="B_CTRG_Soldier_winter_3_F";
		uniformClass="U_B_CTRG_Soldier_winter_3_F";
		hiddenSelectionsTextures[]=
		{
			"\CTRG_Reskin\Uniform\Data\u_b_ctrg_soldier_winter_f_co.paa"
		};
	};
	class Item_U_B_CTRG_Soldier_urban_F: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_U_B_CTRG_Soldier_F0";
		author="Maximized";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_B_CTRG_Soldier_urban_F
			{
				name="U_B_CTRG_Soldier_urban_F";
				count=1;
			};
		};
	};
	class Item_U_B_CTRG_Soldier_urban_2_F: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_U_B_CTRG_Soldier_F0";
		author="Maximized";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_B_CTRG_Soldier_urban_2_F
			{
				name="U_B_CTRG_Soldier_urban_2_F";
				count=1;
			};
		};
	};
	class Item_U_B_CTRG_Soldier_urban_3_F: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_U_B_CTRG_Soldier_F0";
		author="Maximized";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_B_CTRG_Soldier_urban_3_F
			{
				name="U_B_CTRG_Soldier_urban_3_F";
				count=1;
			};
		};
	};
	class Item_U_B_CTRG_Soldier_winter_F: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_U_B_CTRG_Soldier_F0";
		author="Maximized";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_B_CTRG_Soldier_winter_F
			{
				name="U_B_CTRG_Soldier_winter_F";
				count=1;
			};
		};
	};
	class Item_U_B_CTRG_Soldier_winter_2_F: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_U_B_CTRG_Soldier_F0";
		author="Maximized";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_B_CTRG_Soldier_winter_2_F
			{
				name="U_B_CTRG_Soldier_winter_2_F";
				count=1;
			};
		};
	};
	class Item_U_B_CTRG_Soldier_winter_3_F: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_U_B_CTRG_Soldier_F0";
		author="Maximized";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_B_CTRG_Soldier_winter_3_F
			{
				name="U_B_CTRG_Soldier_winter_3_F";
				count=1;
			};
		};
	};
};
class CfgWeapons
{
	class UniformItem;
	class Uniform_Base;
	class U_B_CTRG_Soldier_urban_F: Uniform_Base
	{
		author="Maximized";
		scope=2;
		displayName="CTRG Stealth Uniform (Urban)";
		picture="\CTRG_Reskin\Uniform\Data\UI\icon_CTRG_Stealth_Urban.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\CTRG_Reskin\Uniform\Data\u_b_ctrg_soldier_urban_f_co.paa"
		};
		DLC="Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_CTRG_Soldier_urban_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_B_CTRG_Soldier_urban_2_F: Uniform_Base
	{
		author="Maximized";
		scope=2;
		displayName="CTRG Stealth Uniform (Tee, Urban)";
		picture="\CTRG_Reskin\Uniform\Data\UI\icon_CTRG_Stealth_Urban_Tee.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\CTRG_Reskin\Uniform\Data\u_b_ctrg_soldier_urban_f_co.paa",
			"\CTRG_Reskin\Uniform\Data\u_bt_soldier_ar_f_urban_co.paa"
		};
		DLC="Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_CTRG_Soldier_urban_2_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_B_CTRG_Soldier_urban_3_F: Uniform_Base
	{
		author="Maximized";
		scope=2;
		displayName="CTRG Stealth Uniform (Rolled-Up, Urban)";
		picture="\CTRG_Reskin\Uniform\Data\UI\icon_CTRG_Stealth_Urban_Rolled_Up.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\CTRG_Reskin\Uniform\Data\u_b_ctrg_soldier_urban_f_co.paa"
		};
		DLC="Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_CTRG_Soldier_urban_3_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_B_CTRG_Soldier_winter_F: Uniform_Base
	{
		author="Maximized";
		scope=2;
		displayName="CTRG Stealth Uniform (Winter)";
		picture="\CTRG_Reskin\Uniform\Data\UI\icon_CTRG_Stealth_Winter.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\CTRG_Reskin\Uniform\Data\u_b_ctrg_soldier_winter_f_co.paa"
		};
		DLC="Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_CTRG_Soldier_winter_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_B_CTRG_Soldier_winter_2_F: Uniform_Base
	{
		author="Maximized";
		scope=2;
		displayName="CTRG Stealth Uniform (Tee, Winter)";
		picture="\CTRG_Reskin\Uniform\Data\UI\icon_CTRG_Stealth_Winter_Tee.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\CTRG_Reskin\Uniform\Data\u_b_ctrg_soldier_winter_f_co.paa",
			"\CTRG_Reskin\Uniform\Data\u_bt_soldier_ar_f_winter_co.paa"
		};
		DLC="Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_CTRG_Soldier_winter_2_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_B_CTRG_Soldier_winter_3_F: Uniform_Base
	{
		author="Maximized";
		scope=2;
		displayName="CTRG Stealth Uniform  Rolled-Up, Winter)";
		picture="\CTRG_Reskin\Uniform\Data\UI\icon_CTRG_Stealth_Winter_Rolled_Up.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\CTRG_Reskin\Uniform\Data\u_b_ctrg_soldier_winter_f_co.paa"
		};
		DLC="Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_CTRG_Soldier_winter_3_F";
			containerClass="Supply40";
			mass=40;
		};
	};
};