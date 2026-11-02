/* Module: sftrkfx1.dll
   Function: FUN_5cba9d80
   Address: 5cba9d80
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5cba9d80(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int local_8 [2];
  
  iVar4 = param_2 + 0x30;
  if ((*(uint *)(param_2 + 0x28) < 6) && (uVar3 = 0, *(uint *)(param_2 + 0x28) != 0)) {
    do {
      FUN_5cba9850(param_1,param_2,iVar4,local_8);
      if (param_3 == local_8[0]) goto LAB_5cba9dd4;
      if (param_3 < local_8[0]) break;
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x20;
    } while (uVar3 < *(uint *)(param_2 + 0x28));
    if ((uVar3 != 0) && (uVar1 = *(uint *)(param_2 + 0x28), uVar1 < *(uint *)(param_2 + 0x2c))) {
      if (uVar3 <= uVar1) {
        iVar4 = (uVar1 - uVar3) + 1;
        puVar6 = (undefined4 *)(uVar1 * 0x20 + param_2 + 0x30);
        do {
          iVar4 = iVar4 + -1;
          puVar5 = puVar6 + -8;
          puVar7 = puVar6;
          for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar7 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar7 = puVar7 + 1;
          }
          puVar6 = puVar6 + -8;
        } while (iVar4 != 0);
      }
      *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + 1;
      iVar4 = *(int *)(param_1 + 0x60);
      if (iVar4 != 0) {
        uVar1 = *(uint *)(param_1 + 0x5c);
        if (uVar1 < uVar3) {
          if (uVar3 < uVar1 + iVar4) {
            *(int *)(param_1 + 0x60) = iVar4 + 1;
          }
        }
        else {
          *(uint *)(param_1 + 0x5c) = uVar1 + 1;
        }
      }
      FUN_5cba9930(param_1,param_2,param_3,param_4,(int *)(uVar3 * 0x20 + param_2 + 0x30));
      return uVar3;
    }
  }
LAB_5cba9dd4:
  MessageBeep(0);
  return 0xffffffff;
}


