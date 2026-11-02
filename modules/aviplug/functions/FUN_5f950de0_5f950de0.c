/* Module: aviplug.dll
   Function: FUN_5f950de0
   Address: 5f950de0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f950de0(int param_1)

{
  int iVar1;
  
  InterlockedDecrement((LONG *)(param_1 + 4));
  iVar1 = *(LONG *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_5f94fa50(param_1 + 0xc);
    (**(code **)(**(int **)(param_1 + 8) + 0x20))(*(int **)(param_1 + 8),param_1);
    iVar1 = 0;
  }
  return iVar1;
}


