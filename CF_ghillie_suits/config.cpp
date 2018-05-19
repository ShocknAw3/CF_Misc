class CfgPatches
{
	class CF_ghillie_suits
	{
		// Meta information for editor
		name = "CF_ghillie_suits";
		author = "Shock";
		url = "http://www.charliefoxtrotops.eu/";
 
		// Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game.
		requiredVersion = 1.80; 
		// Required addons, used for setting load order.
		// When any of the addons is missing, pop-up warning will appear when launching the game.
		requiredAddons[] = {"A3_Data_F", "A3_Weapons_F", "A3_Characters_F", "A3_Characters_F_BLUFOR"};
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content unlocking.
		units[] = {"B_cf_dummy_ghillie_mc", "B_cf_dummy_ghillie_wl", "B_cf_dummy_ghillie_d", "B_cf_dummy_ghillie_a"};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {"U_mas_usn_B_GhillieSuit", "U_mas_usn_B_GhillieSuit_v", "U_mas_usn_B_GhillieSuit_d", "U_mas_usn_B_GhillieSuit_w"};
	};
};

//Every uniform has to be attached to a unit, because BI is dumb. So first we create a bunch of  dummy units that won't ever be used to attach these uniforms to.
class CfgVehicles {
	class B_sniper_F;	// External class reference
	class O_sniper_F;	// External class reference
	
	
	//BLUFOR dummy units
	class B_cf_dummy_ghillie_mc : B_sniper_F {
		author = "Charlie Foxtrot";
		scope = 1;
		displayName = "Dummy ghillie unit (MC)";
		uniformClass = "U_mas_usn_B_GhillieSuit";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\CF_ghillie_suits\Blufor\clothing1_co.paa"};
	};
	
	class B_cf_dummy_ghillie_wl : B_cf_dummy_ghillie_mc {
		displayName = "Dummy ghillie unit (WL)";
		uniformClass = "U_mas_usn_B_GhillieSuit_v";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\CF_ghillie_suits\Blufor\clothing1_ct.paa"};
	};
	
	class B_cf_dummy_ghillie_d : B_cf_dummy_ghillie_mc {
		displayName = "Dummy ghillie unit (D)";
		uniformClass = "U_mas_usn_B_GhillieSuit_d";
		hiddenSelections[] = {"Camo", "Camo3", "insignia"};
		hiddenSelectionsTextures[] = {"\CF_ghillie_suits\Blufor\clothing1_cf.paa", "\CF_ghillie_suits\Blufor\ghillie_mcamo_cd.paa"};
	};
	
	class B_cf_dummy_ghillie_a : B_cf_dummy_ghillie_mc {
		displayName = "Dummy ghillie unit (A)";
		uniformClass = "U_mas_usn_B_GhillieSuit_a";
		hiddenSelections[] = {"Camo", "Camo3", "insignia"};
		hiddenSelectionsTextures[] = {"\CF_ghillie_suits\Blufor\clothing1_cw.paa", "\CF_ghillie_suits\Blufor\ghillie_mcamo_cw.paa"};
	};
	
	//OPFOR dummy units
	class O_cf_dummy_ghillie_b : O_sniper_F {
		scope = 1;
		author = "Charlie Foxtrot";
		displayName = "Dummy ghillie unit (Base)";
		model = "A3\Characters_F_Beta\INDEP\ia_sniper.p3d";
		uniformClass = "U_mas_rus_O_GhillieSuit";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\CF_ghillie_suits\Opfor\ia_soldier_01_cx.paa"};
		
		class Wounds {
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat", "A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat", "A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_old.rvmat", "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat", "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat", "A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat", "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat", "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
	};
	
	class O_cf_dummy_ghillie_wl : O_cf_dummy_ghillie_b {
		uniformClass = "U_mas_rus_O_GhillieSuit_v";
		displayName = "Dummy ghillie unit (WD)";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"\CF_ghillie_suits\Opfor\ia_soldier_01_cz.paa"};
	};
	
