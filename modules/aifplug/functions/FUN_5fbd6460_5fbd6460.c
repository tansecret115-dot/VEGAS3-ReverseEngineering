/* Module: aifplug.dll
   Function: FUN_5fbd6460
   Address: 5fbd6460
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5fbd6460(HANDLE param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0x464f524d;
  local_4 = param_2;
  uVar1 = FUN_5fbdbdb0(param_1,&local_8);
  if (-1 < (int)uVar1) {
    FUN_5fbdbe00(param_1,param_3);
  }
  return;
}


