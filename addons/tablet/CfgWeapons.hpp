class CfgWeapons {
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;
    class SOF_Tablet: ACE_ItemCore {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        author = "SOF";
        displayName = "Tablet";
        picture = QPATHTOF(images\getac_f110.paa);
        model = QPATHTOF(data\sof_tablet.p3d);
        descriptionShort = "SOF's in-house tablet for navigation, communication, and more.";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\getac_f110_co.paa)};

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0;
        };
    };
};