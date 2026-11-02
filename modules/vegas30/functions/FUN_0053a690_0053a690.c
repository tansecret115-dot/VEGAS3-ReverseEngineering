/* Module: vegas30.exe
   Function: FUN_0053a690
   Address: 0053a690
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0053a690(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  HWND pHVar3;
  HGLOBAL pvVar4;
  LPVOID pvVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  undefined4 *puVar13;
  uint *puVar14;
  undefined4 *puVar15;
  uint *local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  undefined8 local_10;
  uint local_4;
  
  iVar2 = FUN_0053a670(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = param_1 + 0xe80;
  local_24 = iVar2;
  FUN_005386a0(iVar2,0);
  FUN_00538700(iVar2);
  if ((((DAT_00647890 != 0) || (pHVar3 = GetClipboardOwner(), pHVar3 != *(HWND *)(param_1 + 4))) ||
      (*(int **)(param_1 + 0xcd4) == (int *)0x0)) || (**(int **)(param_1 + 0xcd4) < 1)) {
    FUN_00539e50(param_1);
  }
  FUN_00538900(iVar2,0,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
  local_1c = DAT_0064b138;
  FUN_005b83b0(DAT_0064b138,1);
  local_10 = FUN_004581e0(param_1);
  uVar8 = (uint)local_10;
  local_18 = 0;
  local_14 = 0;
  if (*(int *)(param_1 + 0xe8c) == 400) {
    local_20 = FUN_00445d30(iVar2,0xffffffff);
    if (*(int **)(param_1 + 0xcd4) == (int *)0x0) {
      local_28 = 0;
    }
    else {
      local_28 = **(int **)(param_1 + 0xcd4);
    }
    local_2c = 0;
    uVar1 = local_10;
    if (0 < local_28) {
      do {
        local_10._4_4_ = (uint)((ulonglong)uVar1 >> 0x20);
        puVar10 = (uint *)(*(int *)(*(int *)(param_1 + 0xcd4) + 4) * local_2c +
                          *(int *)(*(int *)(param_1 + 0xcd4) + 8));
        if (local_2c == 0) {
          local_18 = *puVar10;
          local_14 = puVar10[1];
          uVar11 = uVar8;
          uVar7 = local_10._4_4_;
        }
        else {
          uVar7 = *puVar10 - local_18;
          uVar11 = uVar7 + uVar8;
          uVar7 = ((puVar10[1] - local_14) - (uint)(*puVar10 < local_18)) + local_10._4_4_ +
                  (uint)CARRY4(uVar7,uVar8);
        }
        local_4 = uVar7;
        local_10 = uVar1;
        FUN_00449230(*(undefined4 *)(DAT_0064762c + 0xa0),uVar11,uVar7);
        iVar2 = _SfVideoKeyframe_Find_24(local_20,&local_30,uVar11,uVar7,0xffffffff,0xffffffff);
        if ((local_30 != (uint *)0x0) && (-1 < iVar2)) {
          if ((LPCVOID)local_30[5] != (LPCVOID)0x0) {
            pvVar4 = GlobalHandle((LPCVOID)local_30[5]);
            GlobalUnlock(pvVar4);
            pvVar4 = GlobalHandle((LPCVOID)local_30[5]);
            GlobalFree(pvVar4);
          }
          puVar12 = puVar10;
          puVar14 = local_30;
          for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar14 = *puVar12;
            puVar12 = puVar12 + 1;
            puVar14 = puVar14 + 1;
          }
          pvVar4 = GlobalAlloc(2,puVar10[4]);
          pvVar5 = GlobalLock(pvVar4);
          local_30[5] = (uint)pvVar5;
          if ((undefined4 *)local_30[5] == (undefined4 *)0x0) {
            return 0x8007000e;
          }
          uVar8 = puVar10[4];
          puVar13 = (undefined4 *)puVar10[5];
          puVar15 = (undefined4 *)local_30[5];
          for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar15 = *puVar13;
            puVar13 = puVar13 + 1;
            puVar15 = puVar15 + 1;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined1 *)puVar15 = *(undefined1 *)puVar13;
            puVar13 = (undefined4 *)((int)puVar13 + 1);
            puVar15 = (undefined4 *)((int)puVar15 + 1);
          }
          *local_30 = uVar11;
          local_30[1] = local_4;
          local_30[8] = local_30[8] | 2;
          uVar8 = (uint)local_10;
        }
        local_2c = local_2c + 1;
        iVar2 = local_24;
        uVar1 = local_10;
      } while (local_2c < local_28);
    }
  }
  else if (*(int *)(param_1 + 0xe8c) == 0x191) {
    FUN_0050c130(iVar2);
    local_20 = FUN_00522a00(0xffffffff);
    if (*(int **)(param_1 + 0xcd4) == (int *)0x0) {
      local_28 = 0;
    }
    else {
      local_28 = **(int **)(param_1 + 0xcd4);
    }
    local_2c = 0;
    uVar1 = local_10;
    if (0 < local_28) {
      do {
        local_10._4_4_ = (uint)((ulonglong)uVar1 >> 0x20);
        puVar10 = (uint *)(*(int *)(*(int *)(param_1 + 0xcd4) + 4) * local_2c +
                          *(int *)(*(int *)(param_1 + 0xcd4) + 8));
        if (local_2c == 0) {
          local_18 = puVar10[1];
          local_14 = puVar10[2];
          uVar11 = uVar8;
          uVar7 = local_10._4_4_;
        }
        else {
          uVar7 = puVar10[1] - local_18;
          uVar11 = uVar7 + uVar8;
          uVar7 = ((puVar10[2] - local_14) - (uint)(puVar10[1] < local_18)) + local_10._4_4_ +
                  (uint)CARRY4(uVar7,uVar8);
        }
        local_10 = uVar1;
        FUN_0050cd20(*(undefined4 *)(DAT_0064762c + 0xa4),uVar11,uVar7,0xffffffff);
        iVar2 = FUN_0050c410(local_20,&local_30,uVar11,uVar7);
        if ((local_30 != (uint *)0x0) && (-1 < iVar2)) {
          uVar8 = *puVar10;
          puVar12 = local_30;
          for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *puVar12 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar12 = puVar12 + 1;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(char *)puVar12 = (char)*puVar10;
            puVar10 = (uint *)((int)puVar10 + 1);
            puVar12 = (uint *)((int)puVar12 + 1);
          }
          local_30[1] = uVar11;
          local_30[2] = uVar7;
          local_30[5] = local_30[5] | 2;
          uVar8 = (uint)local_10;
        }
        local_2c = local_2c + 1;
        iVar2 = local_24;
        uVar1 = local_10;
      } while (local_2c < local_28);
    }
  }
  FUN_005b84d0(local_1c,1);
  FUN_00538410(param_1,uVar8,local_10._4_4_);
  uVar6 = FUN_00538740(iVar2,0);
  return uVar6;
}


