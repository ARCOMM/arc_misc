class CfgVehicles {
	// Fix backpack items
	class Bag_Base;
	class usm_pack_alice;
	class usm_pack_alice_medic: usm_pack_alice {
		scope = 1;
	};
	class usm_pack_alice_prc119: Bag_Base {
		delete TransportMagazines;
		scope = 1;
	};
	class usm_pack_alice_prc77: Bag_Base {
		displayName = "Field Pack, LC-1, Large, W/ Radio";
		delete TransportMagazines;
	};
	class usm_pack_m5_medic: Bag_Base {
		delete TransportMagazines;
	};
	class usm_pack_st138_prc77: Bag_Base {
		maximumLoad = 120;
		delete TransportMagazines;
	};
	class usm_pack_762x51_bandoliers: Bag_Base {
		delete TransportMagazines;
	};
	class usm_pack_200rnd_556_bandoliers: Bag_Base {
		delete TransportMagazines;
	};
	class usm_pack_762x51_ammobelts: Bag_Base {
		delete TransportMagazines;
	};

	// Hide units
	class usm_base_w;
	class usm_soldier: usm_base_w{
		scope = 1;
	};
	class usm_soldier_90s_d: usm_base_w {
		scope = 1;
	};
	class usm_soldier_80s_d: usm_base_w {
		scope = 1;
	};
	class usm_ranger: usm_base_w {
		scope = 1;
	};
	class usm_ranger_90s_d: usm_base_w {
		scope = 1;
	};
	class usm_airman_w: usm_base_w {
		scope = 1;
	};
	class usm_marine: usm_base_w {
		scope = 1;
	};
	class usm_marine_90s_d: usm_base_w {
		scope = 1;
	};
	class usm_sailor_w: usm_base_w {
		scope = 1;
	};
};
