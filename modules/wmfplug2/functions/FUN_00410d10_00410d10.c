/* Module: wmfplug2.dll
   Function: FUN_00410d10
   Address: 00410d10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00410d10(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x220) + 1;
  *(int *)(param_1 + 0x220) = iVar1;
  return iVar1;
}


