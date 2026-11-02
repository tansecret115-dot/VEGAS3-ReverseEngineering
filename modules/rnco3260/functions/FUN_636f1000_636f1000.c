/* Module: rnco3260.dll
   Function: FUN_636f1000
   Address: 636f1000
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_636f1000(undefined1 *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  
  if (param_3 < 0) {
    uVar4 = param_3 * -0x20 + 0x1fU >> 3 & 0x1ffffffc;
    uVar2 = -uVar4;
    puVar3 = (undefined1 *)(((param_4 - param_6) + -1) * uVar4 + param_2 + param_5 * 4);
  }
  else {
    uVar2 = param_3 * 0x20 + 0x1fU >> 3 & 0x1ffffffc;
    puVar3 = (undefined1 *)(uVar2 * param_6 + param_2 + param_5 * 4);
  }
  if (param_9 < 0) {
    param_1 = param_1 + -((param_8 + -1) * param_9);
  }
  if (0 < param_8) {
    param_6 = param_8;
    do {
      iVar5 = param_7;
      if (0 < param_7) {
        do {
          *param_1 = *puVar3;
          param_1[1] = puVar3[1];
          puVar1 = puVar3 + 2;
          puVar3 = puVar3 + 4;
          param_1[2] = *puVar1;
          param_1 = param_1 + 3;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      param_1 = param_1 + param_9 + param_7 * -3;
      puVar3 = puVar3 + uVar2 + param_7 * -4;
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  return 1;
}


