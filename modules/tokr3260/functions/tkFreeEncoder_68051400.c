/* Module: tokr3260.dll
   Function: tkFreeEncoder
   Address: 68051400
   Source: Ghidra pseudocode (Stage 10 batch) */


void tkFreeEncoder(int param_1)

{
  int iVar1;
  uint uVar2;
  
                    /* 0x1400  8  tkFreeEncoder */
  if (param_1 != 0) {
    if (*(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0) {
      iVar1 = *(int *)(param_1 + 4);
      *(int *)(param_1 + 4) = iVar1 + 1;
      uVar2 = FUN_68053420((double *)0x0,*(undefined4 **)(param_1 + 0xc),(int *)(param_1 + 0x14),0,
                           iVar1);
      while (uVar2 == 0) {
        iVar1 = *(int *)(param_1 + 4);
        *(int *)(param_1 + 4) = iVar1 + 1;
        uVar2 = FUN_68053420((double *)0x0,*(undefined4 **)(param_1 + 0xc),(int *)(param_1 + 0x14),0
                             ,iVar1);
      }
      free(*(void **)(param_1 + 0xc));
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    FUN_68053400(param_1 + 0x14);
    if (*(void **)(param_1 + 0x10) != (void *)0x0) {
      free(*(void **)(param_1 + 0x10));
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}


