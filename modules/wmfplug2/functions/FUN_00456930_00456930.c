/* Module: wmfplug2.dll
   Function: FUN_00456930
   Address: 00456930
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00456930(int *param_1,int *param_2,int param_3,int *param_4,int *param_5,int param_6,
            uint param_7)

{
  ushort uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  undefined1 *puVar14;
  undefined1 local_c [12];
  
  puVar14 = local_c;
  uVar4 = FUN_004309a0((int)param_1);
  uVar2 = FUN_00430c30(uVar4,puVar14);
  puVar14 = local_c;
  uVar4 = FUN_004309a0((int)param_4);
  uVar3 = FUN_00430c30(uVar4,puVar14);
  if (CONCAT31(extraout_var,uVar2) != CONCAT31(extraout_var_00,uVar3)) {
    return 0x80004001;
  }
  uVar8 = param_1[2];
  if (uVar8 != param_4[2]) {
    return 0x80004001;
  }
  iVar9 = param_1[1];
  if (iVar9 != param_4[1]) {
    return 0x80004001;
  }
  iVar5 = iVar9 * CONCAT31(extraout_var,uVar2);
  uVar6 = (int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3;
  if (param_3 == 0) {
    uVar7 = (uint)*(ushort *)((int)param_1 + 0xe) * iVar9 + 0x1f;
    param_3 = (int)((uVar7 & 0xffffffe0) + ((int)uVar7 >> 0x1f & 7U)) >> 3;
  }
  if (param_6 == 0) {
    uVar7 = (uint)*(ushort *)((int)param_4 + 0xe) * param_4[1] + 0x1f;
    param_6 = (int)((uVar7 & 0xffffffe0) + ((int)uVar7 >> 0x1f & 7U)) >> 3;
  }
  uVar7 = (uint)(param_7 == (~param_4[2] & 1U));
  if (param_2 == (int *)0x0) {
    if (param_1[4] == 0) {
      if (((param_1[8] != 0) || (uVar1 = *(ushort *)((int)param_1 + 0xe), uVar1 == 0)) ||
         (8 < uVar1)) goto LAB_00456a3e;
      iVar9 = 1 << ((byte)uVar1 & 0x1f);
    }
    else {
      if (param_1[4] == 3) {
        param_2 = param_1 + 0xd;
        goto LAB_00456a4c;
      }
LAB_00456a3e:
      iVar9 = param_1[8];
    }
    param_2 = (int *)((int)param_1 + *param_1 + iVar9 * 4);
  }
LAB_00456a4c:
  piVar11 = (int *)(uVar7 * param_3 + (int)param_2);
  if (param_5 != (int *)0x0) goto LAB_00456a97;
  if (param_4[4] == 0) {
    if (((param_4[8] != 0) || (uVar1 = *(ushort *)((int)param_4 + 0xe), uVar1 == 0)) || (8 < uVar1))
    goto LAB_00456a8c;
    iVar9 = 1 << ((byte)uVar1 & 0x1f);
  }
  else {
    if (param_4[4] == 3) {
      param_5 = param_4 + 0xd;
      goto LAB_00456a97;
    }
LAB_00456a8c:
    iVar9 = param_4[8];
  }
  param_5 = (int *)(*param_4 + iVar9 * 4 + (int)param_4);
LAB_00456a97:
  piVar10 = (int *)(uVar7 * param_6 + (int)param_5);
  if ((int)uVar7 < (int)uVar8) {
    param_4 = (int *)((uVar8 - uVar7) + 1 >> 1);
    do {
      piVar12 = piVar10;
      piVar13 = piVar11;
      for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *piVar13 = *piVar12;
        piVar12 = piVar12 + 1;
        piVar13 = piVar13 + 1;
      }
      piVar11 = (int *)((int)piVar11 + param_3 * 2);
      for (uVar8 = uVar6 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(char *)piVar13 = (char)*piVar12;
        piVar12 = (int *)((int)piVar12 + 1);
        piVar13 = (int *)((int)piVar13 + 1);
      }
      piVar10 = (int *)((int)piVar10 + param_6 * 2);
      param_4 = (int *)((int)param_4 + -1);
    } while (param_4 != (int *)0x0);
  }
  return 0;
}


