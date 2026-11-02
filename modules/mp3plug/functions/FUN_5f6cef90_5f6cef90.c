/* Module: mp3plug.dll
   Function: FUN_5f6cef90
   Address: 5f6cef90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6cef90(void *param_1)

{
  int iVar1;
  
  if (param_1 != (void *)0x0) {
    if (*(void **)((int)param_1 + 0x14) != (void *)0x0) {
      free(*(void **)((int)param_1 + 0x14));
    }
    if (*(void **)((int)param_1 + 0x18) != (void *)0x0) {
      free(*(void **)((int)param_1 + 0x18));
    }
    if (*(int *)((int)param_1 + 0x1c) != 0) {
      iVar1 = 0;
      if (0 < *(int *)((int)param_1 + 0x10)) {
        do {
          FUN_5f6d3d00(*(void **)(*(int *)((int)param_1 + 0x1c) + iVar1 * 4));
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)((int)param_1 + 0x10));
      }
      free(*(void **)((int)param_1 + 0x1c));
    }
    free(param_1);
  }
  return;
}


