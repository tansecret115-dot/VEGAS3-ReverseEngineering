/* Module: wmfplug2.dll
   Function: FUN_00445d00
   Address: 00445d00
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00445d00(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10) + 1;
  *(int *)(param_1 + 0x10) = iVar1;
  return iVar1;
}


