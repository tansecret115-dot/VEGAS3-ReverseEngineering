/* Module: oggplug.dll
   Function: FUN_00433960
   Address: 00433960
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_00433960(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    if ((void *)param_1[5] != (void *)0x0) {
      free((void *)param_1[5]);
    }
    if ((void *)param_1[6] != (void *)0x0) {
      free((void *)param_1[6]);
    }
    if ((void *)param_1[7] != (void *)0x0) {
      free((void *)param_1[7]);
    }
    if (param_1[2] != 0) {
      iVar1 = 0;
      do {
        iVar2 = 0;
        do {
          free(*(void **)(*(int *)(param_1[2] + iVar1) + iVar2));
          iVar2 = iVar2 + 4;
        } while (iVar2 < 0x2c);
        free(*(void **)(param_1[2] + iVar1));
        iVar1 = iVar1 + 4;
      } while (iVar1 < 0x44);
      free((void *)param_1[2]);
      free((void *)param_1[4]);
    }
    for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
  }
  return;
}


