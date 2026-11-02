/* Module: mcplugrw.dll
   Function: FUN_00444750
   Address: 00444750
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00444750(int *param_1,int *param_2,int *param_3,LONG *param_4,int param_5,int *param_6,
            int *param_7,LONG *param_8,int param_9,int param_10)

{
  ushort uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  undefined1 local_24 [4];
  tagRECT local_20;
  tagRECT local_10;
  
  piVar13 = param_1;
  for (iVar8 = 0x24; iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar13 = 0;
    piVar13 = piVar13 + 1;
  }
  iVar8 = FUN_0043f800((int)param_6);
  if (iVar8 < 0x10) {
    return 0;
  }
  if (0x20 < iVar8) {
    return 0;
  }
  if (param_7 == (int *)0x0) {
    if (param_6[4] == 0) {
      if (((param_6[8] != 0) || (uVar1 = *(ushort *)((int)param_6 + 0xe), uVar1 == 0)) ||
         (8 < uVar1)) goto LAB_004447c4;
      iVar5 = *param_6 + (1 << ((byte)uVar1 & 0x1f)) * 4;
    }
    else {
      if (param_6[4] == 3) {
        param_7 = param_6 + 0xd;
        goto LAB_004447ce;
      }
LAB_004447c4:
      iVar5 = *param_6 + param_6[8] * 4;
    }
    param_7 = (int *)(iVar5 + (int)param_6);
  }
LAB_004447ce:
  if (param_9 == 0) {
    uVar4 = (uint)*(ushort *)((int)param_6 + 0xe) * param_6[1] + 0x1f;
    param_9 = (int)((uVar4 & 0xffffffe0) + ((int)uVar4 >> 0x1f & 7U)) >> 3;
  }
  FUN_00442ce0((int)param_2,&local_20,param_4,(int)param_6,&local_10,param_8,
               (LPRECT)(param_1 + 0x1e));
  iVar5 = local_10.right - local_10.left;
  iVar9 = local_10.bottom - local_10.top;
  if (iVar5 < 1) {
    return 0;
  }
  if (iVar9 < 1) {
    return 0;
  }
  iVar6 = FUN_0043f800((int)param_2);
  if (iVar6 < 0x10) {
    return 0;
  }
  if (0x20 < iVar6) {
    return 0;
  }
  if (param_3 != (int *)0x0) goto LAB_004448a9;
  if (param_2[4] == 0) {
    if (((param_2[8] != 0) || (uVar1 = *(ushort *)((int)param_2 + 0xe), uVar1 == 0)) || (8 < uVar1))
    goto LAB_0044489f;
    iVar10 = *param_2 + (1 << ((byte)uVar1 & 0x1f)) * 4;
  }
  else {
    if (param_2[4] == 3) {
      param_3 = param_2 + 0xd;
      goto LAB_004448a9;
    }
LAB_0044489f:
    iVar10 = *param_2 + param_2[8] * 4;
  }
  param_3 = (int *)(iVar10 + (int)param_2);
LAB_004448a9:
  if (param_5 == 0) {
    uVar4 = (uint)*(ushort *)((int)param_2 + 0xe) * param_2[1] + 0x1f;
    param_5 = (int)((uVar4 & 0xffffffe0) + ((int)uVar4 >> 0x1f & 7U)) >> 3;
  }
  iVar12 = local_20.right - local_20.left;
  iVar10 = local_20.bottom - local_20.top;
  if (((0 < iVar12) && (0 < iVar10)) &&
     (((iVar6 != 0x17 && (iVar6 != 0x18)) ||
      (iVar7 = FUN_00440460(param_1 + 0x1d,param_2), iVar7 == 0)))) {
    if ((iVar5 == iVar12) && (iVar9 == iVar10)) {
      iVar7 = 0;
    }
    else {
      iVar7 = 1;
    }
    *param_1 = iVar7;
    param_1[1] = 0;
    param_1[2] = 0;
    if (iVar7 == 0) {
      iVar7 = 0x4000;
      param_1[3] = 0x4000;
    }
    else {
      if (iVar12 < 2) {
        param_1[3] = iVar5 * 0x4000 + -0x4000;
      }
      else {
        param_1[3] = (iVar5 * 0x4000 + -0x4000) / (iVar12 + -1);
      }
      if (iVar10 < 2) {
        iVar7 = iVar9 * 0x4000 + -0x4000;
      }
      else {
        iVar7 = (iVar9 * 0x4000 + -0x4000) / (iVar10 + -1);
      }
    }
    param_1[4] = iVar7;
    uVar2 = FUN_0043fa90(iVar8,local_24);
    uVar3 = FUN_0043fa90(iVar6,local_24);
    param_1[5] = (int)param_2;
    uVar4 = CONCAT31(extraout_var_00,uVar3) * local_20.left;
    param_1[6] = (int)param_3;
    uVar11 = uVar4 & 0x80000007;
    param_1[7] = (int)param_3 +
                 ((int)(uVar4 + ((int)uVar4 >> 0x1f & 7U)) >> 3) +
                 (param_2[2] - local_20.bottom) * param_5;
    if ((int)uVar11 < 0) {
      uVar11 = (uVar11 - 1 | 0xfffffff8) + 1;
    }
    param_1[8] = uVar11;
    param_1[9] = local_20.left;
    param_1[10] = local_20.top;
    param_1[0xb] = local_20.right;
    param_1[0xe] = iVar10;
    param_1[0xc] = local_20.bottom;
    param_1[0xd] = iVar12;
    param_1[0xf] = param_5;
    if (param_2[8] == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *param_2 + (int)param_2;
    }
    uVar4 = CONCAT31(extraout_var,uVar2) * local_10.left;
    param_1[0x10] = iVar8;
    param_1[0x11] = (int)param_6;
    param_1[0x12] = (int)param_7;
    uVar11 = uVar4 & 0x80000007;
    param_1[0x13] =
         (int)param_7 +
         ((int)(uVar4 + ((int)uVar4 >> 0x1f & 7U)) >> 3) + (param_6[2] - local_10.bottom) * param_9;
    if ((int)uVar11 < 0) {
      uVar11 = (uVar11 - 1 | 0xfffffff8) + 1;
    }
    param_1[0x14] = uVar11;
    param_1[0x15] = local_10.left;
    param_1[0x16] = local_10.top;
    param_1[0x17] = local_10.right;
    param_1[0x1a] = iVar9;
    param_1[0x18] = local_10.bottom;
    param_1[0x19] = iVar5;
    param_1[0x1b] = param_9;
    if (param_6[8] == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *param_6 + (int)param_6;
    }
    param_1[0x1c] = iVar8;
    param_1[0x22] = param_10;
    return 1;
  }
  return 0;
}


