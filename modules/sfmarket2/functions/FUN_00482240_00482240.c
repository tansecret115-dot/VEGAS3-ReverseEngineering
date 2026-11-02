/* Module: sfmarket2.dll
   Function: FUN_00482240
   Address: 00482240
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00482240(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte local_c [4];
  undefined1 local_8 [4];
  undefined1 local_4;
  
  if (1 < param_4) {
    FUN_0047e370((int)param_1,"Unrecognized unit type for oFFs chunk");
  }
  FUN_00481010(local_c,param_2);
  FUN_00481010(local_8,param_3);
  local_4 = (undefined1)param_4;
  FUN_00481090(param_1,(byte *)&DAT_004a86c8,local_c,9);
  return;
}


