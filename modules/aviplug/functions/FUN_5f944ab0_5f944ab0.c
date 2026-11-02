/* Module: aviplug.dll
   Function: FUN_5f944ab0
   Address: 5f944ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f944ab0(int param_1)

{
  int iVar1;
  
  InterlockedDecrement((LONG *)(param_1 + 0x1a0));
  iVar1 = *(LONG *)(param_1 + 0x1a0);
  if (iVar1 == 0) {
    FUN_5f933cb0();
  }
  (**(code **)(**(int **)(param_1 + 4) + 8))(*(int **)(param_1 + 4));
  return iVar1;
}


