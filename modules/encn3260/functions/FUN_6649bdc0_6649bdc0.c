/* Module: encn3260.dll
   Function: FUN_6649bdc0
   Address: 6649bdc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6649bdc0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (*(int *)(param_1 + 0x10) == 0) {
    *(byte *)(iVar1 + 0x6c) = *(byte *)(iVar1 + 0x6c) & 0xfd;
    (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 0x91) + 4))();
    FUN_6649aab0(*(void **)(param_1 + 0xc));
  }
  else {
    (**(code **)(**(int **)(iVar1 + 0x91) + 4))();
    FUN_6649a960(*(int *)(param_1 + 0xc));
  }
  (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 0x91) + 8))();
  return 0;
}


