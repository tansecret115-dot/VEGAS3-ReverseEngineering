/* Module: sfs4rw.dll
   Function: FUN_00479b90
   Address: 00479b90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00479b90(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte local_c [4];
  undefined1 local_8 [4];
  undefined1 local_4;
  
  if (1 < param_4) {
    FUN_00475b00((int)param_1,"Unrecognized unit type for pHYs chunk");
  }
  FUN_004787a0(local_c,param_2);
  FUN_004787a0(local_8,param_3);
  local_4 = (undefined1)param_4;
  FUN_00478820(param_1,(byte *)&DAT_004a6e5c,local_c,9);
  return;
}


