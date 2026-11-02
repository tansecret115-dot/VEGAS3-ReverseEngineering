/* Module: oggplug.dll
   Function: FUN_004425f0
   Address: 004425f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_004425f0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  
  if (param_1 != (int *)0x0) {
    FUN_00430fb0(param_1 + 0x94);
    FUN_004313a0(param_1 + 0x78);
    FUN_00441080(param_1 + 0x1e);
    pcVar4 = free_exref;
    if ((param_1[0x12] != 0) && (param_1[0xd] != 0)) {
      iVar2 = 0;
      if (0 < param_1[0xd]) {
        iVar1 = 0;
        iVar3 = 0;
        do {
          FUN_00430070((undefined4 *)(iVar3 + param_1[0x12]));
          FUN_0042ffd0((int *)(param_1[0x13] + iVar1));
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 0x20;
          iVar1 = iVar1 + 0x10;
        } while (iVar2 < param_1[0xd]);
      }
      pcVar4 = free_exref;
      free((void *)param_1[0x12]);
      free((void *)param_1[0x13]);
    }
    if (param_1[0xf] != 0) {
      (*pcVar4)(param_1[0xf]);
    }
    if (param_1[0x11] != 0) {
      (*pcVar4)(param_1[0x11]);
    }
    if (param_1[0x10] != 0) {
      (*pcVar4)(param_1[0x10]);
    }
    if (param_1[0xe] != 0) {
      (*pcVar4)(param_1[0xe]);
    }
    FUN_004415e0(param_1 + 6);
    if (*param_1 != 0) {
      (*(code *)param_1[0xb2])(*param_1);
    }
    for (iVar2 = 0xb4; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
  }
  return 0;
}


