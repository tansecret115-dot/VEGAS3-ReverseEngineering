/* Module: tokr3260.dll
   Function: FUN_68057bb0
   Address: 68057bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_68057bb0(int param_1)

{
  void *pvVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    FUN_680579c0(1,7,*(int *)(*(int *)(param_1 + 0x40) + iVar2));
    pvVar1 = *(void **)(*(int *)(param_1 + 0x40) + iVar2);
    if (pvVar1 != (void *)0x0) {
      free(pvVar1);
    }
    iVar2 = iVar2 + 4;
  } while (iVar2 < 8);
  iVar2 = 0;
  do {
    FUN_680579c0(1,7,*(int *)(*(int *)(param_1 + 0x44) + iVar2));
    pvVar1 = *(void **)(*(int *)(param_1 + 0x44) + iVar2);
    if (pvVar1 != (void *)0x0) {
      free(pvVar1);
    }
    iVar2 = iVar2 + 4;
  } while (iVar2 < 8);
  if (*(void **)(param_1 + 0x40) != (void *)0x0) {
    free(*(void **)(param_1 + 0x40));
  }
  if (*(void **)(param_1 + 0x44) != (void *)0x0) {
    free(*(void **)(param_1 + 0x44));
  }
  return;
}


