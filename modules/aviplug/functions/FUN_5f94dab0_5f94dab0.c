/* Module: aviplug.dll
   Function: FUN_5f94dab0
   Address: 5f94dab0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5f94dab0(uint param_1,uint param_2,int *param_3,uint param_4,uint *param_5)

{
  double dVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48 [4];
  undefined4 local_38;
  undefined4 local_34;
  double local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (param_5 != (uint *)0x0) {
    *param_5 = 0;
  }
  if (param_3 != (int *)0x0) {
    iVar4 = 0;
    if ((param_1 & 0x200000) == 0) {
      local_50 = 0xe2556b28;
      local_4c = 0x403df853;
      dVar1 = _DAT_5f9d88b8;
    }
    else {
      local_50 = 0;
      local_4c = 0x40390000;
      dVar1 = _DAT_5f9d88b0;
    }
    if (((param_2._1_1_ & 7) == 2) && ((param_2 & 0x30000) == 0)) {
      dVar1 = dVar1 * _DAT_5f9d88a8;
    }
    if ((param_2._2_1_ & 0x10) == 0x10) {
      if (((param_2 & 0x800000) == 0) || ((param_2 & 0x80000) == 0)) {
        iVar4 = 0;
      }
      else {
        iVar4 = 2 - (uint)((param_2._2_1_ & 0x40) != 0x40);
      }
    }
    piVar5 = local_48;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar5 = 0;
      piVar5 = piVar5 + 1;
    }
    local_48[3] = iVar4;
    local_34 = local_4c;
    local_48[0] = 0x40;
    local_48[1] = 0xffffffff;
    local_48[2] = 0;
    local_38 = local_50;
    if (dVar1 <= _DAT_5f9d78f0) {
      dVar1 = _DAT_5f9d7c98;
    }
    local_20 = 0;
    local_1c = 0;
    local_30 = dVar1;
    local_18 = 0;
    local_14 = 0;
    local_28 = 0;
    local_10 = 0;
    local_24 = 0;
    local_c = 0;
    if (0x3f < param_4) {
      param_4 = 0x40;
    }
    piVar5 = local_48;
    for (uVar3 = param_4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *param_3 = *piVar5;
      piVar5 = piVar5 + 1;
      param_3 = param_3 + 1;
    }
    for (uVar3 = param_4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(char *)param_3 = (char)*piVar5;
      piVar5 = (int *)((int)piVar5 + 1);
      param_3 = (int *)((int)param_3 + 1);
    }
    if (param_5 != (uint *)0x0) {
      *param_5 = param_4;
    }
    return 0;
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = 0x40;
    return 0;
  }
  return 0x80004003;
}


