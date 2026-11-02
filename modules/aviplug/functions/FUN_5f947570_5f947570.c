/* Module: aviplug.dll
   Function: FUN_5f947570
   Address: 5f947570
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f947570(int param_1)

{
  int iVar1;
  
  InterlockedDecrement((LONG *)(param_1 + 0x19c));
  iVar1 = *(LONG *)(param_1 + 0x19c);
  if (iVar1 == 0) {
    FUN_5f933cb0();
  }
  (**(code **)(**(int **)(param_1 + 4) + 8))(*(int **)(param_1 + 4));
  return iVar1;
}


