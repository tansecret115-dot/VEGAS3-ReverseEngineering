/* Module: mp3plug.dll
   Function: FUN_5f6d2c10
   Address: 5f6d2c10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f6d2c10(void *param_1)

{
  int iVar1;
  
  if (param_1 != (void *)0x0) {
    iVar1 = 0;
    if (0 < *(int *)((int)param_1 + 0x60)) {
      do {
        FUN_5f6e0d00(*(void **)((int)param_1 + iVar1 * 4 + 0x40));
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)((int)param_1 + 0x60));
    }
    FUN_5f6e0e20(*(void **)((int)param_1 + 0x3c));
    FUN_5f6e1d60(*(void **)((int)param_1 + 0x54));
    FUN_5f6e3080(*(void **)((int)param_1 + 0x4c));
    FUN_5f6e2ef0(*(void **)((int)param_1 + 0x48));
    FUN_5f6e4570(*(void **)((int)param_1 + 0x58));
    FUN_5f6e4a20(*(undefined4 **)((int)param_1 + 0x50));
    if (*(void **)((int)param_1 + 0x70) != (void *)0x0) {
      free(*(void **)((int)param_1 + 0x70));
    }
    free(param_1);
  }
  return;
}


