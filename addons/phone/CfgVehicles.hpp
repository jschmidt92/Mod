class CfgVehicles {
    class Item_Base_F;
    class SOF_Item_Phone: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        author = "SOF";
        displayName = "Phone";
        vehicleClass = "Items";

        class TransportItems {
            MACRO_ADDITEM(SOF_Phone,1);
        };
    };
};