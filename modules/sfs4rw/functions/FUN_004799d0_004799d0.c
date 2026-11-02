/* Module: sfs4rw.dll
   Function: FUN_004799d0
   Address: 004799d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004799d0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte local_c [4];
  undefined1 local_8 [4];
  undefined1 local_4;
  
  if (1 < param_4) {
    FUN_00475b00((int)param_1,"Unrecognized unit type for oFFs chunk");
  }
  FUN_004787a0(local_c,param_2);
  FUN_004787a0(local_8,param_3);
  local_4 = (undefined1)param_4;
  FUN_00478820(param_1,(byte *)&DAT_004a6e4c,local_c,9);
  return;
}


