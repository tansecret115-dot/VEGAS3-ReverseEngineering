/* Module: vegas30k.dll
   Function: FUN_0115b2c0
   Address: 0115b2c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0115b2c0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  *(undefined4 *)(param_1 + 0x6c) = param_2;
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0xfc) + 1;
  do {
    iVar2 = FUN_01149d50((undefined4 *)(param_1 + 0x6c),0);
    if (iVar2 != 0) {
      pcVar4 = *(char **)(param_1 + 0x84);
      if (pcVar4 == (char *)0x0) {
        pcVar4 = "zlib error";
      }
      FUN_01155f80(param_1,pcVar4);
    }
    if (*(int *)(param_1 + 0x7c) == 0) {
      FUN_011591b0(param_1,*(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xa8));
      *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0xa4);
      *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0xa8);
    }
  } while (*(int *)(param_1 + 0x70) != 0);
  if (*(int *)(param_1 + 0xe0) != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0xe4);
    *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe0);
    *(undefined4 *)(param_1 + 0xe0) = uVar1;
  }
  FUN_0115a2b0(param_1);
  uVar3 = *(int *)(param_1 + 0x146) + 1;
  *(uint *)(param_1 + 0x146) = uVar3;
  if ((*(uint *)(param_1 + 0x142) != 0) && (*(uint *)(param_1 + 0x142) <= uVar3)) {
    FUN_01127800(param_1);
  }
  return;
}


