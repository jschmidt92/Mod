class CfgVehicles {
    class Item_Base_F;
    class SOF_Item_Tablet: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        author = "SOF";
        displayName = "Tablet";
        vehicleClass = "Items";

        class TransportItems {
            MACRO_ADDITEM(SOF_Tablet,1);
        };
    };
};