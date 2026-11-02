/* Module: vegas30.exe
   Function: FUN_004ec8b0
   Address: 004ec8b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004ec8b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_4;
  
  local_4 = 0;
  iVar1 = FUN_004ec280(&local_4,param_1,0,0,0,0xffffffff,0xffffffff,param_2,param_3,0,0,0);
  if (-1 < iVar1) {
    iVar1 = FUN_004ec630(local_4,0,param_4,0);
    FUN_004ec820(local_4);
  }
  return iVar1;
}


