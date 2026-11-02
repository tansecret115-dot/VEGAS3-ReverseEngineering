/* Module: vegas30k.dll
   Function: FUN_011bf4c0
   Address: 011bf4c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011bf4c0(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0x3c))(*(int **)(param_1 + 0x18));
  if (-1 < iVar1) {
    *(uint *)(param_1 + 0xa0) = (uint)(iVar1 == 0);
  }
  return;
}


