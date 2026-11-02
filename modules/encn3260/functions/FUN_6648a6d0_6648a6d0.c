/* Module: encn3260.dll
   Function: FUN_6648a6d0
   Address: 6648a6d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_6648a6d0(int param_1)

{
  int iVar1;
  
  (**(code **)(**(int **)(param_1 + 0x1a0) + 4))();
  *(undefined4 *)(*(int *)(param_1 + 0x70) + 0x1c) = 1;
  iVar1 = FUN_6648bed0(*(void **)(param_1 + 0x70),param_1);
  (**(code **)(**(int **)(param_1 + 0x1a0) + 8))();
  return iVar1;
}


