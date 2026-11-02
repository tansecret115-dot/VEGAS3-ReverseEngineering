/* Module: wmfplug2.dll
   Function: FUN_00410bc0
   Address: 00410bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00410bc0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18) + 1;
  *(int *)(param_1 + 0x18) = iVar1;
  return iVar1;
}


