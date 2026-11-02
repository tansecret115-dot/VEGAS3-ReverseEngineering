/* Module: mcplug.dll
   Function: FUN_0040bd10
   Address: 0040bd10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040bd10(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  uVar1 = param_1[5];
  uVar5 = param_1[4];
  if (uVar1 < uVar5) {
    uVar3 = param_1[6] - uVar5;
    if (param_2 <= uVar3) goto LAB_0040bd88;
    if ((uint)param_1[3] < uVar3) {
      return 0;
    }
    iVar2 = param_1[2];
    puVar6 = (undefined4 *)(iVar2 * uVar5 + *param_1);
    puVar7 = (undefined4 *)((param_1[3] - uVar3) * iVar2 + *param_1);
    for (uVar4 = iVar2 * uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar5 = iVar2 * uVar3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    uVar5 = param_1[3] - uVar3;
    param_1[4] = uVar5;
  }
  if (uVar1 < param_2 + uVar5) {
    return 0;
  }
LAB_0040bd88:
  return param_1[2] * uVar5 + *param_1;
}


