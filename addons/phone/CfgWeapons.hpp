class CfgWeapons {
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;
    class SOF_Phone: ACE_ItemCore {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        author = "SOF";
        displayName = "Phone";
        picture = QPATHTOF(images\mobile_frame.paa);
        model = QPATHTOF(data\sof_mobile.p3d);
        descriptionShort = "SOF's in-house cell phone for text-messaging and more.";
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0;
        };
    };
};