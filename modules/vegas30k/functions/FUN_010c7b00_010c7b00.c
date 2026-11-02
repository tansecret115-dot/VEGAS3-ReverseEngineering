/* Module: vegas30k.dll
   Function: FUN_010c7b00
   Address: 010c7b00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010c7b00(int *param_1,int *param_2,undefined4 param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int *local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  undefined1 local_c8 [4];
  int local_c4;
  int local_c0;
  undefined1 local_bc [8];
  code *pcStack_b4;
  code *local_b0;
  code *local_a8;
  code *local_98;
  int local_60;
  uint local_5c;
  int *local_58;
  int local_54;
  int local_48;
  uint local_44;
  uint local_40;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_8;
  undefined4 local_4;
  
  local_e4 = param_2[0x13];
  iVar2 = param_2[0x1b];
  if (param_1[4] == 0) {
    if (((param_1[8] != 0) || (uVar1 = *(ushort *)((int)param_1 + 0xe), uVar1 == 0)) || (8 < uVar1))
    goto LAB_010c7b5c;
    iVar9 = *param_1 + (1 << ((byte)uVar1 & 0x1f)) * 4;
  }
  else {
    if (param_1[4] == 3) {
      local_f0 = param_1 + 0xd;
      goto LAB_010c7b66;
    }
LAB_010c7b5c:
    iVar9 = *param_1 + param_1[8] * 4;
  }
  local_f0 = (int *)(iVar9 + (int)param_1);
LAB_010c7b66:
  uVar6 = (uint)*(ushort *)((int)param_1 + 0xe) * param_1[1] + 0x1f;
  iVar11 = (int)((uVar6 & 0xffffffe0) + ((int)uVar6 >> 0x1f & 7U)) >> 3;
  uVar7 = _SfGetPixelType_4(param_2[0x11]);
  uVar8 = _SfGetPixelType_4(param_1);
  iVar9 = _SfGetPixelBitsPerChannel_8(uVar7,local_c8);
  _SfGetPixelBitsPerChannel_8(uVar8,local_c8);
  _SfXCHGGetFunctionPointers_20(uVar8,uVar7,param_2[0x22],local_bc,param_3);
  local_30 = param_2[0x1c];
  local_2c = param_2[0x10];
  local_28 = param_2[0x1d];
  local_8 = *(undefined4 *)(*(int *)param_2[0x23] + 0x8c);
  local_4 = *(undefined4 *)(*(int *)param_2[0x23] + 0x90);
  if (*param_2 == 0) {
    local_e8 = param_2[0x1a];
    iVar9 = param_2[0x19];
    if (0 < local_e8) {
      do {
        local_5c = param_2[0x14];
        local_54 = param_2[8];
        local_60 = local_e4;
        local_58 = local_f0;
        local_ec = iVar9;
        if (0 < iVar9) {
          do {
            (*local_b0)(local_bc);
            (*local_98)(&local_c0);
            (*pcStack_b4)(&local_c4);
            local_ec = local_ec + -1;
          } while (local_ec != 0);
        }
        local_e4 = local_e4 + iVar2;
        local_f0 = (int *)((int)local_f0 + iVar11);
        local_e8 = local_e8 + -1;
      } while (local_e8 != 0);
    }
    return 1;
  }
  uVar6 = param_2[1];
  iVar3 = param_2[3];
  uVar14 = param_2[2];
  local_c4 = param_2[4];
  iVar4 = param_2[0xe];
  local_c0 = param_2[0xd];
  if (param_2[0x19] == 1) {
    local_a8 = local_98;
  }
  local_48 = iVar2;
  if (param_2[0x1a] == 1) {
    local_48 = 0;
  }
  iVar12 = 1;
  if (iVar4 < 1) {
    return 1;
  }
  do {
    iVar15 = (uVar14 >> 0xe) * iVar2 + local_e4;
    local_58 = local_f0;
    local_54 = param_2[8];
    if (iVar4 <= iVar12) {
      local_48 = 0;
    }
    local_40 = uVar14 & 0x3fff;
    uVar13 = uVar6;
    if (1 < local_c0) {
      local_e8 = local_c0 + -1;
      do {
        local_5c = (uVar13 >> 0xe) * iVar9;
        local_44 = uVar13 & 0x3fff;
        local_60 = (local_5c >> 3) + iVar15;
        local_5c = local_5c & 7;
        (*local_a8)(local_bc);
        (*local_98)(&local_c0);
        (*pcStack_b4)(&local_c4);
        uVar13 = uVar13 + iVar3;
        local_e8 = local_e8 + -1;
      } while (local_e8 != 0);
    }
    uVar10 = (uVar13 >> 0xe) * iVar9;
    local_44 = uVar13 & 0x3fff;
    local_5c = uVar10 & 7;
    local_60 = (uVar10 >> 3) + iVar15;
    (*local_98)(local_bc);
    (*local_98)(&local_c0);
    (*pcStack_b4)(&local_c4);
    uVar14 = uVar14 + local_c4;
    local_f0 = (int *)((int)local_f0 + iVar11);
    bVar5 = iVar12 < iVar4;
    iVar12 = iVar12 + 1;
  } while (bVar5);
  return 1;
}


