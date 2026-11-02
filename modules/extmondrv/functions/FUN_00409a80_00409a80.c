/* Module: extmondrv.dll
   Function: FUN_00409a80
   Address: 00409a80
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_00409a80(int param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00409ac0((int *)(param_1 + 0x34));
    iVar1 = (**(code **)(**(int **)(param_1 + 0x30) + 0x38))
                      (*(int **)(param_1 + 0x30),(int *)(param_1 + 0x34));
    if (-1 < iVar1) {
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
  }
  return iVar1;
}


