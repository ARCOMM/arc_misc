
    class ItemCore;
    class cwr3_b_vest_base: ItemCore
    {
        class ItemInfo;
    };
    class cwr3_b_vest_pasgt_oliveDrab: cwr3_b_vest_base
    {
        author = "drofseh";
        descriptionShort = "$STR_A3_SP_AL_II";
        displayName = "PASGT Vest (OD)";
        hiddenSelections[] = {"hs_vest1"};
        hiddenSelectionsTextures[] = {"\cwr3\humans\cwr3_soldiers_usa\vests\data\pasgt_vest_od_co.paa"};
        model = "\cwr3\humans\cwr3_soldiers_usa\vests\cwr3_pasgt_woodland.p3d";
        picture = "\cwr3\humans\cwr3_soldiers_usa\ui\cwr3_v_pasgt_woodland_ca.paa";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        class ItemInfo: ItemInfo
        {
            containerClass = "Supply60";
            armor = 10;
            hiddenSelections[] = {"hs_vest1"};
            mass = 55;
            passThrough = 0.5;
            uniformModel = "\cwr3\humans\cwr3_soldiers_usa\vests\cwr3_pasgt_woodland.p3d";
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    armor = 12;
                    HitpointName = "HitChest";
                    PassThrough = 0.4;
                };
                class Diaphragm
                {
                    armor = 12;
                    HitpointName = "HitDiaphragm";
                    PassThrough = 0.4;
                };
                class Abdomen
                {
                    armor = 12;
                    hitpointName = "HitAbdomen";
                    passThrough = 0.4;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.4;
                };
            };
        };
    };
    class cwr3_b_vest_pasgt_alice_oliveDrab: cwr3_b_vest_pasgt_oliveDrab
    {
        author = "drofseh";
        displayName = "PASGT Vest ALICE (OD, Rifleman)";
        hiddenSelections[] = {"hs_vest1","hs_vest2"};
        hiddenSelectionsTextures[] = {"\cwr3\humans\cwr3_soldiers_usa\vests\data\pasgt_vest_od_co.paa","\cwr3\humans\cwr3_soldiers_usa\vests\data\ssgear_alice_co.paa"};
        model = "\cwr3\humans\cwr3_soldiers_usa\vests\cwr3_pasgt_alice_woodland.p3d";
        picture = "\cwr3\humans\cwr3_soldiers_usa\ui\cwr3_v_pasgt_alice_woodland_ca.paa";
        class ItemInfo: ItemInfo
        {
            containerClass = "Supply140";
            hiddenSelections[] = {"hs_vest1","hs_vest2"};
            uniformModel = "\cwr3\humans\cwr3_soldiers_usa\vests\cwr3_pasgt_alice_woodland.p3d";
        };
    };
    class cwr3_b_vest_pasgt_alice_oliveDrab_etool: cwr3_b_vest_pasgt_alice_oliveDrab
    {
        author = "drofseh";
        displayName = "PASGT Vest ALICE (OD, E-Tool)";
        hiddenSelections[] = {"hs_vest1","hs_vest2"};
        hiddenSelectionsTextures[] = {"\cwr3\humans\cwr3_soldiers_usa\vests\data\pasgt_vest_od_co.paa","\cwr3\humans\cwr3_soldiers_usa\vests\data\ssgear_alice_co.paa"};
        model = "\cwr3\humans\cwr3_soldiers_usa\vests\cwr3_pasgt_alice_etool_woodland.p3d";
        class ItemInfo: ItemInfo
        {
            containerClass = "Supply120";
            hiddenSelections[] = {"hs_vest1","hs_vest2"};
            uniformModel = "\cwr3\humans\cwr3_soldiers_usa\vests\cwr3_pasgt_alice_etool_woodland.p3d";
        };
    };
    class cwr3_b_vest_pasgt_alice_oliveDrab_ar: cwr3_b_vest_pasgt_alice_oliveDrab
    {
        author = "drofseh";
        displayName = "PASGT Vest ALICE (OD, Autorifleman)";
        hiddenSelections[] = {"hs_vest1","hs_vest2"};
        hiddenSelectionsTextures[] = {"\cwr3\humans\cwr3_soldiers_usa\vests\data\pasgt_vest_od_co.paa","\cwr3\humans\cwr3_soldiers_usa\vests\data\ssgear_alice_co.paa"};
        model = "\cwr3\humans\cwr3_soldiers_usa\vests\cwr3_pasgt_alice_ar_woodland.p3d";
        class ItemInfo: ItemInfo
        {
            containerClass = "Supply160";
            hiddenSelections[] = {"hs_vest1","hs_vest2"};
            uniformModel = "\cwr3\humans\cwr3_soldiers_usa\vests\cwr3_pasgt_alice_ar_woodland.p3d";
        };
    };
    class cwr3_b_vest_pasgt_alice_oliveDrab_gl: cwr3_b_vest_pasgt_alice_oliveDrab
    {
        author = "drofseh";
        displayName = "PASGT Vest ALICE (OD, Grenadier)";
        hiddenSelections[] = {"hs_vest1","hs_vest2","hs_vest3"};
        hiddenSelectionsTextures[] = {"\cwr3\humans\cwr3_soldiers_usa\vests\data\pasgt_vest_od_co.paa","\cwr3\humans\cwr3_soldiers_usa\vests\data\ssgear_alice_co.paa","\cwr3\humans\cwr3_soldiers_usa\vests\data\gear_nadevest_co.paa"};
        model = "\cwr3\humans\cwr3_soldiers_usa\vests\cwr3_pasgt_alice_grenadier_woodland.p3d";
        picture = "\cwr3\humans\cwr3_soldiers_usa\ui\cwr3_v_pasgt_alice_gl_woodland_ca.paa";
        class ItemInfo: ItemInfo
        {
            containerClass = "Supply220";
            hiddenSelections[] = {"hs_vest1","hs_vest2","hs_vest3"};
            uniformModel = "\cwr3\humans\cwr3_soldiers_usa\vests\cwr3_pasgt_alice_grenadier_woodland.p3d";
        };
    };
    class cwr3_b_vest_pasgt_alice_oliveDrab_mg: cwr3_b_vest_pasgt_alice_oliveDrab
    {
        author = "drofseh";
        displayName = "PASGT Vest ALICE (OD, Machinegunner)";
        hiddenSelections[] = {"hs_vest1","hs_vest2"};
        hiddenSelectionsTextures[] = {"\cwr3\humans\cwr3_soldiers_usa\vests\data\pasgt_vest_od_co.paa","\cwr3\humans\cwr3_soldiers_usa\vests\data\ssgear_alice_co.paa"};
        model = "\cwr3\humans\cwr3_soldiers_usa\vests\cwr3_pasgt_alice_mg_woodland.p3d";
        picture = "\cwr3\humans\cwr3_soldiers_usa\ui\cwr3_v_pasgt_alice_woodland_mg_ca.paa";
        class ItemInfo: ItemInfo
        {
            containerClass = "Supply160";
            hiddenSelections[] = {"hs_vest1","hs_vest2"};
            uniformModel = "\cwr3\humans\cwr3_soldiers_usa\vests\cwr3_pasgt_alice_mg_woodland.p3d";
        };
    };
    class cwr3_b_vest_pasgt_alice_oliveDrab_officer: cwr3_b_vest_pasgt_alice_oliveDrab
    {
        author = "drofseh";
        displayName = "PASGT Vest ALICE (OD, Officer)";
        hiddenSelections[] = {"hs_vest1","hs_vest2","hs_vest3"};
        hiddenSelectionsTextures[] = {"\cwr3\humans\cwr3_soldiers_usa\vests\data\pasgt_vest_od_co.paa","\cwr3\humans\cwr3_soldiers_usa\vests\data\ssgear_alice_co.paa","\cwr3\humans\cwr3_soldiers_usa\vests\data\ssgear_frame_co.paa"};
        model = "\cwr3\humans\cwr3_soldiers_usa\vests\cwr3_pasgt_alice_officer_woodland.p3d";
        picture = "\cwr3\humans\cwr3_soldiers_usa\ui\cwr3_v_pasgt_alice_woodland_officer_ca.paa";
        class ItemInfo: ItemInfo
        {
            containerClass = "Supply120";
            hiddenSelections[] = {"hs_vest1","hs_vest2","hs_vest3"};
            uniformModel = "\cwr3\humans\cwr3_soldiers_usa\vests\cwr3_pasgt_alice_officer_woodland.p3d";
        };
    };
    class cwr3_b_vest_pasgt_alice_oliveDrab_light: cwr3_b_vest_pasgt_alice_oliveDrab
    {
        author = "drofseh";
        displayName = "PASGT Vest ALICE (OD, Light)";
        hiddenSelections[] = {"hs_vest1","hs_vest2"};
        hiddenSelectionsTextures[] = {"\cwr3\humans\cwr3_soldiers_usa\vests\data\pasgt_vest_od_co.paa","\cwr3\humans\cwr3_soldiers_usa\vests\data\ssgear_alice_co.paa"};
        model = "\cwr3\humans\cwr3_soldiers_usa\vests\cwr3_pasgt_alice_medic_woodland.p3d";
        picture = "\cwr3\humans\cwr3_soldiers_usa\ui\cwr3_v_pasgt_alice_woodland_med_ca.paa";
        class ItemInfo: ItemInfo
        {
            containerClass = "Supply120";
            hiddenSelections[] = {"hs_vest1","hs_vest2"};
            uniformModel = "\cwr3\humans\cwr3_soldiers_usa\vests\cwr3_pasgt_alice_medic_woodland.p3d";
        };
    };
    class cwr3_b_vest_pasgt_alice_oliveDrab_medic: cwr3_b_vest_pasgt_alice_oliveDrab_light
    {
        author = "drofseh";
        scope = 1;
        displayName = "PASGT Vest ALICE (OD, Light)";
        hiddenSelections[] = {"hs_vest1","hs_vest2"};
        hiddenSelectionsTextures[] = {"\cwr3\humans\cwr3_soldiers_usa\vests\data\pasgt_vest_od_co.paa","\cwr3\humans\cwr3_soldiers_usa\vests\data\ssgear_alice_co.paa"};
        model = "\cwr3\humans\cwr3_soldiers_usa\vests\cwr3_pasgt_alice_medic_woodland.p3d";
        picture = "\cwr3\humans\cwr3_soldiers_usa\ui\cwr3_v_pasgt_alice_woodland_med_ca.paa";
        class ItemInfo: ItemInfo
        {
            containerClass = "Supply120";
            hiddenSelections[] = {"hs_vest1","hs_vest2"};
            uniformModel = "\cwr3\humans\cwr3_soldiers_usa\vests\cwr3_pasgt_alice_medic_woodland.p3d";
        };
    };