/* Module: sfxpfx2.dll
   Function: FUN_5c8abee0
   Address: 5c8abee0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c8abee0(uint *param_1,HDC param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  HBRUSH pHVar5;
  HGDIOBJ h;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  uint h_00;
  uint h_01;
  uint local_14;
  uint local_c;
  int local_8;
  
  if ((param_1[3] & 0x10) == 0) {
    uVar6 = param_1[0x15];
    local_14 = param_1[0x14];
    uVar2 = uVar6 - param_1[0x13];
    uVar3 = local_14 - param_1[0x12];
    uVar7 = param_1[0x18];
    uVar1 = param_1[0x19];
    bVar8 = (*param_1 & 0x300) == 0x100;
    if ((param_1[3] & 8) == 0) {
      h_01 = param_1[0x11];
      local_c = (param_1[0x13] - h_01) - 1;
      local_14 = uVar6;
      if (bVar8) {
        local_14 = uVar6 + 1;
      }
    }
    else {
      local_c = param_1[0x11];
      local_8 = (param_1[0x12] - local_c) + -1;
      h_01 = uVar2;
      if (bVar8) {
        local_14 = local_14 + 1;
      }
    }
    if (((int)param_1[4] < 0) && (0 < (int)param_1[5])) {
      iVar4 = FUN_5c8aa930(param_1,0);
      iVar4 = iVar4 + 1;
    }
    else {
      if ((param_1[3] & 8) == 0) {
        uVar6 = param_1[0x12];
      }
      else {
        uVar6 = param_1[0x13];
        uVar3 = uVar2;
      }
      iVar4 = (int)uVar3 / 2 + uVar6;
    }
    pHVar5 = FUN_5c8bf800(6);
    h = SelectObject(param_2,pHVar5);
    if ((param_1[3] & 8) == 0) {
      PatBlt(param_2,(param_1[0x12] - 1) + uVar7,local_c,1,h_01,0xf00021);
      PatBlt(param_2,(param_1[0x12] - 1) + uVar7,local_14,1,h_01,0xf00021);
      PatBlt(param_2,iVar4 + -1,local_c,1,h_01,0xf00021);
      PatBlt(param_2,iVar4 + -1,local_14,1,h_01,0xf00021);
      PatBlt(param_2,(param_1[0x14] - uVar7) + -1,local_c,1,h_01,0xf00021);
      uVar2 = 1;
      uVar6 = (param_1[0x14] - uVar7) - 1;
      uVar3 = local_14;
      h_00 = h_01;
    }
    else {
      PatBlt(param_2,local_8,(param_1[0x13] - 1) + uVar1,local_c,1,0xf00021);
      PatBlt(param_2,local_14,(param_1[0x13] - 1) + uVar1,local_c,1,0xf00021);
      PatBlt(param_2,local_8,iVar4,local_c,1,0xf00021);
      PatBlt(param_2,local_14,iVar4,local_c,1,0xf00021);
      PatBlt(param_2,local_8,(param_1[0x15] - uVar1) + -1,local_c,1,0xf00021);
      uVar6 = local_14;
      uVar3 = (param_1[0x15] - uVar1) - 1;
      uVar2 = local_c;
      h_00 = 1;
    }
    PatBlt(param_2,uVar6,uVar3,uVar2,h_00,0xf00021);
    pHVar5 = FUN_5c8bf800(0x14);
    SelectObject(param_2,pHVar5);
    if ((param_1[3] & 8) == 0) {
      PatBlt(param_2,param_1[0x12] + uVar7,local_c,1,h_01,0xf00021);
      PatBlt(param_2,param_1[0x12] + uVar7,local_14,1,h_01,0xf00021);
      PatBlt(param_2,iVar4,local_c,1,h_01,0xf00021);
      PatBlt(param_2,iVar4,local_14,1,h_01,0xf00021);
      PatBlt(param_2,param_1[0x14] - uVar7,local_c,1,h_01,0xf00021);
      local_c = 1;
      uVar7 = param_1[0x14] - uVar7;
    }
    else {
      PatBlt(param_2,local_8,param_1[0x13] + uVar1,local_c,1,0xf00021);
      PatBlt(param_2,local_14,param_1[0x13] + uVar1,local_c,1,0xf00021);
      PatBlt(param_2,local_8,iVar4 + 1,local_c,1,0xf00021);
      PatBlt(param_2,local_14,iVar4 + 1,local_c,1,0xf00021);
      PatBlt(param_2,local_8,param_1[0x15] - uVar1,local_c,1,0xf00021);
      h_01 = 1;
      uVar7 = local_14;
      local_14 = param_1[0x15] - uVar1;
    }
    PatBlt(param_2,uVar7,local_14,local_c,h_01,0xf00021);
    SelectObject(param_2,h);
    return 1;
  }
  return 0;
}


