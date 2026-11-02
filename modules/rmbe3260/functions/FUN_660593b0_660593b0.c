/* Module: rmbe3260.dll
   Function: FUN_660593b0
   Address: 660593b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_660593b0(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x30) = 1;
  iVar1 = (**(code **)(**(int **)(param_1 + 0x40) + 0x18))(*(int **)(param_1 + 0x40));
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*(int *)(param_1 + -0x10) + 0x2c))(param_1 + -0x10);
    if (-1 < iVar1) {
      (**(code **)(**(int **)(param_1 + 0x44) + 0x18))(*(int **)(param_1 + 0x44));
    }
  }
  return;
}


