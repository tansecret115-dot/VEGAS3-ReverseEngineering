/* Module: vidcap30.exe
   Function: FUN_004544d0
   Address: 004544d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004544d0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  int local_4c;
  int local_48;
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar2 = param_1;
  iVar5 = *(int *)(param_1 + 0x14);
  iVar1 = **(int **)(param_1 + 0x2c);
  bVar6 = *(int *)(param_1 + 0x44) != 0;
  local_38 = 0;
  local_34 = 0;
  iVar3 = FUN_00454840(param_1);
  _SfGetTextExtent_16(*(undefined4 *)(param_1 + 0x40),"Blank",0xffffffff,&local_38);
  local_48 = local_34;
  if (local_34 <= *(int *)(param_1 + 0x54)) {
    local_48 = *(int *)(param_1 + 0x54);
  }
  local_4c = 0;
  param_1 = iVar5;
  if (0 < iVar1) {
    do {
      iVar5 = *(int *)(iVar2 + 0x30);
      iVar4 = *(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 8) + local_4c * 4) + 4);
      bVar7 = iVar4 != 0;
      _SfGetTextExtent_16(*(undefined4 *)(iVar2 + 0x40),iVar4,0xffffffff,&local_38);
      local_4 = *(int *)(iVar2 + 0x20);
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_14 = 0;
      local_c = local_4 - iVar3;
      if (local_4 - iVar3 < *(int *)(iVar2 + 0x18)) {
        local_c = *(int *)(iVar2 + 0x18);
      }
      local_c = local_c + (uint)(local_4c != iVar5);
      if (bVar6) {
        iVar5 = *(int *)(iVar2 + 0x50);
      }
      else {
        iVar5 = 0;
      }
      if ((bVar7) && (bVar6)) {
        local_8 = 5;
      }
      else {
        local_8 = 0;
      }
      iVar4 = *(int *)(iVar2 + 0x1c);
      local_8 = param_1 + 0x13 + (-(uint)bVar7 & local_38) + iVar5 + local_8;
      if (iVar4 < local_8) {
        local_8 = iVar4;
      }
      local_10 = param_1;
      if (iVar4 < param_1) {
        local_10 = iVar4;
      }
      if (local_8 - local_10 < 0x14) {
        local_10 = 0;
        local_c = 0;
        local_8 = 0;
        local_4 = 0;
      }
      else {
        local_1c = local_c + 4;
        iVar4 = local_10 + 7;
        local_14 = local_1c + local_48;
        iVar5 = iVar4;
        local_2c = local_1c;
        local_24 = local_14;
        if (bVar6) {
          local_28 = local_8 + -0xb;
          iVar5 = iVar4 + (-(uint)bVar7 & 5) + *(int *)(iVar2 + 0x50);
          local_30 = iVar4;
          if (local_28 - iVar4 < *(int *)(iVar2 + 0x50)) {
            local_30 = 0;
            local_2c = 0;
            local_28 = 0;
            local_24 = 0;
          }
        }
        if ((bVar7) && (local_18 = local_8 + -0xb, local_20 = iVar5, local_18 - iVar5 < 0x14)) {
          local_20 = 0;
          local_1c = 0;
          local_18 = 0;
          local_14 = 0;
        }
      }
      if (param_1 <= local_8) {
        param_1 = local_8;
      }
      FUN_00454d10(iVar2,local_4c,&local_10,&local_30,&local_20,param_2);
      local_4c = local_4c + 1;
    } while (local_4c < iVar1);
  }
  return;
}


