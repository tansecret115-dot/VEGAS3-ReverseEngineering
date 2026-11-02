/* Module: sfcdi.dll
   Function: FUN_5bf44bf0
   Address: 5bf44bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5bf44bf0(uint param_1)

{
  uint uVar1;
  
  if ((param_1 != 0) && (DAT_5bf65dcc == 0)) {
    uVar1 = FUN_5bf44eb0();
    if (uVar1 != 0) {
      DAT_5bf65dc0 = uVar1 / 1000;
      DAT_5bf65dc4 = DAT_5bf65dc0 / 1000;
      DAT_5bf65dbc = uVar1 / DAT_5bf65dc4;
      if (DAT_5bf65dbc == 1000000) {
        DAT_5bf65dbc = 0;
      }
      _DAT_5bf65dc8 = 1000;
      PTR_FUN_5bf65dd8 = &LAB_5bf44cd0;
      PTR_LAB_5bf65ddc = FUN_5bf44d00;
      PTR_FUN_5bf65de0 = FUN_5bf44d70;
      PTR_FUN_5bf65de4 = FUN_5bf44dc0;
      PTR_FUN_5bf65de8 = FUN_5bf44df0;
      PTR_FUN_5bf65dec = FUN_5bf44e60;
      DAT_5bf65dcc = 1;
      _DAT_5bf65db8 = uVar1;
    }
    (*(code *)PTR_FUN_5bf65de4)(&DAT_5bf65dd0);
    if (4 < param_1) {
      FUN_5bf44ed0();
    }
  }
  return;
}


