/* Module: vegas30.exe
   Function: FUN_004ad320
   Address: 004ad320
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004ad6d3) */

bool FUN_004ad320(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  ulonglong uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  longlong lVar12;
  byte *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  
  iVar5 = param_2;
  if (*(int *)(param_1 + 0xbc8) == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
  }
  local_24 = 0;
  local_20 = 0;
  local_28 = (byte *)0x0;
  if (0 < *piVar3) {
    local_24 = FUN_00497960(param_1,*(int *)(param_1 + 0xac4) + 1);
  }
  iVar7 = *(int *)(param_2 + 8);
  if (iVar7 < 1) {
    return false;
  }
  iVar8 = *(int *)(param_1 + 0x170);
  local_1c = 0;
  if (iVar8 == 0) {
    FUN_004aa750(param_1,param_2,param_3,param_4);
    local_14 = 0;
    do {
      uVar4 = FUN_004a9cd0(local_14);
      iVar5 = FUN_004aa400(param_2,uVar4);
      bVar1 = false;
      if (0 < iVar5) {
        local_18 = 0;
        do {
          pbVar6 = (byte *)FUN_004aa2f0(param_2,uVar4,local_18,0);
          if ((pbVar6 != (byte *)0x0) && ((*pbVar6 & 0x40) == 0)) {
            iVar7 = FUN_004aa490(param_2,uVar4);
            iVar8 = FUN_004aa470(param_2,uVar4);
            if (iVar8 < iVar7) {
              *(int *)(pbVar6 + 0x48) = local_24;
              pbVar6[0x4c] = 0;
              pbVar6[0x4d] = 0;
              pbVar6[0x4e] = 0;
              pbVar6[0x4f] = 0;
              pbVar6[0x50] = 0;
              pbVar6[0x51] = 0;
              pbVar6[0x52] = 0;
              pbVar6[0x53] = 0;
              pbVar6[0x60] = 0;
              pbVar6[0x61] = 0;
              pbVar6[0x62] = 0;
              pbVar6[99] = 0;
              pbVar6[0x58] = 0;
              pbVar6[0x59] = 0;
              pbVar6[0x5a] = 0;
              pbVar6[0x5b] = 0;
              pbVar6[100] = 0;
              pbVar6[0x65] = 0;
              pbVar6[0x66] = 0;
              pbVar6[0x67] = 0;
              if (local_1c < *(int *)(pbVar6 + 0x5c)) {
                local_1c = *(int *)(pbVar6 + 0x5c);
              }
              local_20 = local_20 + 1;
              bVar1 = true;
              if (local_28 == (byte *)0x0) {
                local_28 = pbVar6;
              }
            }
            else {
              FUN_004aa620(pbVar6);
            }
          }
          local_18 = local_18 + 1;
        } while (local_18 < iVar5);
        if (bVar1) {
          local_24 = local_24 + 1;
        }
      }
      local_14 = local_14 + 1;
      pbVar6 = local_28;
    } while (local_14 < 6);
  }
  else {
    pbVar6 = (byte *)0x0;
    if (iVar8 == 1) {
      FUN_004aa700(param_1,param_2,param_3,param_4);
      local_10 = 0;
      if (0 < iVar7) {
        puVar11 = (undefined4 *)(param_2 + 0x78);
        param_2 = local_24;
        do {
          if (((local_10 < *(uint *)(iVar5 + 8)) && ((*(byte *)(puVar11 + -2) & 0x40) == 0)) &&
             (puVar11 != (undefined4 *)&DAT_00000008)) {
            iVar8 = FUN_004aa490(iVar5,*puVar11);
            iVar9 = FUN_004aa470(iVar5,*puVar11);
            if (iVar9 < iVar8) {
              puVar11[0x10] = param_2;
              param_2 = param_2 + 1;
              puVar11[0x11] = 0;
              puVar11[0x12] = 0;
              puVar11[0x16] = 0;
              puVar11[0x14] = 0;
              puVar11[0x17] = 0;
              if (local_1c < (int)puVar11[0x15]) {
                local_1c = puVar11[0x15];
              }
              local_20 = local_20 + 1;
              if (local_28 == (byte *)0x0) {
                local_28 = (byte *)(puVar11 + -2);
              }
            }
          }
          local_10 = local_10 + 1;
          puVar11 = puVar11 + 0x1a;
          pbVar6 = local_28;
        } while ((int)local_10 < iVar7);
      }
    }
    else if (iVar8 == 2) {
      FUN_004aa700(param_1,param_2,param_3,param_4);
      local_10 = 0;
      do {
        uVar4 = FUN_004a9cd0(local_10);
        iVar5 = FUN_004aa400(param_2,uVar4);
        bVar1 = false;
        if (0 < iVar5) {
          local_18 = 0;
          do {
            pbVar6 = (byte *)FUN_004aa2f0(param_2,uVar4,local_18,0);
            if ((pbVar6 != (byte *)0x0) && ((*pbVar6 & 0x40) == 0)) {
              iVar7 = FUN_004aa490(param_2,uVar4);
              iVar8 = FUN_004aa470(param_2,uVar4);
              if (iVar8 < iVar7) {
                *(int *)(pbVar6 + 0x48) = local_24;
                pbVar6[0x4c] = 0;
                pbVar6[0x4d] = 0;
                pbVar6[0x4e] = 0;
                pbVar6[0x4f] = 0;
                pbVar6[0x50] = 0;
                pbVar6[0x51] = 0;
                pbVar6[0x52] = 0;
                pbVar6[0x53] = 0;
                pbVar6[0x60] = 0;
                pbVar6[0x61] = 0;
                pbVar6[0x62] = 0;
                pbVar6[99] = 0;
                pbVar6[0x58] = 0;
                pbVar6[0x59] = 0;
                pbVar6[0x5a] = 0;
                pbVar6[0x5b] = 0;
                pbVar6[100] = 0;
                pbVar6[0x65] = 0;
                pbVar6[0x66] = 0;
                pbVar6[0x67] = 0;
                if (local_1c < *(int *)(pbVar6 + 0x5c)) {
                  local_1c = *(int *)(pbVar6 + 0x5c);
                }
                local_20 = local_20 + 1;
                bVar1 = true;
                if (local_28 == (byte *)0x0) {
                  local_28 = pbVar6;
                }
              }
              else {
                FUN_004aa620(pbVar6);
              }
            }
            local_18 = local_18 + 1;
          } while (local_18 < iVar5);
          if (bVar1) {
            local_24 = local_24 + 1;
          }
        }
        local_10 = local_10 + 1;
        pbVar6 = local_28;
      } while ((int)local_10 < 6);
    }
  }
  if ((0 < local_20) && (pbVar6 != (byte *)0x0)) {
    if (*(int *)(param_1 + 0xb90) == 0 && *(int *)(param_1 + 0xb94) == 0) {
      uVar10 = 0xffffffff;
    }
    else {
      lVar12 = ftol();
      uVar2 = lVar12 + *(int *)(param_1 + 0xac0);
      uVar10 = (uint)uVar2;
      if ((uVar2 < 0x8000000000000000) ||
         ((-0x100000001 < (longlong)uVar2 && (0xffffbfff < uVar10)))) {
        if (0x3fff < (longlong)uVar2) {
          uVar10 = 0x3fff;
        }
      }
      else {
        uVar10 = 0xffffc000;
      }
    }
    *(uint *)(pbVar6 + 0x54) = uVar10;
    *(int *)(pbVar6 + 0x5c) = local_1c;
    iVar5 = *(int *)(param_1 + 0xac4);
    *(undefined1 **)(pbVar6 + 100) = &LAB_004a9de0;
    *(int *)(pbVar6 + 0x58) = iVar5;
    *(int *)(pbVar6 + 0x60) = iVar5 + 8;
  }
  return 0 < local_20;
}


