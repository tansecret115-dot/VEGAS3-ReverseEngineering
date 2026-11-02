/* Module: rnco3260.dll
   Function: FUN_636f10d0
   Address: 636f10d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_636f10d0(undefined1 *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_3 < 0) {
    uVar2 = param_3 * -0x20 + 0x1fU >> 3 & 0x1ffffffc;
    uVar1 = -uVar2;
    iVar4 = ((param_4 - param_6) + -1) * uVar2 + param_2 + param_5 * 4;
  }
  else {
    uVar1 = param_3 * 0x20 + 0x1fU >> 3 & 0x1ffffffc;
    iVar4 = uVar1 * param_6 + param_2 + param_5 * 4;
  }
  if (param_9 < 0) {
    param_1 = param_1 + -((param_8 + -1) * param_9);
  }
  if (0 < param_8) {
    param_6 = param_8;
    do {
      iVar3 = iVar4;
      iVar5 = param_7;
      if (0 < param_7) {
        do {
          iVar4 = iVar3 + 4;
          *param_1 = *(undefined1 *)(iVar3 + 3);
          param_1[1] = *(undefined1 *)(iVar3 + 2);
          param_1[2] = *(undefined1 *)(iVar3 + 1);
          param_1 = param_1 + 3;
          iVar5 = iVar5 + -1;
          iVar3 = iVar4;
        } while (iVar5 != 0);
      }
      param_1 = param_1 + param_9 + param_7 * -3;
      iVar4 = iVar4 + uVar1 + param_7 * -4;
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  return 1;
}


