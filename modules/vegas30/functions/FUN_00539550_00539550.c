/* Module: vegas30.exe
   Function: FUN_00539550
   Address: 00539550
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x005397d1) */
/* WARNING: Removing unreachable block (ram,0x00539bc3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00539550(int param_1,uint *param_2,int param_3,uint *param_4,int param_5,undefined4 param_6
                 ,undefined4 param_7,int param_8,int param_9,undefined4 param_10)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  HGLOBAL pvVar4;
  LPVOID pvVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  undefined4 *puVar20;
  longlong lVar21;
  int local_40;
  int local_3c;
  int local_38;
  int iStack_30;
  undefined1 local_2c [4];
  undefined8 local_28;
  undefined8 local_20;
  uint *local_18;
  int local_14;
  int local_10;
  int iStack_c;
  undefined8 local_8;
  
  local_28._0_4_ = param_2;
  local_10 = (int)param_2 - (int)param_4;
  local_28._4_4_ = param_3;
  iStack_c = (param_3 - param_5) - (uint)(param_2 < param_4);
  iVar2 = param_1 + 0xe80;
  puVar18 = (uint *)0x0;
  iStack_30 = -0x80000000;
  local_18 = (uint *)0xffffffff;
  iVar14 = 0x7fffffff;
  local_20 = FUN_00538780(iVar2);
  if (*(int *)(param_1 + 0xe8c) == 400) {
    iVar2 = FUN_00445d30(iVar2,0xffffffff);
    iVar13 = 0;
    piVar8 = *(int **)(iVar2 + 0x60);
    if (piVar8 == (int *)0x0) {
      local_40 = 0;
    }
    else {
      local_40 = *piVar8;
    }
    iVar16 = local_40;
    if (local_40 < 1) {
      iVar10 = -0x80000000;
    }
    else {
      iVar10 = -0x80000000;
      do {
        puVar3 = (undefined4 *)(piVar8[1] * iVar13 + piVar8[2]);
        if ((*(byte *)(puVar3 + 8) & 2) != 0) {
          puVar17 = (uint *)*puVar3;
          iVar1 = puVar3[1];
          if ((iVar1 <= iVar14) && ((iVar1 < iVar14 || (puVar17 < local_18)))) {
            iVar14 = iVar1;
            local_18 = puVar17;
          }
          if ((iVar10 <= iVar1) && ((iVar10 < iVar1 || (puVar18 < puVar17)))) {
            iVar10 = iVar1;
            puVar18 = puVar17;
          }
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < local_40);
    }
    local_8 = (double)CONCAT44(iVar14 + iVar10 + (uint)CARRY4((uint)local_18,(uint)puVar18),
                               (undefined1 *)((int)local_18 + (int)puVar18));
    if ((double)CONCAT44(param_5,param_4) < (double)(longlong)local_8 * _DAT_00610560) {
      iVar14 = iVar10;
      local_18 = puVar18;
    }
    iVar13 = (int)param_4 - (int)local_18;
    iVar10 = (param_5 - iVar14) - (uint)(param_4 < local_18);
    local_8 = 1.0;
    if (iVar13 != 0 || iVar10 != 0) {
      param_4 = (uint *)((int)param_2 - (int)local_18);
      param_5 = (param_3 - iVar14) - (uint)(param_2 < local_18);
      if (param_4 != (uint *)0x0 || param_5 != 0) {
        local_8 = (double)CONCAT44(param_5,param_4) / (double)CONCAT44(iVar10,iVar13);
      }
    }
    iVar13 = local_40 + -1;
    local_38 = -1;
    local_40 = -1;
    if ((iStack_c < 1) && (iStack_c < 0)) {
      iVar13 = 0;
      local_38 = iVar16;
      local_40 = 1;
    }
    uVar7 = *(undefined4 *)(DAT_0064762c + 0xa0);
    uVar15 = (undefined4)local_20;
    local_14 = iVar14;
    if (iVar13 != local_38) {
      do {
        iVar14 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
        iVar16 = *(int *)(*(int *)(iVar2 + 0x60) + 4) * iVar13;
        puVar3 = (undefined4 *)(iVar16 + iVar14);
        uVar6 = uVar15;
        if ((*(byte *)(iVar16 + 0x20 + iVar14) & 2) != 0) {
          local_10 = (int)*puVar3 - (int)local_18;
          iStack_c = (puVar3[1] - local_14) - (uint)((uint *)*puVar3 < local_18);
          lVar21 = ftol();
          local_28 = lVar21 + CONCAT44(local_14,local_18);
          if (param_8 == 0) {
            if (*(int *)(param_1 + 0xcf8) == iVar13) {
              iVar14 = FUN_0044aa90(*(undefined4 *)(*(int *)(DAT_0064762c + 0xa0) + 0xb4),uVar15,
                                    local_20._4_4_,puVar3,iVar13,local_28,param_6,param_7,param_10);
              *(int *)(param_1 + 0xcf8) = iVar14;
              uVar6 = (undefined4)local_20;
              if (iVar13 != iVar14) {
                uVar6 = FUN_005387c0(param_1 + 0xe80,0xffffffff,iVar14,local_2c,&local_28,0,0);
                *(undefined4 *)(param_1 + 0xd00) = uVar6;
                uVar6 = uVar15;
              }
            }
            else {
              FUN_0044aa90(*(undefined4 *)(*(int *)(DAT_0064762c + 0xa0) + 0xb4),uVar15,
                           local_20._4_4_,puVar3,iVar13,local_28,param_6,param_7,param_10);
            }
          }
          else {
            param_4 = (uint *)0x0;
            if (param_9 == 0) {
              uVar12 = puVar3[8] | 2;
            }
            else {
              uVar12 = puVar3[8] & 0xfffffffd;
            }
            puVar3[8] = uVar12;
            while( true ) {
              iVar14 = FUN_00449230(uVar7,local_28);
              if ((((iVar14 != -1) && (iVar14 != iVar13)) || (local_28 < 0)) ||
                 (CONCAT44(local_20._4_4_,uVar15) < local_28)) break;
              local_28 = local_28 - local_40;
            }
            iVar16 = _SfVideoKeyframe_Find_24(iVar2,&param_4,local_28,0xffffffff,0xffffffff);
            iVar14 = *(int *)(iVar2 + 0x60);
            puVar18 = (uint *)(*(int *)(iVar14 + 4) * iVar13 + *(int *)(iVar14 + 8));
            param_4 = (uint *)(*(int *)(iVar14 + 4) * iVar16 + *(int *)(iVar14 + 8));
            uVar6 = (undefined4)local_20;
            if (((param_4 != (uint *)0x0) && (iVar16 != iVar13)) &&
               ((iVar16 != -1 && (param_4 != puVar18)))) {
              if ((LPCVOID)param_4[5] != (LPCVOID)0x0) {
                pvVar4 = GlobalHandle((LPCVOID)param_4[5]);
                GlobalUnlock(pvVar4);
                pvVar4 = GlobalHandle((LPCVOID)param_4[5]);
                GlobalFree(pvVar4);
              }
              puVar17 = puVar18;
              puVar19 = param_4;
              for (iVar14 = 10; iVar14 != 0; iVar14 = iVar14 + -1) {
                *puVar19 = *puVar17;
                puVar17 = puVar17 + 1;
                puVar19 = puVar19 + 1;
              }
              pvVar4 = GlobalAlloc(2,puVar18[4]);
              pvVar5 = GlobalLock(pvVar4);
              param_4[5] = (uint)pvVar5;
              if ((undefined4 *)param_4[5] == (undefined4 *)0x0) {
                return;
              }
              uVar12 = puVar18[4];
              puVar3 = (undefined4 *)puVar18[5];
              puVar20 = (undefined4 *)param_4[5];
              for (uVar11 = uVar12 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                *puVar20 = *puVar3;
                puVar3 = puVar3 + 1;
                puVar20 = puVar20 + 1;
              }
              for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
                *(undefined1 *)puVar20 = *(undefined1 *)puVar3;
                puVar3 = (undefined4 *)((int)puVar3 + 1);
                puVar20 = (undefined4 *)((int)puVar20 + 1);
              }
              *(longlong *)param_4 = local_28;
              if (*(int *)(param_1 + 0xcf8) == iVar13) {
                *(uint **)(param_1 + 0xd00) = param_4;
                *(int *)(param_1 + 0xcf8) = iVar16;
              }
              uVar6 = (undefined4)local_20;
              if (param_9 == 0) {
                param_4[8] = param_4[8] & 0xfffffffd;
              }
              else {
                param_4[8] = param_4[8] | 2;
              }
            }
          }
        }
        iVar13 = iVar13 + local_40;
        uVar15 = uVar6;
        if (iVar13 == local_38) {
          return;
        }
      } while( true );
    }
  }
  else if (*(int *)(param_1 + 0xe8c) == 0x191) {
    uVar7 = FUN_0050c130(iVar2);
    piVar8 = (int *)FUN_00522a00(0xffffffff);
    iVar2 = 0;
    if (piVar8 != (int *)0x0) {
      iVar2 = *piVar8;
    }
    if (0 < iVar2) {
      puVar3 = (undefined4 *)(piVar8[2] + 4);
      local_38 = iVar2;
      do {
        if ((*(byte *)(puVar3 + 4) & 2) != 0) {
          iVar13 = puVar3[1];
          puVar17 = (uint *)*puVar3;
          if ((iVar13 <= iVar14) && ((iVar13 < iVar14 || (puVar17 < local_18)))) {
            iVar14 = iVar13;
            local_18 = puVar17;
          }
          if ((iStack_30 <= iVar13) && ((iStack_30 < iVar13 || (puVar18 < puVar17)))) {
            puVar18 = puVar17;
            iStack_30 = iVar13;
          }
        }
        puVar3 = (undefined4 *)((int)puVar3 + piVar8[1]);
        local_38 = local_38 + -1;
      } while (local_38 != 0);
    }
    local_8 = (double)CONCAT44(iVar14 + iStack_30 + (uint)CARRY4((uint)local_18,(uint)puVar18),
                               (undefined1 *)((int)local_18 + (int)puVar18));
    if ((double)CONCAT44(param_5,param_4) < (double)(longlong)local_8 * _DAT_00610560) {
      iVar14 = iStack_30;
      local_18 = puVar18;
    }
    iVar13 = (int)param_4 - (int)local_18;
    iVar16 = (param_5 - iVar14) - (uint)(param_4 < local_18);
    local_8 = 1.0;
    if (iVar13 != 0 || iVar16 != 0) {
      param_4 = (uint *)((int)param_2 - (int)local_18);
      param_5 = (param_3 - iVar14) - (uint)(param_2 < local_18);
      if (param_4 != (uint *)0x0 || param_5 != 0) {
        local_8 = (double)CONCAT44(param_5,param_4) / (double)CONCAT44(iVar16,iVar13);
      }
    }
    iVar13 = iVar2 + -1;
    local_3c = -1;
    param_2 = (uint *)0xffffffff;
    if ((iStack_c < 1) && (iStack_c < 0)) {
      iVar13 = 0;
      param_2 = (uint *)0x1;
      local_3c = iVar2;
    }
    uVar15 = *(undefined4 *)(DAT_0064762c + 0xa4);
    local_14 = iVar14;
    uVar6 = (undefined4)local_20;
    for (; iVar13 != local_3c; iVar13 = iVar13 + (int)param_2) {
      iVar2 = piVar8[1] * iVar13 + piVar8[2];
      if ((*(byte *)(piVar8[1] * iVar13 + 0x14 + piVar8[2]) & 2) != 0) {
        local_10 = (int)*(uint **)(iVar2 + 4) - (int)local_18;
        iStack_c = (*(int *)(iVar2 + 8) - local_14) - (uint)(*(uint **)(iVar2 + 4) < local_18);
        lVar21 = ftol();
        local_28 = lVar21 + CONCAT44(local_14,local_18);
        if (param_8 == 0) {
          if (*(int *)(param_1 + 0xcf8) == iVar13) {
            iVar2 = FUN_0050b2e0(uVar7,uVar6,local_20._4_4_,iVar2,piVar8,iVar13,local_28,param_6,
                                 param_7,param_10);
            *(int *)(param_1 + 0xcf8) = iVar2;
            if (iVar13 != iVar2) {
              uVar9 = FUN_005387c0(param_1 + 0xe80,0xffffffff,iVar2,local_2c,&local_28,0,0);
              *(undefined4 *)(param_1 + 0xd00) = uVar9;
            }
          }
          else {
            FUN_0050b2e0(uVar7,uVar6,local_20._4_4_,iVar2,piVar8,iVar13,local_28,param_6,param_7,
                         param_10);
          }
        }
        else {
          param_4 = (uint *)0x0;
          if (param_9 == 0) {
            uVar12 = *(uint *)(iVar2 + 0x14) | 2;
          }
          else {
            uVar12 = *(uint *)(iVar2 + 0x14) & 0xfffffffd;
          }
          *(uint *)(iVar2 + 0x14) = uVar12;
          iVar2 = FUN_0050cd20(uVar15,local_28,0xffffffff);
          while (((iVar13 == iVar2 && (-1 < local_28)) &&
                 (local_28 <= CONCAT44((int)((ulonglong)local_20 >> 0x20),uVar6)))) {
            local_28 = local_28 - (int)param_2;
            iVar2 = FUN_0050cd20(uVar15,local_28,0xffffffff);
          }
          iVar2 = FUN_0050c410(piVar8,&param_4,local_28);
          puVar18 = (uint *)(piVar8[1] * iVar13 + piVar8[2]);
          param_4 = (uint *)(piVar8[1] * iVar2 + piVar8[2]);
          if (((param_4 != (uint *)0x0) && (iVar2 != iVar13)) &&
             ((iVar2 != -1 && (param_4 != puVar18)))) {
            uVar12 = *puVar18;
            puVar17 = param_4;
            for (uVar11 = uVar12 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
              *puVar17 = *puVar18;
              puVar18 = puVar18 + 1;
              puVar17 = puVar17 + 1;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *(char *)puVar17 = (char)*puVar18;
              puVar18 = (uint *)((int)puVar18 + 1);
              puVar17 = (uint *)((int)puVar17 + 1);
            }
            *(longlong *)(param_4 + 1) = local_28;
            if (*(int *)(param_1 + 0xcf8) == iVar13) {
              *(int *)(param_1 + 0xcf8) = iVar2;
              *(uint **)(param_1 + 0xd00) = param_4;
            }
            uVar6 = (undefined4)local_20;
            if (param_9 == 0) {
              param_4[5] = param_4[5] & 0xfffffffd;
            }
            else {
              param_4[5] = param_4[5] | 2;
            }
          }
        }
      }
    }
  }
  return;
}


