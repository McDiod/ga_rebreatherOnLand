class CfgPatches {
	class ga_rebreatherOnLand {

		name = "GA rebreatherOnLand";
		author = "McDiod";

		requiredVersion = 1.0;
		requiredAddons[] = {};

		units[] = {};
		weapons[] = {};
	};
};

class cfgGlasses {
	class None;
	class G_GA_OxygenMask : None {
		displayName = "Oxygen Mask";
		author = "Gruppe Adler";
		model = "\A3\characters_f\Heads\glasses\g_diving";
		picture = "\A3\characters_F\data\ui\icon_G_Diving_CA.paa";
		identityTypes[] = {"NoGlasses", 0, "G_NATO_default", 0, "G_NATO_casual", 0, "G_NATO_pilot", 0, "G_NATO_recon", 0, "G_NATO_SF", 0, "G_NATO_sniper", 0, "G_NATO_diver", 1000, "G_IRAN_default", 0, "G_IRAN_diver", 1000, "G_GUERIL_default", 0, "G_HAF_default", 0, "G_CIVIL_female", 0, "G_CIVIL_male", 0};
		mass = 3;
	};
};

class cfgWeapons {
	class VestItem;
	class Vest_Camo_Base;

	class V_GA_OxygenTank : Vest_Camo_Base {
		access = 3;
		scope = 2;
		canShootInWater = 1;
		selectionFireAnim = "zasleh";
		type = 701;
		nameSound = "";
		displayName = "Oxygen Tank";
		author = "Gruppe Adler";
		picture = "\A3\characters_f\Data\UI\icon_V_RebreatherB_CA.paa";
		model = "\A3\Characters_F\Common\equip_rebreather";
		hiddenSelections[] = {"camo","hide","unhide","unhide2"};
		hiddenSelectionsTextures[] = {"\A3\characters_f\common\data\diver_equip_nato_co.paa","\A3\characters_f\common\data\diver_equip_nato_co.paa","\A3\characters_f\data\visors_ca.paa"};


		class ItemInfo : VestItem {
			uniformModel = "\A3\Characters_F\Common\equip_rebreather";
			vestType = "Rebreather";
			containerClass = "Supply0";
			mass = 80;
			armor = 20;
			passThrough = 1;
			hiddenSelections[] = {"camo","hide","unhide","unhide2"};
			hiddenSelectionsTextures[] = {"\A3\characters_f\common\data\diver_equip_nato_co.paa","\A3\characters_f\common\data\diver_equip_nato_co.paa","\A3\characters_f\data\visors_ca.paa"};
		};
	};
};
