/* Module: vidpcore.dll
   Function: FUN_5dee13f0
   Address: 5dee13f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_5dee13f0(int *param_1,int *param_2,int param_3,int *param_4,int *param_5,int param_6,
            uint param_7)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  undefined1 *puVar10;
  undefined1 local_c [12];
  
  puVar10 = local_c;
  uVar2 = FUN_5dec9ca0(param_1);
  iVar3 = FUN_5dec9f30(uVar2,puVar10);
  puVar10 = local_c;
  uVar2 = FUN_5dec9ca0(param_4);
  iVar4 = FUN_5dec9f30(uVar2,puVar10);
  if (iVar3 != iVar4) {
    return 0x80004001;
  }
  uVar7 = param_1[2];
  if (uVar7 != param_4[2]) {
    return 0x80004001;
  }
  iVar4 = param_1[1];
  if (iVar4 != param_4[1]) {
    return 0x80004001;
  }
  uVar5 = (int)(iVar4 * iVar3 + (iVar4 * iVar3 >> 0x1f & 7U)) >> 3;
  if (param_3 == 0) {
    uVar6 = (uint)*(ushort *)((int)param_1 + 0xe) * iVar4 + 0x1f;
    param_3 = (int)((uVar6 & 0xffffffe0) + ((int)uVar6 >> 0x1f & 7U)) >> 3;
  }
  if (param_6 == 0) {
    uVar6 = (uint)*(ushort *)((int)param_4 + 0xe) * param_4[1] + 0x1f;
    param_6 = (int)((uVar6 & 0xffffffe0) + ((int)uVar6 >> 0x1f & 7U)) >> 3;
  }
  uVar6 = (uint)(param_7 == (~param_4[2] & 1U));
  if (param_2 == (int *)0x0) {
    if (param_1[4] == 0) {
      if (((param_1[8] != 0) || (uVar1 = *(ushort *)((int)param_1 + 0xe), uVar1 == 0)) ||
         (8 < uVar1)) goto LAB_5dee14fe;
      iVar3 = 1 << ((byte)uVar1 & 0x1f);
    }
    else {
      if (param_1[4] == 3) {
        param_2 = param_1 + 0xd;
        goto LAB_5dee150c;
      }
LAB_5dee14fe:
      iVar3 = param_1[8];
    }
    param_2 = (int *)((int)param_1 + *param_1 + iVar3 * 4);
  }
LAB_5dee150c:
  param_2 = (int *)(uVar6 * param_3 + (int)param_2);
  if (param_5 != (int *)0x0) goto LAB_5dee1557;
  if (param_4[4] == 0) {
    if (((param_4[8] != 0) || (uVar1 = *(ushort *)((int)param_4 + 0xe), uVar1 == 0)) || (8 < uVar1))
    goto LAB_5dee154c;
    iVar3 = 1 << ((byte)uVar1 & 0x1f);
  }
  else {
    if (param_4[4] == 3) {
      param_5 = param_4 + 0xd;
      goto LAB_5dee1557;
    }
LAB_5dee154c:
    iVar3 = param_4[8];
  }
  param_5 = (int *)(*param_4 + iVar3 * 4 + (int)param_4);
LAB_5dee1557:
  param_5 = (int *)(uVar6 * param_6 + (int)param_5);
  if ((int)uVar6 < (int)uVar7) {
    param_4 = (int *)((uVar7 - uVar6) + 1 >> 1);
    do {
      piVar8 = param_5;
      piVar9 = param_2;
      for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *piVar9 = *piVar8;
        piVar8 = piVar8 + 1;
        piVar9 = piVar9 + 1;
      }
      param_2 = (int *)((int)param_2 + param_3 * 2);
      for (uVar7 = uVar5 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(char *)piVar9 = (char)*piVar8;
        piVar8 = (int *)((int)piVar8 + 1);
        piVar9 = (int *)((int)piVar9 + 1);
      }
      param_5 = (int *)((int)param_5 + param_6 * 2);
      param_4 = (int *)((int)param_4 - 1);
    } while (param_4 != (int *)0x0);
  }
  return 0;
}


