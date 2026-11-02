/* Module: tokr3260.dll
   Function: FUN_68052240
   Address: 68052240
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_68052240(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x48) + iVar3 * 4);
      pvVar2 = *(void **)(iVar1 + 0xf218);
      if (pvVar2 != (void *)0x0) {
        free(pvVar2);
      }
      pvVar2 = *(void **)(iVar1 + 0xf21c);
      if (pvVar2 != (void *)0x0) {
        free(pvVar2);
      }
      pvVar2 = *(void **)(*(int *)(param_1 + 0x48) + iVar3 * 4);
      if (pvVar2 != (void *)0x0) {
        free(pvVar2);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 8));
  }
  FUN_68051ad0(param_1);
  iVar3 = FUN_68059a80(*(int **)(param_1 + 0x4c),*(size_t *)(param_1 + 8));
  if (iVar3 != -999999) {
    FUN_68059910(*(int **)(param_1 + 0x50),*(int *)(param_1 + 8));
    FUN_68057bb0(param_1);
    FUN_68053830(0,1);
    FUN_68053a50(0,1);
    if (*(void **)(param_1 + 0x48) != (void *)0x0) {
      free(*(void **)(param_1 + 0x48));
    }
    if (*(void **)(param_1 + 0x4c) != (void *)0x0) {
      free(*(void **)(param_1 + 0x4c));
    }
    if (*(void **)(param_1 + 0x50) != (void *)0x0) {
      free(*(void **)(param_1 + 0x50));
    }
    return 0;
  }
  return 0xfff0bdc1;
}


