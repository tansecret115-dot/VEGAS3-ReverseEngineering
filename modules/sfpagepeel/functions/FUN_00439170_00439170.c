/* Module: sfpagepeel.dll
   Function: FUN_00439170
   Address: 00439170
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00439170(int *param_1,int *param_2,int *param_3,int param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,uint param_9)

{
  ushort uVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined3 extraout_var;
  HGLOBAL pvVar8;
  int iVar9;
  undefined1 local_6c [4];
  tagRECT local_68;
  RECT local_58;
  tagRECT local_48;
  int *local_38;
  int *local_34;
  int local_30;
  uint local_2c;
  tagRECT *local_28;
  int local_24;
  int local_20;
  int local_1c;
  LPCVOID local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  bVar2 = false;
  iVar4 = FUN_00433c90((int)param_1);
  if ((iVar4 < 0x10) || (0x20 < iVar4)) {
    return -0x7fffbfff;
  }
  if (param_2 != (int *)0x0) goto LAB_004391ed;
  if (param_1[4] == 0) {
    if (((param_1[8] != 0) || (uVar1 = *(ushort *)((int)param_1 + 0xe), uVar1 == 0)) || (8 < uVar1))
    goto LAB_004391e3;
    iVar6 = *param_1 + (1 << ((byte)uVar1 & 0x1f)) * 4;
  }
  else {
    if (param_1[4] == 3) {
      param_2 = param_1 + 0xd;
      goto LAB_004391ed;
    }
LAB_004391e3:
    iVar6 = *param_1 + param_1[8] * 4;
  }
  param_2 = (int *)(iVar6 + (int)param_1);
LAB_004391ed:
  if (param_4 == 0) {
    uVar5 = (uint)*(ushort *)((int)param_1 + 0xe) * param_1[1] + 0x1f;
    param_4 = (int)((uVar5 & 0xffffffe0) + ((int)uVar5 >> 0x1f & 7U)) >> 3;
  }
  SetRect(&local_48,0,0,param_1[1],param_1[2]);
  if (param_3 == (int *)0x0) {
    local_68.left = local_48.left;
    local_68.top = local_48.top;
    local_68.right = local_48.right;
    local_68.bottom = local_48.bottom;
  }
  else {
    local_58.left = *param_3;
    local_58.top = param_3[1];
    local_58.right = param_3[2];
    local_58.bottom = param_3[3];
    if ((param_9 & 0x1000000) != 0) {
      local_58.left = (int)(local_58.left + (local_58.left >> 0x1f & 0x3fffU)) >> 0xe;
      local_58.right = (int)(local_58.right + (local_58.right >> 0x1f & 0x3fffU)) >> 0xe;
      local_58.top = (int)(local_58.top + (local_58.top >> 0x1f & 0x3fffU)) >> 0xe;
      local_58.bottom = (int)(local_58.bottom + (local_58.bottom >> 0x1f & 0x3fffU)) >> 0xe;
    }
    IntersectRect(&local_68,&local_48,&local_58);
  }
  iVar9 = local_68.right - local_68.left;
  iVar6 = local_68.bottom - local_68.top;
  if ((0 < iVar9) && (0 < iVar6)) {
    if ((iVar4 == 0x17) || (iVar4 == 0x18)) {
      iVar7 = FUN_004348f0(&local_18,param_1);
      if (iVar7 != 0) {
        return iVar7;
      }
      bVar2 = true;
    }
    uVar3 = FUN_00433f20(iVar4,local_6c);
    local_38 = param_1;
    local_2c = CONCAT31(extraout_var,uVar3) * local_68.left;
    local_30 = (int)param_2 +
               ((int)(local_2c + ((int)local_2c >> 0x1f & 7U)) >> 3) +
               (param_1[2] - local_68.bottom) * param_4;
    local_2c = local_2c & 0x80000007;
    if ((int)local_2c < 0) {
      local_2c = (local_2c - 1 | 0xfffffff8) + 1;
    }
    local_28 = &local_68;
    local_c = param_7;
    local_14 = param_5;
    local_10 = param_6;
    local_8 = param_8;
    local_34 = param_2;
    local_24 = iVar9;
    local_20 = iVar6;
    local_1c = param_4;
    local_4 = param_9 & 0xfeffffff;
    iVar4 = FUN_00438fc0((int *)&local_38);
    if (bVar2) {
      pvVar8 = GlobalHandle(local_18);
      GlobalUnlock(pvVar8);
      pvVar8 = GlobalHandle(local_18);
      GlobalFree(pvVar8);
    }
    return iVar4;
  }
  return 0;
}