	class O_cf_dummy_ghillie_d : O_cf_dummy_ghillie_b {
		uniformClass = "U_mas_rus_O_GhillieSuit_d";
		displayName = "Dummy ghillie unit (D)";
		hiddenSelections[] = {"Camo", "Camo3", "insignia"};
		hiddenSelectionsTextures[] = {"\CF_ghillie_suits\Opfor\ia_soldier_01_cd.paa", "\CF_ghillie_suits\Opfor\ghillie_woodland_cd.paa"};
	};
	
	class O_cf_dummy_ghillie_a : O_cf_dummy_ghillie_b {
		uniformClass = "U_mas_rus_O_GhillieSuit_w";
		displayName = "Dummy ghillie unit (A)";
		hiddenSelections[] = {"Camo", "Camo3", "insignia"};
		hiddenSelectionsTextures[] = {"\CF_ghillie_suits\Opfor\ia_soldier_01_ww.paa", "\CF_ghillie_suits\Opfor\ghillie_woodland_cw.paa"};
	};
};

class CfgWeapons {
	class UniformItem;	// External class reference
	class U_B_GhillieSuit;	// External class reference
	class U_O_GhillieSuit;	// External class reference
	
//BLUFOR ghillie suits
	class U_mas_usn_B_GhillieSuit : U_B_GhillieSuit {
		scope = 2;
		author = "massi & authors in credits";
		displayName = "US Ghillie Suit Multi";
		picture = "\CF_ghillie_suits\Blufor\icon_U_B_ghillie_mcam_ca.paa";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "B_cf_dummy_ghillie_mc";
			containerClass = "Supply80";
			mass = 80;
		};
	};
	
	class U_mas_usn_B_GhillieSuit_v : U_mas_usn_B_GhillieSuit {
		displayName = "US Ghillie Suit Wood";
		picture = "\CF_ghillie_suits\Blufor\icon_U_B_ghillie_veg_ca.paa";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "B_cf_dummy_ghillie_wl";
			containerClass = "Supply80";
			mass = 80;
		};
	};
	
	class U_mas_usn_B_GhillieSuit_d : U_mas_usn_B_GhillieSuit {
		displayName = "US Ghillie Suit Des";
		picture = "\CF_ghillie_suits\Blufor\icon_U_B_ghillie_des_ca.paa";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "B_cf_dummy_ghillie_d";
			containerClass = "Supply80";
			mass = 80;
		};
	};
	
	class U_mas_usn_B_GhillieSuit_w : U_mas_usn_B_GhillieSuit {
		displayName = "US Ghillie Suit Arctic";
		picture = "\CF_ghillie_suits\Blufor\icon_U_B_ghillie_wint_ca.paa";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "B_cf_dummy_ghillie_a";
			containerClass = "Supply80";
			mass = 80;
		};
	};
	
//OPFOR Ghillie suits
	class U_mas_rus_O_GhillieSuit : U_O_GhillieSuit {
		scope = 2;
		author = "massi & authors in credits";
		displayName = "Rus Ghillie Suit Digit";
		picture = "\CF_ghillie_suits\Opfor\icon_U_B_ghillie_mcam_ca.paa";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "O_cf_dummy_ghillie_b";
			containerClass = "Supply80";
			mass = 80;
		};
	};
	
	class U_mas_rus_O_GhillieSuit_v : U_mas_rus_O_GhillieSuit {
		displayName = "Rus Ghillie Suit Klmk";
		picture = "\CF_ghillie_suits\Opfor\icon_U_B_ghillie_veg_ca.paa";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "O_cf_dummy_ghillie_wl";
			containerClass = "Supply80";
			mass = 80;
		};
	};
	
	class U_mas_rus_O_GhillieSuit_d : U_mas_rus_O_GhillieSuit {
		displayName = "Rus Ghillie Suit Gorka-D";
		picture = "\CF_ghillie_suits\Opfor\icon_U_B_ghillie_des_ca.paa";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "O_cf_dummy_ghillie_d";
			containerClass = "Supply80";
			mass = 80;
		};
	};
	
	class U_mas_rus_O_GhillieSuit_w : U_mas_rus_O_GhillieSuit {
		displayName = "Rus Ghillie Suit Arctic";
		picture = "\CF_ghillie_suits\Opfor\icon_U_B_ghillie_wint_ca.paa";
		
		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "O_cf_dummy_ghillie_a";
			containerClass = "Supply80";
			mass = 80;
		};
	};
};