/* Module: rmme3260.dll
   Function: FUN_66232450
   Address: 66232450
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66232450(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (*(int *)(param_1 + 0x10) == 0) {
    *(byte *)(iVar1 + 0x6c) = *(byte *)(iVar1 + 0x6c) & 0xfd;
    (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 0x91) + 4))();
    FUN_66231130(*(void **)(param_1 + 0xc));
  }
  else {
    (**(code **)(**(int **)(iVar1 + 0x91) + 4))();
    FUN_66230fe0(*(int *)(param_1 + 0xc));
  }
  (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 0x91) + 8))();
  return 0;
}


