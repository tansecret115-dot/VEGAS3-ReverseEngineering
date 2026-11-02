/* Module: vidcap30.exe
   Function: FUN_0054e9d0
   Address: 0054e9d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0054e9d0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  *(undefined4 *)(param_1 + 0x6c) = param_2;
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0xfc) + 1;
  do {
    iVar2 = FUN_0054f750((undefined4 *)(param_1 + 0x6c),0);
    if (iVar2 != 0) {
      pcVar4 = *(char **)(param_1 + 0x84);
      if (pcVar4 == (char *)0x0) {
        pcVar4 = "zlib error";
      }
      FUN_00549540(param_1,pcVar4);
    }
    if (*(int *)(param_1 + 0x7c) == 0) {
      FUN_0054c8c0(param_1,*(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xa8));
      *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0xa4);
      *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0xa8);
    }
  } while (*(int *)(param_1 + 0x70) != 0);
  if (*(int *)(param_1 + 0xe0) != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0xe4);
    *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe0);
    *(undefined4 *)(param_1 + 0xe0) = uVar1;
  }
  FUN_0054d9c0(param_1);
  uVar3 = *(int *)(param_1 + 0x146) + 1;
  *(uint *)(param_1 + 0x146) = uVar3;
  if ((*(uint *)(param_1 + 0x142) != 0) && (*(uint *)(param_1 + 0x142) <= uVar3)) {
    FUN_0052b5a0(param_1);
  }
  return;
}


