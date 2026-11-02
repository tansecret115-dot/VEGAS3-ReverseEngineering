/* Module: vegas30.exe
   Function: FUN_00538db0
   Address: 00538db0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x005392d6) */
/* WARNING: Removing unreachable block (ram,0x00539023) */
/* WARNING: Removing unreachable block (ram,0x00538edc) */
/* WARNING: Removing unreachable block (ram,0x00538ee6) */
/* WARNING: Removing unreachable block (ram,0x005392cc) */
/* WARNING: Removing unreachable block (ram,0x005393eb) */

void FUN_00538db0(int param_1,uint *param_2,int param_3,uint *param_4,int param_5,undefined4 param_6
                 ,undefined4 param_7,int param_8,int param_9,undefined4 param_10,int param_11)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  HGLOBAL pvVar8;
  LPVOID pvVar9;
  undefined4 uVar10;
  uint *puVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  undefined4 *puVar17;
  uint uVar18;
  undefined4 *puVar19;
  uint *puVar20;
  bool bVar21;
  uint local_30;
  int local_2c;
  uint *local_28;
  uint *local_20;
  undefined1 local_1c [4];
  uint *local_18;
  uint local_14;
  undefined8 local_10;
  longlong local_8;
  
  local_18 = param_2;
  local_10._0_4_ = (int)param_2 - (int)param_4;
  local_14 = param_3;
  local_10._4_4_ = (param_3 - param_5) - (uint)(param_2 < param_4);
  iVar3 = param_1 + 0xe80;
  local_30 = 0;
  local_2c = -0x80000000;
  uVar18 = 0xffffffff;
  iVar16 = 0x7fffffff;
  local_8 = FUN_00538780(iVar3);
  if (*(int *)(param_1 + 0xe8c) == 400) {
    iVar3 = FUN_00445d30(iVar3,0xffffffff);
    iVar15 = 0;
    puVar17 = *(undefined4 **)(iVar3 + 0x60);
    if (puVar17 == (undefined4 *)0x0) {
      param_2 = (uint *)0x0;
    }
    else {
      param_2 = (uint *)*puVar17;
    }
    if ((int)param_2 < 1) {
      iVar6 = -0x80000000;
      uVar14 = 0;
    }
    else {
      param_4 = (uint *)puVar17[1];
      iVar6 = -0x80000000;
      uVar14 = 0;
      do {
        puVar4 = (uint *)((int)param_4 * iVar15 + puVar17[2]);
        if ((puVar4[8] & 2) != 0) {
          uVar13 = *puVar4 + (uint)local_10;
          iVar5 = puVar4[1] + local_10._4_4_ + (uint)CARRY4(*puVar4,(uint)local_10);
          if ((iVar5 <= iVar16) && ((iVar5 < iVar16 || (uVar13 < uVar18)))) {
            iVar16 = iVar5;
            uVar18 = uVar13;
          }
          if ((iVar6 <= iVar5) && ((iVar6 < iVar5 || (uVar14 < uVar13)))) {
            uVar14 = uVar13;
            iVar6 = iVar5;
          }
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < (int)param_2);
      if ((iVar16 < 1) && (iVar16 < 0)) {
        bVar21 = (uint)local_10 < uVar18;
        local_10._0_4_ = (uint)local_10 - uVar18;
        local_10._4_4_ = (local_10._4_4_ - iVar16) - (uint)bVar21;
      }
    }
    lVar2 = CONCAT44(local_10._4_4_,(uint)local_10);
    if ((CONCAT44((iVar6 - iVar16) - (uint)(uVar14 < uVar18),uVar14 - uVar18) < local_8) &&
       (local_8 < CONCAT44(iVar6,uVar14))) {
      lVar2 = (local_8 - CONCAT44(iVar6,uVar14)) + lVar2;
    }
    puVar4 = (uint *)((int)param_2 + -1);
    local_20 = (uint *)0xffffffff;
    local_28 = (uint *)0xffffffff;
    if ((lVar2 < 0x100000000) && (lVar2 < 0)) {
      puVar4 = (uint *)0x0;
      local_20 = param_2;
      local_28 = (uint *)0x1;
    }
    iVar16 = *(int *)(DAT_0064762c + 0xa0);
    if (puVar4 != local_20) {
      do {
        local_10._4_4_ = (int)((ulonglong)lVar2 >> 0x20);
        local_10._0_4_ = (uint)lVar2;
        iVar15 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
        iVar6 = *(int *)(*(int *)(iVar3 + 0x60) + 4) * (int)puVar4;
        puVar7 = (uint *)(iVar6 + iVar15);
        if ((*(byte *)(iVar6 + 0x20 + iVar15) & 2) != 0) {
          local_18 = (uint *)(*puVar7 + (uint)local_10);
          local_14 = puVar7[1] + local_10._4_4_ + (uint)CARRY4(*puVar7,(uint)local_10);
          if (param_11 == 0) {
            uVar18 = puVar7[8] & 0xfffffffb;
          }
          else {
            uVar18 = puVar7[8] | 4;
          }
          puVar7[8] = uVar18;
          local_10 = lVar2;
          if (param_8 == 0) {
            if (*(uint **)(param_1 + 0xcf8) == puVar4) {
              puVar7 = (uint *)FUN_0044aa90(*(undefined4 *)(iVar16 + 0xb4),local_8,puVar7,puVar4,
                                            local_18,local_14,param_6,param_7,param_10);
              *(uint **)(param_1 + 0xcf8) = puVar7;
              lVar2 = local_10;
              if (puVar4 != puVar7) {
                uVar10 = FUN_005387c0(param_1 + 0xe80,0xffffffff,puVar7,local_1c,&local_18,0,0);
                *(undefined4 *)(param_1 + 0xd00) = uVar10;
                lVar2 = local_10;
              }
            }
            else {
              FUN_0044aa90(*(undefined4 *)(iVar16 + 0xb4),local_8,puVar7,puVar4,local_18,local_14,
                           param_6,param_7,param_10);
              lVar2 = local_10;
            }
          }
          else {
            param_2 = (uint *)0x0;
            if (param_9 == 0) {
              uVar18 = puVar7[8] | 2;
            }
            else {
              uVar18 = puVar7[8] & 0xfffffffd;
            }
            puVar7[8] = uVar18;
            puVar7 = (uint *)_SfVideoKeyframe_InsertSmart_20
                                       (*(undefined4 *)(iVar16 + 0xb4),local_18,local_14,0xffffffff,
                                        0xffffffff);
            while ((((puVar7 == (uint *)0xffffffff || (puVar7 == puVar4)) && (-1 < (int)local_14))
                   && (CONCAT44(local_14,local_18) <= local_8))) {
              bVar21 = local_18 < local_28;
              local_18 = (uint *)((int)local_18 - (int)local_28);
              local_14 = (local_14 - ((int)local_28 >> 0x1f)) - (uint)bVar21;
              puVar7 = (uint *)_SfVideoKeyframe_InsertSmart_20
                                         (*(undefined4 *)(iVar16 + 0xb4),local_18,local_14,
                                          0xffffffff,0xffffffff);
            }
            param_4 = (uint *)_SfVideoKeyframe_Find_24
                                        (iVar3,&param_2,local_18,local_14,0xffffffff,0xffffffff);
            iVar15 = *(int *)(iVar3 + 0x60);
            puVar7 = (uint *)(*(int *)(iVar15 + 4) * (int)puVar4 + *(int *)(iVar15 + 8));
            param_2 = (uint *)(*(int *)(iVar15 + 4) * (int)param_4 + *(int *)(iVar15 + 8));
            lVar2 = local_10;
            if (((param_2 != (uint *)0x0) && (param_4 != puVar4)) &&
               ((param_4 != (uint *)0xffffffff && (param_2 != puVar7)))) {
              if ((LPCVOID)param_2[5] != (LPCVOID)0x0) {
                pvVar8 = GlobalHandle((LPCVOID)param_2[5]);
                GlobalUnlock(pvVar8);
                pvVar8 = GlobalHandle((LPCVOID)param_2[5]);
                GlobalFree(pvVar8);
              }
              puVar11 = puVar7;
              puVar20 = param_2;
              for (iVar15 = 10; iVar15 != 0; iVar15 = iVar15 + -1) {
                *puVar20 = *puVar11;
                puVar11 = puVar11 + 1;
                puVar20 = puVar20 + 1;
              }
              pvVar8 = GlobalAlloc(2,puVar7[4]);
              pvVar9 = GlobalLock(pvVar8);
              param_2[5] = (uint)pvVar9;
              if ((undefined4 *)param_2[5] == (undefined4 *)0x0) {
                return;
              }
              uVar18 = puVar7[4];
              puVar17 = (undefined4 *)puVar7[5];
              puVar19 = (undefined4 *)param_2[5];
              for (uVar14 = uVar18 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *puVar19 = *puVar17;
                puVar17 = puVar17 + 1;
                puVar19 = puVar19 + 1;
              }
              for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined1 *)puVar19 = *(undefined1 *)puVar17;
                puVar17 = (undefined4 *)((int)puVar17 + 1);
                puVar19 = (undefined4 *)((int)puVar19 + 1);
              }
              *param_2 = (uint)local_18;
              param_2[1] = local_14;
              if (*(uint **)(param_1 + 0xcf8) == puVar4) {
                *(uint **)(param_1 + 0xd00) = param_2;
                *(uint **)(param_1 + 0xcf8) = param_4;
              }
              lVar2 = local_10;
              if (param_9 == 0) {
                param_2[8] = param_2[8] & 0xfffffffd;
              }
              else {
                param_2[8] = param_2[8] | 2;
              }
            }
          }
        }
        puVar4 = (uint *)((int)puVar4 + (int)local_28);
        if (puVar4 == local_20) {
          return;
        }
      } while( true );
    }
  }
  else if (*(int *)(param_1 + 0xe8c) == 0x191) {
    uVar10 = FUN_0050c130(iVar3);
    param_4 = (uint *)FUN_00522a00(0xffffffff);
    if (param_4 == (undefined4 *)0x0) {
      param_2 = (uint *)0x0;
    }
    else {
      param_2 = (uint *)*param_4;
    }
    if (0 < (int)param_2) {
      puVar4 = (uint *)(param_4[2] + 4);
      local_20 = param_2;
      do {
        if ((puVar4[4] & 2) != 0) {
          uVar14 = *puVar4 + (uint)local_10;
          iVar3 = puVar4[1] + local_10._4_4_ + (uint)CARRY4(*puVar4,(uint)local_10);
          if ((iVar3 <= iVar16) && ((iVar3 < iVar16 || (uVar14 < uVar18)))) {
            iVar16 = iVar3;
            uVar18 = uVar14;
          }
          if ((local_2c <= iVar3) && ((local_2c < iVar3 || (local_30 < uVar14)))) {
            local_30 = uVar14;
            local_2c = iVar3;
          }
        }
        puVar4 = (uint *)((int)puVar4 + param_4[1]);
        local_20 = (uint *)((int)local_20 + -1);
      } while (local_20 != (uint *)0x0);
      if ((iVar16 < 1) && (iVar16 < 0)) {
        bVar21 = (uint)local_10 < uVar18;
        local_10._0_4_ = (uint)local_10 - uVar18;
        local_10._4_4_ = (local_10._4_4_ - iVar16) - (uint)bVar21;
      }
    }
    lVar2 = CONCAT44(local_10._4_4_,(uint)local_10);
    if ((CONCAT44((local_2c - iVar16) - (uint)(local_30 < uVar18),local_30 - uVar18) < local_8) &&
       (local_8 < CONCAT44(local_2c,local_30))) {
      lVar2 = (local_8 - CONCAT44(local_2c,local_30)) + lVar2;
    }
    puVar4 = (uint *)((int)param_2 + -1);
    local_20 = (uint *)0xffffffff;
    local_28 = (uint *)0xffffffff;
    if ((lVar2 < 0x100000000) && (lVar2 < 0)) {
      puVar4 = (uint *)0x0;
      local_20 = param_2;
      local_28 = (uint *)0x1;
    }
    uVar1 = *(undefined4 *)(DAT_0064762c + 0xa4);
    for (; puVar4 != local_20; puVar4 = (uint *)((int)puVar4 + (int)local_28)) {
      local_10._4_4_ = (int)((ulonglong)lVar2 >> 0x20);
      local_10._0_4_ = (uint)lVar2;
      iVar3 = (int)puVar4 * param_4[1] + param_4[2];
      if ((*(byte *)(iVar3 + 0x14) & 2) != 0) {
        local_18 = (uint *)(*(uint *)(iVar3 + 4) + (uint)local_10);
        local_14 = *(int *)(iVar3 + 8) + local_10._4_4_ +
                   (uint)CARRY4(*(uint *)(iVar3 + 4),(uint)local_10);
        if (param_11 == 0) {
          uVar18 = *(uint *)(iVar3 + 0x14) & 0xfffffffb;
        }
        else {
          uVar18 = *(uint *)(iVar3 + 0x14) | 4;
        }
        *(uint *)(iVar3 + 0x14) = uVar18;
        local_10 = lVar2;
        if (param_8 == 0) {
          if (*(uint **)(param_1 + 0xcf8) == puVar4) {
            puVar7 = (uint *)FUN_0050b2e0(uVar10,local_8,iVar3,param_4,puVar4,local_18,local_14,
                                          param_6,param_7,param_10);
            *(uint **)(param_1 + 0xcf8) = puVar7;
            lVar2 = local_10;
            if (puVar4 != puVar7) {
              uVar12 = FUN_005387c0(param_1 + 0xe80,0xffffffff,puVar7,local_1c,&local_18,0,0);
              *(undefined4 *)(param_1 + 0xd00) = uVar12;
              lVar2 = local_10;
            }
          }
          else {
            FUN_0050b2e0(uVar10,local_8,iVar3,param_4,puVar4,local_18,local_14,param_6,param_7,
                         param_10);
            lVar2 = local_10;
          }
        }
        else {
          param_2 = (uint *)0x0;
          if (param_9 == 0) {
            uVar18 = *(uint *)(iVar3 + 0x14) | 2;
          }
          else {
            uVar18 = *(uint *)(iVar3 + 0x14) & 0xfffffffd;
          }
          *(uint *)(iVar3 + 0x14) = uVar18;
          puVar7 = (uint *)FUN_0050cd20(uVar1,local_18,local_14,0xffffffff);
          puVar17 = param_4;
          while (((param_4 = puVar17, puVar4 == puVar7 && (-1 < (int)local_14)) &&
                 (CONCAT44(local_14,local_18) <= local_8))) {
            bVar21 = local_18 < local_28;
            local_18 = (uint *)((int)local_18 - (int)local_28);
            local_14 = (local_14 - ((int)local_28 >> 0x1f)) - (uint)bVar21;
            puVar7 = (uint *)FUN_0050cd20(uVar1,local_18,local_14,0xffffffff);
            puVar17 = param_4;
          }
          puVar11 = (uint *)FUN_0050c410(puVar17,&param_2,local_18,local_14);
          puVar7 = (uint *)(puVar17[1] * (int)puVar4 + puVar17[2]);
          param_2 = (uint *)(puVar17[1] * (int)puVar11 + puVar17[2]);
          lVar2 = local_10;
          if (((param_2 != (uint *)0x0) && (puVar11 != puVar4)) &&
             ((puVar11 != (uint *)0xffffffff && (param_2 != puVar7)))) {
            uVar18 = *puVar7;
            puVar20 = param_2;
            for (uVar14 = uVar18 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
              *puVar20 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar20 = puVar20 + 1;
            }
            for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
              *(char *)puVar20 = (char)*puVar7;
              puVar7 = (uint *)((int)puVar7 + 1);
              puVar20 = (uint *)((int)puVar20 + 1);
            }
            param_2[1] = (uint)local_18;
            param_2[2] = local_14;
            if (*(uint **)(param_1 + 0xcf8) == puVar4) {
              *(uint **)(param_1 + 0xcf8) = puVar11;
              *(uint **)(param_1 + 0xd00) = param_2;
            }
            if (param_9 == 0) {
              param_2[5] = param_2[5] & 0xfffffffd;
            }
            else {
              param_2[5] = param_2[5] | 2;
            }
          }
        }
      }
    }
  }
  return;
}


