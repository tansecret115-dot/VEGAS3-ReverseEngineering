/* Module: vegas30.exe
   Function: FUN_004346c0
   Address: 004346c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004346c0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0047c7d0(param_1,param_2);
  if (iVar1 != 0) {
    FUN_0047c810(param_1,param_2);
    return 1;
  }
  return 0;
}


