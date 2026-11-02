/* Module: erv13260.dll
   Function: FUN_635f87e0
   Address: 635f87e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_635f87e0(int param_1,int param_2,int *param_3,int param_4,byte *param_5,int param_6,uint param_7
            ,int param_8)

{
  bool bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int local_60 [6];
  uint local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  uint local_8;
  
  iVar2 = *(int *)(param_8 + 0x23cb);
  local_18 = *(int *)(param_8 + 0x23cf);
  local_10 = *(int *)(param_8 + 0x1ce8);
  local_c = 0xffffffff;
  local_14 = 0xffffffff;
  local_8 = 1;
  local_2c = 1;
  iVar6 = param_1 + (param_7 & 1) * 8 + *param_3;
  iVar5 = param_3[1] + (param_7 & 2) * 4 + param_2;
  if (*(int *)(param_8 + 0x1ce8) == 0) {
    if (iVar6 < 1) {
      local_c = 0;
    }
    if (iVar5 < 1) {
      local_14 = 0;
    }
    bVar1 = iVar2 - param_6 <= iVar6;
    if (bVar1) {
      local_8 = 0;
    }
    local_8 = (uint)!bVar1;
    local_2c = (uint)(iVar5 < *(int *)(param_8 + 0x23cf) - param_6);
  }
  else {
    iVar2 = (-(uint)(*(int *)(param_8 + 0x1cec) != 0) & 0x20) + 0x20 + iVar2;
  }
  local_48 = local_8;
  local_60[0] = 0;
  local_60[1] = 0;
  local_38 = local_8;
  local_60[2] = local_c;
  local_60[3] = local_14;
  local_60[5] = local_14;
  local_44 = local_14;
  local_40 = local_c;
  local_30 = local_c;
  local_24 = local_2c;
  local_20 = local_8;
  local_1c = local_2c;
  local_60[4] = 0;
  local_3c = 0;
  local_34 = 0;
  local_28 = 0;
  iVar8 = 0x7fffffff;
  param_7 = 0;
  param_8 = 0;
  piVar7 = local_60;
  do {
    pbVar3 = (byte *)(param_4 + ((piVar7[1] + iVar5 * 2) * iVar2 + iVar6) * 2 + *piVar7);
    if (param_6 == 8) {
      iVar4 = FUN_635f12c0(pbVar3,param_5,iVar2 * 4,iVar8);
    }
    else {
      iVar4 = FUN_635f1390(pbVar3,param_5,iVar2 * 4,iVar8);
    }
    if (iVar4 < iVar8) {
      param_7 = param_8;
      iVar8 = iVar4;
    }
    piVar7 = piVar7 + 2;
    param_8 = param_8 + 1;
  } while (param_8 < 9);
  param_3[4] = iVar8;
  iVar2 = local_60[param_7 * 2 + 1];
  param_3[2] = local_60[param_7 * 2];
  param_3[3] = iVar2;
  return;
}


