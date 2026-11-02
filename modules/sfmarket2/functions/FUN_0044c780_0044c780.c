/* Module: sfmarket2.dll
   Function: FUN_0044c780
   Address: 0044c780
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_0044c780(int *param_1,int *param_2,uint *param_3,int param_4,int *param_5,int *param_6,
            uint *param_7,uint param_8,uint param_9)

{
  ushort uVar1;
  undefined1 uVar2;
  int iVar3;
  int3 extraout_var;
  undefined4 uVar4;
  uint uVar5;
  undefined4 local_154;
  int local_150;
  int local_14c;
  code *local_148;
  uint local_144;
  uint local_140;
  uint local_13c;
  uint local_138;
  uint local_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  uint local_124;
  int local_120;
  int local_11c;
  code *local_118;
  int local_114;
  int local_110;
  undefined1 local_10c [4];
  int local_108 [36];
  int local_78 [30];
  
  local_124 = param_9 & 0x1000000;
  local_154 = 0;
  iVar3 = (-(uint)(local_124 != 0) & 0x3fff) + 1;
  if (param_3 == (uint *)0x0) {
    local_13c = param_1[1] * iVar3;
    local_138 = param_1[2] * iVar3;
    local_144 = 0;
    local_140 = 0;
  }
  else {
    local_144 = *param_3;
    local_140 = param_3[1];
    local_13c = param_3[2];
    local_138 = param_3[3];
  }
  if (param_7 == (uint *)0x0) {
    local_12c = param_5[1] * iVar3;
    local_128 = param_5[2] * iVar3;
    local_134 = 0;
    local_130 = 0;
  }
  else {
    local_134 = *param_7;
    local_130 = param_7[1];
    local_12c = param_7[2];
    local_128 = param_7[3];
  }
  local_150 = FUN_00447e70((int)param_5);
  local_11c = FUN_00447e70((int)param_1);
  uVar2 = FUN_00448100(local_150,local_10c);
  local_110 = CONCAT31(extraout_var,uVar2);
  if ((param_9 & 0x4000000) == 0) {
    local_118 = (code *)&LAB_00465c60;
    local_148 = FUN_004657c0;
  }
  else {
    local_118 = FUN_0045f970;
    local_148 = FUN_0045f590;
  }
  if (local_124 != 0) {
    uVar5 = (local_12c | local_134 | local_128 | local_130 | local_13c | local_144 | local_138 |
            local_140) & 0x3fff;
    if ((uVar5 == 0) || (((byte)param_9 & 0xf) < 3)) {
      local_140 = (int)(local_140 + ((int)local_140 >> 0x1f & 0x3fffU)) >> 0xe;
      local_138 = (int)(local_138 + ((int)local_138 >> 0x1f & 0x3fffU)) >> 0xe;
      local_144 = (int)(local_144 + ((int)local_144 >> 0x1f & 0x3fffU)) >> 0xe;
      local_13c = (int)(local_13c + ((int)local_13c >> 0x1f & 0x3fffU)) >> 0xe;
      local_130 = (int)(local_130 + ((int)local_130 >> 0x1f & 0x3fffU)) >> 0xe;
      local_128 = (int)(local_128 + ((int)local_128 >> 0x1f & 0x3fffU)) >> 0xe;
      local_134 = (int)(local_134 + ((int)local_134 >> 0x1f & 0x3fffU)) >> 0xe;
      local_12c = (int)(local_12c + ((int)local_12c >> 0x1f & 0x3fffU)) >> 0xe;
      uVar5 = 0;
    }
    if ((local_124 != 0) && (uVar5 != 0)) {
      if ((((local_150 != 0x1d) && (local_150 != 0x1c)) ||
          ((local_11c != 0x1d && (local_11c != 0x1c)))) &&
         ((local_150 != 0x20 || (local_11c != 0x20)))) {
        iVar3 = FUN_0044b4d0(local_78,param_1,param_2,(int *)&local_144,param_4,param_5,param_6,
                             (LONG *)&local_134,param_8,param_9);
        if (iVar3 != 0) {
          local_154 = FUN_0044bc30(local_78);
        }
        FUN_0044ba60((int)local_78);
        return local_154;
      }
      if (param_8 == 0) {
        uVar5 = (uint)*(ushort *)((int)param_5 + 0xe) * param_5[1] + 0x1f;
        param_8 = (int)((uVar5 & 0xffffffe0) + ((int)uVar5 >> 0x1f & 7U)) >> 3;
      }
      if (param_4 == 0) {
        uVar5 = (uint)*(ushort *)((int)param_1 + 0xe) * param_1[1] + 0x1f;
        param_4 = (int)((uVar5 & 0xffffffe0) + ((int)uVar5 >> 0x1f & 7U)) >> 3;
      }
      local_118 = (code *)param_5[1];
      local_114 = param_5[2];
      local_150 = param_1[1];
      local_14c = param_1[2];
      if (param_6 == (int *)0x0) {
        if (param_5[4] == 0) {
          if (((param_5[8] != 0) || (uVar1 = *(ushort *)((int)param_5 + 0xe), uVar1 == 0)) ||
             (8 < uVar1)) goto LAB_0044cad4;
          iVar3 = *param_5 + (1 << ((byte)uVar1 & 0x1f)) * 4;
        }
        else {
          if (param_5[4] == 3) {
            param_6 = param_5 + 0xd;
            goto LAB_0044cade;
          }
LAB_0044cad4:
          iVar3 = *param_5 + param_5[8] * 4;
        }
        param_6 = (int *)(iVar3 + (int)param_5);
      }
LAB_0044cade:
      if (param_2 != (int *)0x0) goto LAB_0044cb2d;
      if (param_1[4] == 0) {
        if (((param_1[8] != 0) || (uVar1 = *(ushort *)((int)param_1 + 0xe), uVar1 == 0)) ||
           (8 < uVar1)) goto LAB_0044cb21;
        iVar3 = *param_1 + (1 << ((byte)uVar1 & 0x1f)) * 4;
      }
      else {
        if (param_1[4] == 3) {
          param_2 = param_1 + 0xd;
          goto LAB_0044cb2d;
        }
LAB_0044cb21:
        iVar3 = *param_1 + param_1[8] * 4;
      }
      param_2 = (int *)(iVar3 + (int)param_1);
LAB_0044cb2d:
      local_124 = param_8;
      uVar4 = (*local_148)((int *)((local_14c + -1) * param_4 + (int)param_2),&local_150,-param_4,
                           &local_144,(int *)((local_114 + -1) * param_8 + (int)param_6),&local_118,
                           -param_8,&local_134,
                           (int)(local_110 + ((int)extraout_var >> 0x17 & 7U)) >> 3,
                           param_9 >> 0x19 & 1,param_9 >> 0x1b & 1);
      return uVar4;
    }
  }
  if ((((byte)param_9 & 0xf) < 3) ||
     ((((local_150 != 0x1d && (local_150 != 0x1c)) || ((local_11c != 0x1d && (local_11c != 0x1c))))
      && ((local_150 != 0x20 || (local_11c != 0x20)))))) {
    iVar3 = FUN_0044cdc0(local_108,param_1,param_2,(LONG *)&local_144,param_4,param_5,param_6,
                         (LONG *)&local_134,param_8,param_9);
    if (iVar3 != 0) {
      if ((param_9 & 0xf000) == 0) {
        local_154 = FUN_0044a3d0(local_108);
      }
      else {
        local_154 = FUN_0044aa40(local_108);
      }
    }
    FUN_0044d160((int)local_108);
    return local_154;
  }
  if (param_8 == 0) {
    uVar5 = (uint)*(ushort *)((int)param_5 + 0xe) * param_5[1] + 0x1f;
    param_8 = (int)((uVar5 & 0xffffffe0) + ((int)uVar5 >> 0x1f & 7U)) >> 3;
  }
  if (param_4 == 0) {
    uVar5 = (uint)*(ushort *)((int)param_1 + 0xe) * param_1[1] + 0x1f;
    param_4 = (int)((uVar5 & 0xffffffe0) + ((int)uVar5 >> 0x1f & 7U)) >> 3;
  }
  local_150 = param_1[1];
  local_124 = param_5[1];
  local_120 = param_5[2];
  local_14c = param_1[2];
  if (param_6 == (int *)0x0) {
    if (param_5[4] == 0) {
      if (((param_5[8] != 0) || (uVar1 = *(ushort *)((int)param_5 + 0xe), uVar1 == 0)) ||
         (8 < uVar1)) goto LAB_0044cc7f;
      iVar3 = *param_5 + (1 << ((byte)uVar1 & 0x1f)) * 4;
    }
    else {
      if (param_5[4] == 3) {
        param_6 = param_5 + 0xd;
        goto LAB_0044cc89;
      }
LAB_0044cc7f:
      iVar3 = *param_5 + param_5[8] * 4;
    }
    param_6 = (int *)(iVar3 + (int)param_5);
  }
LAB_0044cc89:
  if (param_2 != (int *)0x0) goto LAB_0044ccd8;
  if (param_1[4] == 0) {
    if (((param_1[8] != 0) || (uVar1 = *(ushort *)((int)param_1 + 0xe), uVar1 == 0)) || (8 < uVar1))
    goto LAB_0044cccc;
    iVar3 = *param_1 + (1 << ((byte)uVar1 & 0x1f)) * 4;
  }
  else {
    if (param_1[4] == 3) {
      param_2 = param_1 + 0xd;
      goto LAB_0044ccd8;
    }
LAB_0044cccc:
    iVar3 = *param_1 + param_1[8] * 4;
  }
  param_2 = (int *)(iVar3 + (int)param_1);
LAB_0044ccd8:
  local_148 = (code *)param_8;
  uVar4 = (*local_118)((int *)((local_14c + -1) * param_4 + (int)param_2),&local_150,-param_4,
                       &local_144,(int *)((local_120 + -1) * param_8 + (int)param_6),&local_124,
                       -param_8,&local_134,(int)(local_110 + ((int)extraout_var >> 0x17 & 7U)) >> 3,
                       param_9 >> 0x19 & 1,param_9 >> 0x1b & 1);
  return uVar4;
}


