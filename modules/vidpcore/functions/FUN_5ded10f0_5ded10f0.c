/* Module: vidpcore.dll
   Function: FUN_5ded10f0
   Address: 5ded10f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_5ded10f0(int *param_1,int *param_2,RECT *param_3,int param_4,undefined4 *param_5,
            undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,undefined4 param_9,
            undefined4 *param_10)

{
  ushort uVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 local_78 [4];
  code *local_74;
  int local_70;
  tagRECT local_6c;
  tagRECT local_5c;
  int *local_4c;
  int *local_48;
  int local_44;
  tagRECT *local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined4 local_8;
  undefined4 *local_4;
  
  pcVar2 = (code *)FUN_5dec9ca0(param_1);
  if ((int)pcVar2 < 0x17) {
    return 0x80004001;
  }
  if (0x20 < (int)pcVar2) {
    return 0x80004001;
  }
  if (param_2 != (int *)0x0) goto LAB_5ded116a;
  if (param_1[4] == 0) {
    if (((param_1[8] != 0) || (uVar1 = *(ushort *)((int)param_1 + 0xe), uVar1 == 0)) || (8 < uVar1))
    goto LAB_5ded1160;
    iVar5 = *param_1 + (1 << ((byte)uVar1 & 0x1f)) * 4;
  }
  else {
    if (param_1[4] == 3) {
      param_2 = param_1 + 0xd;
      goto LAB_5ded116a;
    }
LAB_5ded1160:
    iVar5 = *param_1 + param_1[8] * 4;
  }
  param_2 = (int *)(iVar5 + (int)param_1);
LAB_5ded116a:
  if (param_4 == 0) {
    uVar3 = (uint)*(ushort *)((int)param_1 + 0xe) * param_1[1] + 0x1f;
    param_4 = (int)((uVar3 & 0xffffffe0) + ((int)uVar3 >> 0x1f & 7U)) >> 3;
  }
  local_74 = pcVar2;
  SetRect(&local_5c,0,0,param_1[1],param_1[2]);
  if (param_3 == (RECT *)0x0) {
    local_6c.left = local_5c.left;
    local_6c.top = local_5c.top;
    local_6c.right = local_5c.right;
    local_6c.bottom = local_5c.bottom;
  }
  else {
    IntersectRect(&local_6c,&local_5c,param_3);
  }
  local_70 = FUN_5dec9f30(pcVar2,local_78);
  if (local_70 == 0) {
    return 0x80070057;
  }
  if (param_5 != (undefined4 *)0x0) {
    puVar6 = param_5;
    for (uVar3 = 1 << (local_78[2] & 0x1f) & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
  }
  if (param_6 != (undefined4 *)0x0) {
    puVar6 = param_6;
    for (uVar3 = 1 << (local_78[1] & 0x1f) & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    for (iVar5 = 0; pcVar2 = local_74, iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
  }
  if (param_7 != (undefined4 *)0x0) {
    puVar6 = param_7;
    for (uVar3 = 1 << (local_78[0] & 0x1f) & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
  }
  if (param_8 != (undefined4 *)0x0) {
    puVar6 = param_8;
    for (uVar3 = 1 << (local_78[3] & 0x1f) & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    for (iVar5 = 0; pcVar2 = local_74, iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
  }
  if (param_10 != (undefined4 *)0x0) {
    puVar6 = param_10;
    for (uVar3 = 1 << (local_78[2] & 0x1f) & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
  }
  local_38 = local_6c.bottom - local_6c.top;
  local_3c = local_6c.right - local_6c.left;
  if ((0 < local_3c) && (0 < local_38)) {
    local_74 = (code *)(&PTR_LAB_5df34b48)[(int)pcVar2];
    if (local_74 == (code *)0x0) {
      return 0x80004001;
    }
    local_4c = param_1;
    local_44 = (int)param_2 +
               ((int)((local_6c.left * local_70 >> 0x1f & 7U) + local_6c.left * local_70) >> 3) +
               (param_1[2] - local_6c.bottom) * param_4;
    local_40 = &local_6c;
    if (param_1[8] == 0) {
      local_30 = 0;
    }
    else {
      local_30 = *param_1 + (int)param_1;
    }
    local_18 = param_5;
    if (param_5 == (undefined4 *)0x0) {
      local_18 = (undefined4 *)&DAT_5dfc3400;
    }
    local_14 = param_6;
    if (param_6 == (undefined4 *)0x0) {
      local_14 = (undefined4 *)&DAT_5dfc3400;
    }
    local_10 = param_7;
    if (param_7 == (undefined4 *)0x0) {
      local_10 = (undefined4 *)&DAT_5dfc3400;
    }
    local_c = param_8;
    if (param_8 == (undefined4 *)0x0) {
      local_c = (undefined4 *)&DAT_5dfc3400;
    }
    local_2c = -(uint)(param_5 != (undefined4 *)0x0);
    local_8 = param_9;
    local_28 = -(uint)(param_6 != (undefined4 *)0x0);
    local_4 = param_10;
    local_24 = -(uint)(param_7 != (undefined4 *)0x0);
    local_20 = -(uint)(param_8 != (undefined4 *)0x0);
    local_48 = param_2;
    local_34 = param_4;
    uVar4 = (*local_74)(&local_4c);
    return uVar4;
  }
  return 0;
}


