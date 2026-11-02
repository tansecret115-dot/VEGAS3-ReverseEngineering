/* Module: sfmarket2.dll
   Function: FUN_0044b4d0
   Address: 0044b4d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_0044b4d0(undefined4 *param_1,int *param_2,int *param_3,int *param_4,int param_5,int *param_6,
            int *param_7,LONG *param_8,int param_9,undefined4 param_10)

{
  ushort uVar1;
  LONG dx;
  LONG dy;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  RECT local_58;
  RECT local_48;
  tagRECT local_38;
  RECT local_28;
  RECT local_18;
  int local_8;
  
  puVar4 = param_1;
  for (iVar3 = 0x1e; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  iVar3 = FUN_00447e70((int)param_6);
  if (iVar3 < 0x10) {
    return 0;
  }
  if (0x20 < iVar3) {
    return 0;
  }
  local_8 = FUN_00447e70((int)param_2);
  if (local_8 < 0x10) {
    return 0;
  }
  if (0x20 < local_8) {
    return 0;
  }
  if (param_4 == (int *)0x0) {
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = param_2[1] << 0xe;
    local_28.bottom = param_2[2] << 0xe;
  }
  else {
    local_28.left = *param_4;
    local_28.top = param_4[1];
    local_28.right = param_4[2];
    local_28.bottom = param_4[3];
  }
  if (param_8 == (LONG *)0x0) {
    local_18.right = param_6[1] << 0xe;
    local_18.bottom = param_6[2] << 0xe;
    local_18.left = 0;
    local_18.top = 0;
  }
  else {
    local_18.left = *param_8;
    local_18.top = param_8[1];
    local_18.right = param_8[2];
    local_18.bottom = param_8[3];
  }
  local_58.right = param_6[1] << 0xe;
  local_58.bottom = param_6[2] << 0xe;
  local_58.left = 0;
  local_58.top = 0;
  IntersectRect((LPRECT)(param_1 + 0x14),&local_18,&local_58);
  local_18.left = ((LPRECT)(param_1 + 0x14))->left;
  local_18.top = param_1[0x15];
  local_18.right = param_1[0x16];
  local_18.bottom = param_1[0x17];
  if (local_18.right - local_18.left < 0x4000) {
    return 0;
  }
  if (local_18.bottom - local_18.top < 0x4000) {
    return 0;
  }
  if (local_28.right - local_28.left < 0x4000) {
    return 0;
  }
  if (local_28.bottom - local_28.top < 0x4000) {
    return 0;
  }
  param_1[0x1a] =
       (int)(((longlong)(local_18.right - local_18.left) * 0x4000) /
            (longlong)(local_28.right - local_28.left));
  param_1[0x1b] =
       (int)(((longlong)(local_18.bottom - local_18.top) * 0x4000) /
            (longlong)(local_28.bottom - local_28.top));
  local_48.left = 0;
  local_48.top = 0;
  local_48.right = param_2[1] << 0xe;
  local_48.bottom = param_2[2] << 0xe;
  param_1[8] = local_28.left;
  param_1[9] = local_28.top;
  param_1[10] = local_28.right;
  param_1[0xb] = local_28.bottom;
  IntersectRect((LPRECT)(param_1 + 4),&local_28,&local_48);
  dy = local_18.top;
  dx = local_18.left;
  local_28.left = ((LPRECT)(param_1 + 4))->left;
  local_28.top = param_1[5];
  local_28.right = param_1[6];
  local_28.bottom = param_1[7];
  if (local_28.right - local_28.left < 0x4000) {
    return 0;
  }
  if (local_28.bottom - local_28.top < 0x4000) {
    return 0;
  }
  OffsetRect(&local_18,-local_18.left,-local_18.top);
  local_18.top = (LONG)(((longlong)local_18.top * 0x4000) / (longlong)(int)param_1[0x1b]);
  local_18.bottom = (LONG)(((longlong)local_18.bottom * 0x4000) / (longlong)(int)param_1[0x1b]);
  local_18.left = (LONG)(((longlong)local_18.left * 0x4000) / (longlong)(int)param_1[0x1a]);
  local_18.right = (LONG)(((longlong)local_18.right * 0x4000) / (longlong)(int)param_1[0x1a]);
  OffsetRect(&local_18,param_1[8],param_1[9]);
  IntersectRect(&local_38,&local_18,&local_28);
  OffsetRect(&local_38,-param_1[8],-param_1[9]);
  local_38.top = (uint)((longlong)local_38.top * (longlong)(int)param_1[0x1b]) >> 0xe |
                 (int)((ulonglong)((longlong)local_38.top * (longlong)(int)param_1[0x1b]) >> 0x20)
                 << 0x12;
  local_38.bottom =
       (uint)((longlong)local_38.bottom * (longlong)(int)param_1[0x1b]) >> 0xe |
       (int)((ulonglong)((longlong)local_38.bottom * (longlong)(int)param_1[0x1b]) >> 0x20) << 0x12;
  local_38.left =
       (uint)((longlong)local_38.left * (longlong)(int)param_1[0x1a]) >> 0xe |
       (int)((ulonglong)((longlong)local_38.left * (longlong)(int)param_1[0x1a]) >> 0x20) << 0x12;
  local_38.right =
       (uint)((longlong)local_38.right * (longlong)(int)param_1[0x1a]) >> 0xe |
       (int)((ulonglong)((longlong)local_38.right * (longlong)(int)param_1[0x1a]) >> 0x20) << 0x12;
  OffsetRect(&local_38,dx,dy);
  IntersectRect(&local_18,&local_38,(RECT *)(param_1 + 0x14));
  *param_1 = param_2;
  param_1[0x10] = local_18.left;
  param_1[0x11] = local_18.top;
  param_1[0x12] = local_18.right;
  param_1[0x13] = local_18.bottom;
  if (param_3 == (int *)0x0) {
    if (param_2[4] == 0) {
      if (((param_2[8] != 0) || (uVar1 = *(ushort *)((int)param_2 + 0xe), uVar1 == 0)) ||
         (8 < uVar1)) goto LAB_0044b8a6;
      iVar3 = *param_2 + (1 << ((byte)uVar1 & 0x1f)) * 4;
    }
    else {
      if (param_2[4] == 3) {
        param_3 = param_2 + 0xd;
        goto LAB_0044b8b0;
      }
LAB_0044b8a6:
      iVar3 = *param_2 + param_2[8] * 4;
    }
    param_3 = (int *)(iVar3 + (int)param_2);
  }
LAB_0044b8b0:
  param_1[1] = param_3;
  if (param_5 == 0) {
    uVar2 = (uint)*(ushort *)((int)param_2 + 0xe) * param_2[1] + 0x1f;
    param_5 = (int)((uVar2 & 0xffffffe0) + ((int)uVar2 >> 0x1f & 7U)) >> 3;
  }
  param_1[2] = param_5;
  if (param_2[8] == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *param_2 + (int)param_2;
  }
  param_1[3] = iVar3;
  iVar3 = param_2[2];
  param_1[2] = -param_5;
  param_1[1] = (int *)((iVar3 + -1) * param_5 + (int)param_3);
  param_1[0xc] = param_6;
  if (param_7 != (int *)0x0) goto LAB_0044b945;
  if (param_6[4] == 0) {
    if (((param_6[8] != 0) || (uVar1 = *(ushort *)((int)param_6 + 0xe), uVar1 == 0)) || (8 < uVar1))
    goto LAB_0044b93b;
    iVar3 = *param_6 + (1 << ((byte)uVar1 & 0x1f)) * 4;
  }
  else {
    if (param_6[4] == 3) {
      param_7 = param_6 + 0xd;
      goto LAB_0044b945;
    }
LAB_0044b93b:
    iVar3 = *param_6 + param_6[8] * 4;
  }
  param_7 = (int *)(iVar3 + (int)param_6);
LAB_0044b945:
  param_1[0xd] = param_7;
  if (param_9 == 0) {
    uVar2 = (uint)*(ushort *)((int)param_6 + 0xe) * param_6[1] + 0x1f;
    param_9 = (int)((uVar2 & 0xffffffe0) + ((int)uVar2 >> 0x1f & 7U)) >> 3;
  }
  param_1[0xe] = param_9;
  if (param_6[8] == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *param_6 + (int)param_6;
  }
  param_1[0xf] = iVar3;
  iVar3 = param_6[2];
  param_1[0xe] = -param_9;
  param_1[0x1d] = param_10;
  param_1[0xd] = (int *)((iVar3 + -1) * param_9 + (int)param_7);
  if ((int)(param_1[6] - param_1[4]) < 0x8000) {
    param_1[0x18] = 0;
  }
  else {
    param_1[0x18] =
         (int)(((longlong)((param_1[0x12] - param_1[0x10]) + -0x4000) * 0x4000) /
              (longlong)((param_1[6] - param_1[4]) + -0x4000));
  }
  if ((int)(param_1[7] - param_1[5]) < 0x8000) {
    param_1[0x19] = 0;
  }
  else {
    param_1[0x19] =
         (int)(((longlong)((param_1[0x13] - param_1[0x11]) + -0x4000) * 0x4000) /
              (longlong)((param_1[7] - param_1[5]) + -0x4000));
  }
  if (((local_8 == 0x17) || (local_8 == 0x18)) &&
     (iVar3 = FUN_00448ad0(param_1 + 0x1c,param_2), iVar3 < 0)) {
    return 0;
  }
  return 1;
}


