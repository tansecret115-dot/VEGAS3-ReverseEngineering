/* Module: oggplug.dll
   Function: FUN_004315d0
   Address: 004315d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_004315d0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x68);
  iVar2 = *(int *)(param_1 + 4);
  if (*(void **)(iVar4 + 0x3c) != (void *)0x0) {
    free(*(void **)(iVar4 + 0x3c));
  }
  *(undefined4 *)(iVar4 + 0x3c) = 0;
  if (*(void **)(iVar4 + 0x40) != (void *)0x0) {
    free(*(void **)(iVar4 + 0x40));
  }
  *(undefined4 *)(iVar4 + 0x40) = 0;
  if (*(void **)(iVar4 + 0x44) != (void *)0x0) {
    free(*(void **)(iVar4 + 0x44));
  }
  *(undefined4 *)(iVar4 + 0x44) = 0;
  if (*(int *)(param_1 + 0x10) <= *(int *)(param_1 + 0x14) + param_2) {
    iVar4 = 0;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x14) + param_2 * 2;
    if (0 < *(int *)(iVar2 + 4)) {
      do {
        pvVar3 = realloc(*(void **)(*(int *)(param_1 + 8) + iVar4 * 4),*(int *)(param_1 + 0x10) << 2
                        );
        *(void **)(*(int *)(param_1 + 8) + iVar4 * 4) = pvVar3;
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(iVar2 + 4));
    }
  }
  iVar4 = 0;
  if (0 < *(int *)(iVar2 + 4)) {
    do {
      iVar1 = iVar4 * 4;
      iVar4 = iVar4 + 1;
      *(int *)(*(int *)(param_1 + 0xc) + -4 + iVar4 * 4) =
           *(int *)(*(int *)(param_1 + 8) + iVar1) + *(int *)(param_1 + 0x14) * 4;
    } while (iVar4 < *(int *)(iVar2 + 4));
  }
  return *(undefined4 *)(param_1 + 0xc);
}


