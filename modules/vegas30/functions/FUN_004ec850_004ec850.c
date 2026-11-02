/* Module: vegas30.exe
   Function: FUN_004ec850
   Address: 004ec850
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004ec850(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_4;
  
  local_4 = 0;
  iVar1 = FUN_004ec280(&local_4,param_1,0,0,0,0xffffffff,0xffffffff,param_2,param_3,0,0,0);
  if (-1 < iVar1) {
    iVar1 = FUN_004ec630(local_4,0,0,0);
    FUN_004ec820(local_4);
  }
  return iVar1;
}


