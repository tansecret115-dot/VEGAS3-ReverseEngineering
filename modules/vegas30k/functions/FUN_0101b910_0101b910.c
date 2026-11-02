/* Module: vegas30k.dll
   Function: FUN_0101b910
   Address: 0101b910
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0101b910(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int local_4;
  
  local_4 = 0;
  iVar1 = FUN_0101b950(param_1,param_2,param_3,&local_4);
  if ((-1 < iVar1) && (local_4 != 0)) {
    FUN_0101bbd0(param_1,param_2,param_3);
  }
  return;
}


