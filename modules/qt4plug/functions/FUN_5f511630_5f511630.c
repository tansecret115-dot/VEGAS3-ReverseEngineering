/* Module: qt4plug.dll
   Function: FUN_5f511630
   Address: 5f511630
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f511630(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x3c) == 0) {
    iVar1 = FUN_5f5196a0(1);
    *(uint *)(param_1 + 0x3c) = (uint)(-1 < iVar1);
    return iVar1;
  }
  return param_1;
}


