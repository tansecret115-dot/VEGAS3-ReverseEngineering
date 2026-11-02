/* Module: sftrans1.dll
   Function: FUN_004e8040
   Address: 004e8040
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004e8040(int param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_10 = 0;
  if (0 < *(int *)(param_1 + 0x5c)) {
    do {
      uVar8 = *(int *)(param_1 + 0x1c + local_10 * 8);
      local_8 = *(int *)(param_1 + 0x3c + local_10 * 8);
      local_c = *(int *)(param_1 + 0x20 + local_10 * 8);
      iVar5 = *(int *)(param_1 + 0x40 + local_10 * 8);
      if ((int)uVar8 < 0) {
        uVar8 = 0;
      }
      else if (0x4000 < (int)uVar8) {
        uVar8 = 0x4000;
      }
      if (local_c < 0) {
        local_c = 0;
      }
      else if (0x4000 < local_c) {
        local_c = 0x4000;
      }
      if ((int)local_8 < 0) {
        local_8 = 0;
      }
      else if (0x4000 < (int)local_8) {
        local_8 = 0x4000;
      }
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      else if (0x4000 < iVar5) {
        iVar5 = 0x4000;
      }
      uVar9 = local_8;
      iVar6 = iVar5;
      if (local_c < iVar5) {
        uVar9 = uVar8;
        iVar6 = local_c;
        local_c = iVar5;
        uVar8 = local_8;
      }
      local_8 = uVar8;
      local_c = local_c >> 9;
      iVar11 = iVar6 >> 9;
      puVar3 = param_2;
      iVar5 = 0;
      local_14 = iVar11;
      if (0 < iVar11) {
        do {
          if (local_10 == 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = *puVar3;
          }
          *puVar3 = uVar7;
          local_14 = local_14 + -1;
          puVar3 = puVar3 + 1;
          iVar5 = iVar11;
        } while (local_14 != 0);
      }
      iVar1 = (local_c - iVar11) + -1;
      if (iVar1 < 1) {
        local_8 = 0;
      }
      else {
        local_8 = (int)(local_8 - uVar9) / iVar1;
      }
      if (iVar5 < local_c) {
        puVar10 = param_2 + iVar5;
        local_14 = uVar9;
        do {
          if (local_14 >> 9 < 0x20) {
            bVar4 = (byte)(local_14 >> 9);
            if (local_10 == 0) {
              uVar8 = 0xffffffff >> (bVar4 & 0x1f);
            }
            else {
              uVar8 = 0xffffffffU >> (bVar4 & 0x1f) ^ *puVar10;
            }
            *puVar10 = uVar8;
          }
          uVar8 = local_8;
          if (iVar5 == iVar11) {
            lVar2 = (longlong)((iVar11 + 1) * 0x200 - iVar6) * (longlong)(int)local_8;
            uVar8 = (uint)lVar2 >> 0xe | (int)((ulonglong)lVar2 >> 0x20) << 0x12;
          }
          local_14 = local_14 + uVar8;
          iVar5 = iVar5 + 1;
          puVar10 = puVar10 + 1;
        } while (iVar5 < local_c);
      }
      if (iVar5 < 0x20) {
        iVar6 = 0x20 - iVar5;
        puVar3 = param_2 + iVar5;
        do {
          if (local_10 == 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = *puVar3;
          }
          *puVar3 = uVar7;
          puVar3 = puVar3 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      local_10 = local_10 + 1;
    } while (local_10 < *(int *)(param_1 + 0x5c));
  }
  return;
}


