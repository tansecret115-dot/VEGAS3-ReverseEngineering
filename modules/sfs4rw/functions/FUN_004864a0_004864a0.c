/* Module: sfs4rw.dll
   Function: FUN_004864a0
   Address: 004864a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004864a0(int param_1,char param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_00486560(param_1);
  if (*(char *)(param_1 + 0xc) == '\0') {
    FUN_00486540(param_1);
    **(undefined1 **)(param_1 + 0xd) = 0xff;
    iVar1 = *(int *)(param_1 + 0x11) + -1;
    *(int *)(param_1 + 0xd) = *(int *)(param_1 + 0xd) + 1;
    *(int *)(param_1 + 0x11) = iVar1;
    if (iVar1 == 0) {
      FUN_00486410(param_1);
    }
    **(char **)(param_1 + 0xd) = param_2 + -0x30;
    iVar1 = *(int *)(param_1 + 0x11) + -1;
    *(int *)(param_1 + 0xd) = *(int *)(param_1 + 0xd) + 1;
    *(int *)(param_1 + 0x11) = iVar1;
    if (iVar1 == 0) {
      FUN_00486410(param_1);
    }
  }
  if (*(int *)(*(int *)(param_1 + 0x1d) + 0x159) == 0) {
    iVar1 = 0;
    if (0 < *(int *)(*(int *)(param_1 + 0x1d) + 0x111)) {
      puVar2 = (undefined4 *)(param_1 + 0x21);
      do {
        *puVar2 = 0;
        iVar1 = iVar1 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar1 < *(int *)(*(int *)(param_1 + 0x1d) + 0x111));
      return;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x35) = 0;
    *(undefined4 *)(param_1 + 0x39) = 0;
  }
  return;
}


