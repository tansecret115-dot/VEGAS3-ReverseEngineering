/* Module: vegas30.exe
   Function: FUN_005abbd0
   Address: 005abbd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_005abbd0(int param_1,undefined4 param_2,undefined4 param_3,uint *param_4,uint *param_5,
            undefined4 param_6,int param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_18;
  uint local_14;
  int local_c;
  int local_4;
  
  uVar3 = 0;
  local_54 = 0;
  if (param_5 == (uint *)0x0) {
    uVar5 = 0;
    uVar7 = *(int *)(param_1 + 4) << 0xe;
    uVar2 = *(int *)(param_1 + 8) << 0xe;
  }
  else {
    uVar5 = *param_5;
    uVar3 = param_5[1];
    uVar7 = param_5[2];
    uVar2 = param_5[3];
  }
  iVar1 = (*param_4 - 1 | 0x3fff) + 1;
  local_30 = (int)(iVar1 + (iVar1 >> 0x1f & 0x3fffU)) >> 0xe;
  local_28 = (int)((param_4[2] & 0xffffc000) + ((int)param_4[2] >> 0x1f & 0x3fffU)) >> 0xe;
  iVar1 = (param_4[1] - 1 | 0x3fff) + 1;
  local_44 = (int)(iVar1 + (iVar1 >> 0x1f & 0x3fffU)) >> 0xe;
  local_24 = (int)((param_4[3] & 0xffffc000) + ((int)param_4[3] >> 0x1f & 0x3fffU)) >> 0xe;
  iVar6 = (int)((uVar5 & 0xffffc000) + ((int)uVar5 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar1 = (uVar7 - 1 | 0x3fff) + 1;
  local_4c = (int)((uVar3 & 0xffffc000) + ((int)uVar3 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar8 = (int)(iVar1 + (iVar1 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar1 = (uVar2 - 1 | 0x3fff) + 1;
  local_4 = (int)(iVar1 + (iVar1 >> 0x1f & 0x3fffU)) >> 0xe;
  uVar3 = *param_4;
  uVar5 = param_4[1];
  uVar7 = param_4[2];
  local_14 = param_4[3];
  if (param_7 == 0) {
    local_20 = (uVar3 - 1 | 0x3fff) + 1;
    local_20 = local_20 + (local_20 >> 0x1f & 0x3fffU);
    local_18 = (uVar7 & 0xffffc000) + ((int)uVar7 >> 0x1f & 0x3fffU);
    iVar1 = (uVar5 - 1 | 0x3fff) + 1;
    iVar1 = iVar1 + (iVar1 >> 0x1f & 0x3fffU);
    uVar3 = local_14 & 0xffffc000;
  }
  else {
    local_20 = (uVar3 & 0xffffc000) + ((int)uVar3 >> 0x1f & 0x3fffU);
    local_18 = (uVar7 - 1 | 0x3fff) + 1;
    local_18 = local_18 + (local_18 >> 0x1f & 0x3fffU);
    iVar1 = (uVar5 & 0xffffc000) + ((int)uVar5 >> 0x1f & 0x3fffU);
    uVar3 = (local_14 - 1 | 0x3fff) + 1;
  }
  local_18 = local_18 >> 0xe;
  local_20 = local_20 >> 0xe;
  iVar1 = iVar1 >> 0xe;
  iVar4 = (int)(uVar3 + ((int)uVar3 >> 0x1f & 0x3fffU)) >> 0xe;
  local_2c = local_44;
  local_c = local_4c;
  local_50 = iVar6;
  local_48 = iVar8;
  if ((0 < iVar8 - iVar6) && (local_44 != local_4c && -1 < local_44 - local_4c)) {
    if (iVar1 != local_44) {
      local_34 = iVar1 + 1;
      local_40 = iVar6;
      local_3c = iVar1;
      local_38 = iVar8;
      _SfDibFadeToColor_32
                (param_1,param_2,&local_40,param_3,&DAT_00629e10,
                 (float)(int)(param_4[1] + iVar1 * -0x4000) * _DAT_00629dc8,0,3);
      local_44 = iVar1;
    }
    _SfDibFillRect_24(param_1,param_2,&local_50,param_3,param_6,3);
    local_54 = 1;
  }
  local_44 = local_4;
  if ((0 < iVar8 - iVar6) && (local_4 != local_24 && -1 < local_4 - local_24)) {
    local_50 = iVar6;
    local_4c = local_24;
    local_48 = iVar8;
    if (iVar4 != local_24) {
      local_34 = local_24 + 1;
      local_4c = local_24;
      local_40 = iVar6;
      local_3c = local_24;
      local_38 = iVar8;
      _SfDibFadeToColor_32
                (param_1,param_2,&local_40,param_3,&DAT_00629e10,
                 (float)(int)(iVar4 * 0x4000 - param_4[3]) * _DAT_00629dc8,0,3);
      local_4c = iVar4;
    }
    _SfDibFillRect_24(param_1,param_2,&local_50,param_3,param_6,3);
    local_54 = 1;
  }
  local_48 = local_30;
  local_4c = iVar1;
  local_44 = iVar4;
  if ((local_30 != iVar6 && -1 < local_30 - iVar6) && (iVar4 != iVar1 && -1 < iVar4 - iVar1)) {
    local_50 = iVar6;
    if (local_20 != local_30) {
      local_38 = local_20 + 1;
      local_40 = local_20;
      local_3c = iVar1;
      local_34 = iVar4;
      _SfDibFadeToColor_32
                (param_1,param_2,&local_40,param_3,&DAT_00629e10,
                 (float)(int)(*param_4 + local_20 * -0x4000) * _DAT_00629dc8,0,3);
      local_48 = local_20;
    }
    _SfDibFillRect_24(param_1,param_2,&local_50,param_3,param_6,3);
    local_54 = 1;
  }
  local_50 = local_28;
  if ((iVar8 != local_28 && -1 < iVar8 - local_28) && (iVar4 != iVar1 && -1 < iVar4 - iVar1)) {
    local_4c = iVar1;
    local_48 = iVar8;
    local_44 = iVar4;
    if (local_18 != local_28) {
      local_40 = local_28;
      local_38 = local_28 + 1;
      local_3c = iVar1;
      local_34 = iVar4;
      _SfDibFadeToColor_32
                (param_1,param_2,&local_40,param_3,&DAT_00629e10,
                 (float)(int)(local_18 * 0x4000 - param_4[2]) * _DAT_00629dc8,0,3);
      local_50 = local_18;
    }
    _SfDibFillRect_24(param_1,param_2,&local_50,param_3,param_6,3);
    return 1;
  }
  return local_54;
}


