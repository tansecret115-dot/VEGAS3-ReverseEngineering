/* Module: vidcap30.exe
   Function: FUN_00568970
   Address: 00568970
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00568970(int param_1,char param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_00568a30(param_1);
  if (*(char *)(param_1 + 0xc) == '\0') {
    FUN_00568a10(param_1);
    **(undefined1 **)(param_1 + 0xd) = 0xff;
    iVar1 = *(int *)(param_1 + 0x11) + -1;
    *(int *)(param_1 + 0xd) = *(int *)(param_1 + 0xd) + 1;
    *(int *)(param_1 + 0x11) = iVar1;
    if (iVar1 == 0) {
      FUN_005688e0(param_1);
    }
    **(char **)(param_1 + 0xd) = param_2 + -0x30;
    iVar1 = *(int *)(param_1 + 0x11) + -1;
    *(int *)(param_1 + 0xd) = *(int *)(param_1 + 0xd) + 1;
    *(int *)(param_1 + 0x11) = iVar1;
    if (iVar1 == 0) {
      FUN_005688e0(param_1);
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


