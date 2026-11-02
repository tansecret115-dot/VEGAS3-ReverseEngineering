/* Module: aviplug.dll
   Function: FUN_5f94bbe0
   Address: 5f94bbe0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_5f94bbe0(uint param_1,uint param_2,int param_3,undefined4 *param_4,uint param_5,uint *param_6)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  byte bVar6;
  uint uVar5;
  int nDenominator;
  undefined4 *puVar7;
  undefined4 local_24;
  int local_20;
  int local_1c;
  ushort local_18;
  short sStack_16;
  undefined2 local_14;
  ushort local_12;
  uint local_10;
  uint local_c;
  short local_8;
  short local_6;
  undefined2 local_4;
  undefined2 uStack_2;
  
  uVar5 = param_2;
  if (param_6 != (uint *)0x0) {
    *param_6 = 0;
  }
  iVar3 = FUN_5f94bb90(param_1,param_2);
  if (iVar3 <= param_3) {
    return 0x80070057;
  }
  if (param_4 == (undefined4 *)0x0) {
    if (param_6 != (uint *)0x0) {
      *param_6 = 0x22;
      return 0;
    }
    return 0x80004003;
  }
  puVar7 = &local_24;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  *(undefined2 *)puVar7 = 0;
  if (((param_1 & 0x700ef00) == 0) && ((param_2 & 0x700ef00) == 0x100)) {
    local_12 = 0xc00;
    local_24._2_2_ = 2;
    local_18 = 2;
    param_2 = param_1;
    goto LAB_5f94bcf8;
  }
  iVar3 = FUN_5f94bb20(param_1);
  if (param_3 < iVar3) {
    local_12 = 0x400;
    param_2 = param_1;
  }
  else {
    param_3 = param_3 - iVar3;
    local_12 = 0x800;
  }
  uVar4 = param_2 & 0x700ef00;
  local_24._2_2_ = 1;
  local_18 = 1;
  if (uVar4 < 0x1002301) {
    if ((uVar4 == 0x1002300) || (uVar4 == 0x1002000)) {
      local_12 = local_12 | 0x300;
      local_24._2_2_ = 2;
      goto LAB_5f94bcf8;
    }
    if (uVar4 != 0x1002100) {
      if (uVar4 != 0x1002200) goto LAB_5f94bcf8;
      goto LAB_5f94bce8;
    }
  }
  else {
    if (uVar4 != 0x1002400) {
      if (uVar4 == 0x1002500) goto LAB_5f94bcec;
      if (uVar4 != 0x1002600) goto LAB_5f94bcf8;
    }
LAB_5f94bce8:
    if (param_3 != 0) {
      local_12 = local_12 | 0x200;
      goto LAB_5f94bcf8;
    }
  }
LAB_5f94bcec:
  local_12 = local_12 | 0x100;
LAB_5f94bcf8:
  local_24._0_2_ = 0xffca;
  bVar6 = (byte)(param_2 >> 0x18);
  if ((param_2 & 0x7000000) == 0) {
    sStack_16 = 0x10;
  }
  else {
    sStack_16 = (-(ushort)((bVar6 & 7) != 1) & 8) + 0xc;
  }
  bVar1 = bVar6 & 0x38;
  if ((param_2 & 0x38000000) == 0) {
    local_20 = 48000;
  }
  else {
    local_20 = (-(uint)((bVar6 & 0x38) != 8) & 0xffffd0bc) + 0xac44;
  }
  local_14 = 0x10;
  local_10 = param_1;
  local_c = uVar5;
  if ((param_2 & 0x200000) == 0) {
    _local_4 = CONCAT22(uStack_2,5);
    if ((param_2 & 0x38000000) == 0) {
      local_8 = 0x62c;
    }
    else {
      local_8 = (-(ushort)(bVar1 != 8) & 0xfe71) + 0x5ac;
    }
    if ((param_2 & 0x38000000) == 0) {
      local_6 = 0x654;
      iVar3 = 30000;
      nDenominator = 0x3e9;
    }
    else {
      iVar3 = 30000;
      nDenominator = 0x3e9;
      local_6 = (-(ushort)(bVar1 != 8) & 0xfe67) + 0x5d1;
    }
  }
  else {
    _local_4 = CONCAT22(uStack_2,6);
    if ((param_2 & 0x38000000) == 0) {
      local_8 = 0x768;
    }
    else {
      local_8 = (-(ushort)(bVar1 != 8) & 0xfe22) + 0x6ce;
    }
    if ((param_2 & 0x38000000) == 0) {
      local_6 = 0x798;
    }
    else {
      local_6 = (-(ushort)(bVar1 != 8) & 0xfe16) + 0x6fa;
    }
    iVar3 = 0x19;
    nDenominator = 1;
  }
  uVar2 = (short)_local_4 * local_18 * 0x2d0;
  _local_18 = CONCAT22(sStack_16,uVar2);
  local_1c = MulDiv((uint)uVar2,iVar3,nDenominator);
  if (0x21 < param_5) {
    param_5 = 0x22;
  }
  puVar7 = &local_24;
  for (uVar5 = param_5 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *param_4 = *puVar7;
    puVar7 = puVar7 + 1;
    param_4 = param_4 + 1;
  }
  for (uVar5 = param_5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)param_4 = *(undefined1 *)puVar7;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
    param_4 = (undefined4 *)((int)param_4 + 1);
  }
  if (param_6 != (uint *)0x0) {
    *param_6 = param_5;
  }
  return 0;
}


