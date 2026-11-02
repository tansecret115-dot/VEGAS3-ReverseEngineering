/* Module: vegas30k.dll
   Function: FUN_0113a720
   Address: 0113a720
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0113a720(int param_1)

{
  int iVar1;
  
  (**(code **)(**(int **)(param_1 + 0x24) + 8))(*(int **)(param_1 + 0x24));
  *(undefined4 *)(param_1 + 0x24) = 0;
  iVar1 = (**(code **)(**(int **)(param_1 + 0x40) + 8))(*(int **)(param_1 + 0x40));
  while (iVar1 != 0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x40) + 8))(*(int **)(param_1 + 0x40));
  }
  return;
}


