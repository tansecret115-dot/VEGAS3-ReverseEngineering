/* Module: aviplug.dll
   Function: FUN_5f972140
   Address: 5f972140
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f972140(uint *param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  int *piVar9;
  
  piVar9 = (int *)(param_2 + 8);
  param_1[1] = *(uint *)(param_2 + 4);
  uVar3 = (param_5 & 1) << 2 | *param_1 & 0xfffffffb;
  puVar8 = param_1 + 2;
  iVar4 = *piVar9;
  *param_1 = (uVar3 ^ param_4) & 3 ^ uVar3;
  iVar7 = 0;
  iVar5 = 0;
  if (iVar4 == 0x1556) {
    *puVar8 = 0x1556;
    param_1[3] = 0;
    return;
  }
  iVar1 = *(int *)(&DAT_5f9f52c8 + param_5 * 0x218);
  iVar2 = *(int *)(&DAT_5f9f52cc + param_5 * 0x218);
  do {
    iVar7 = iVar7 + 1 + iVar4;
    uVar6 = iVar5 + iVar4;
    uVar3 = piVar9[1] /
            *(int *)(&DAT_5f9dae78 +
                    *(int *)(iVar2 + *(int *)(iVar1 + iVar7 * 4) * 4) * 4 +
                    (param_4 + param_3 * 4) * 0x10);
    if (uVar3 == 0) {
      iVar5 = uVar6 + 1;
    }
    else {
      if (((int)uVar3 < *(int *)(&DAT_5f9e528c + uVar6 * 0x10)) ||
         (*(int *)(&DAT_5f9e5290 + uVar6 * 0x10) < (int)uVar3)) {
        puVar8[1] = 0;
        *puVar8 = uVar6 - 1;
        puVar8 = puVar8 + 2;
        uVar6 = 0;
      }
      *puVar8 = uVar6;
      puVar8[1] = uVar3;
      iVar5 = 0;
      puVar8 = puVar8 + 2;
    }
    iVar4 = piVar9[2];
    piVar9 = piVar9 + 2;
  } while (iVar4 != 0x1556);
  *puVar8 = 0x1556;
  puVar8[1] = 0;
  return;
}


