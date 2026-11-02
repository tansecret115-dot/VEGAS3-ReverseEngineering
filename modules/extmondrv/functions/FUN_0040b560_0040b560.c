/* Module: extmondrv.dll
   Function: FUN_0040b560
   Address: 0040b560
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0040b560(int param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_0040b5a0((undefined4 *)(param_1 + 0x34));
    iVar1 = (**(code **)(**(int **)(param_1 + 0x30) + 0x38))
                      (*(int **)(param_1 + 0x30),(undefined4 *)(param_1 + 0x34));
    if (-1 < iVar1) {
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
  }
  return iVar1;
}


