/* Module: tokr3260.dll
   Function: FUN_68051950
   Address: 68051950
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_68051950(int param_1)

{
  void *pvVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      pvVar1 = *(void **)(*(int *)(*(int *)(param_1 + 0x48) + iVar2 * 4) + 0xf218);
      if (pvVar1 != (void *)0x0) {
        free(pvVar1);
      }
      pvVar1 = *(void **)(*(int *)(param_1 + 0x48) + iVar2 * 4);
      if (pvVar1 != (void *)0x0) {
        free(pvVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  FUN_68051ad0(param_1);
  iVar2 = FUN_68059a80(*(int **)(param_1 + 0x54),*(size_t *)(param_1 + 8));
  if (iVar2 == -999999) {
    return 0xfff0bdc1;
  }
  FUN_68057bb0(param_1);
  FUN_68053830(0,1);
  FUN_68053ae0(0,1);
  FUN_68053ba0(0,1);
  if (*(void **)(param_1 + 0x48) != (void *)0x0) {
    free(*(void **)(param_1 + 0x48));
  }
  if (*(void **)(param_1 + 0x54) != (void *)0x0) {
    free(*(void **)(param_1 + 0x54));
  }
  if (*(void **)(param_1 + 0x58) != (void *)0x0) {
    free(*(void **)(param_1 + 0x58));
  }
  return 0;
}


