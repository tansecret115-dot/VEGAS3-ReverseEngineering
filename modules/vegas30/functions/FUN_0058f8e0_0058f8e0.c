/* Module: vegas30.exe
   Function: FUN_0058f8e0
   Address: 0058f8e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0058f980) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
FUN_0058f8e0(int param_1,uint param_2,int param_3,int *param_4,undefined4 *param_5,uint param_6,
            uint *param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,
            undefined4 param_11,undefined4 param_12,undefined4 param_13)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  HANDLE hHandle;
  bool bVar11;
  int local_1c;
  undefined8 local_18;
  uint local_10;
  int local_c;
  int local_8;
  int local_4;
  
  piVar3 = DAT_0065a070;
  local_1c = -0x7ffb1ff8;
  iVar5 = *(int *)(*(int *)(param_1 + 4) + 0x2c);
  local_10 = (uint)*(ushort *)(iVar5 + 0xc);
  if (((double)CONCAT44(param_9,param_8) != _DAT_006106d0) ||
     ((double)CONCAT44(param_11,param_10) != _DAT_00610fd8)) {
    local_10 = (uint)*(ushort *)(iVar5 + 2) << 2;
  }
  *param_7 = 0;
  iVar5 = *(int *)(param_1 + 4);
  local_c = param_1;
  local_18 = ftol();
  if ((local_18 <= CONCAT44(param_3,param_2)) && (*(int *)(iVar5 + 0x6c) == 0)) {
    return 0;
  }
  iVar5 = *(int *)(param_1 + 8);
  iVar10 = *(int *)(DAT_0065a06c + 0x54);
  if (iVar5 != 0) {
    uVar9 = *(uint *)(iVar5 + 0x28);
    if ((*(int *)(iVar5 + 0x2c) <= param_3) &&
       ((*(int *)(iVar5 + 0x2c) < param_3 || (uVar9 <= param_2)))) {
      uVar6 = *(uint *)(iVar5 + 0x34);
      iVar8 = ((int)uVar6 >> 0x1f) + *(int *)(iVar5 + 0x2c) + (uint)CARRY4(uVar6,uVar9);
      if ((param_3 <= iVar8) && ((param_3 < iVar8 || (param_2 < uVar6 + uVar9)))) {
        if (((int)param_6 < (int)((*(int *)(iVar5 + 0x28) - param_2) + uVar6)) &&
           (param_4 != (int *)param_6)) {
          InterlockedIncrement((LONG *)(iVar5 + 0x14));
        }
        else {
          puVar4 = (undefined4 *)(param_1 + 8);
          iVar8 = 7;
          do {
            *puVar4 = puVar4[1];
            puVar4 = puVar4 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
          *(undefined4 *)(param_1 + 0x24) = 0;
        }
        goto LAB_0058fa2d;
      }
    }
  }
  iVar5 = 0;
LAB_0058fa2d:
  iVar10 = 2 - (uint)(iVar10 != 0);
  local_8 = iVar10;
  if (iVar5 == 0) {
    do {
      while( true ) {
        iVar5 = FUN_0058e380(piVar3,*(undefined4 *)(param_1 + 4),iVar10,param_2,param_3,param_8,
                             param_9,param_10,param_11,param_12,param_13,&local_1c);
        if (iVar5 != 0) goto LAB_0058faad;
        if (local_1c < 0) {
          return local_1c;
        }
        if (*piVar3 < piVar3[2]) break;
        Sleep(5);
      }
      local_1c = FUN_0058efd0(piVar3);
    } while (-1 < local_1c);
  }
  else {
LAB_0058faad:
    local_4 = param_2 - *(int *)(iVar5 + 0x28);
    uVar9 = *(int *)(iVar5 + 0x34) - local_4;
    if (((double)CONCAT44(param_9,param_8) != _DAT_006106d0) ||
       (lVar1 = local_18, (double)CONCAT44(param_11,param_10) != _DAT_00610fd8)) {
      iVar8 = FUN_0058e180(iVar5);
      lVar1 = local_18;
      while (iVar8 == 0) {
        local_18 = lVar1;
        Sleep(5);
        iVar8 = FUN_0058e180(iVar5);
        lVar1 = local_18;
      }
    }
    local_18._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
    if (((iVar10 < 2) && (piVar3[0x22d] != 0)) && (0 < piVar3[0x21])) {
      lVar2 = lVar1;
      if (*(int *)(*(int *)(param_1 + 4) + 0x6c) != 0) {
        lVar2 = 0x7fffffff;
      }
      lVar2 = lVar2 - CONCAT44(param_3,param_2);
      uVar6 = (uint)lVar2;
      iVar10 = (int)((ulonglong)lVar2 >> 0x20);
      if ((iVar10 < (int)param_4 >> 0x1f) ||
         ((iVar10 <= (int)param_4 >> 0x1f && (uVar6 <= param_4)))) {
        param_4 = (int *)uVar6;
      }
      if ((int)uVar9 < (int)param_4) {
        local_18._0_4_ = (int)param_4 - uVar9;
        bVar11 = CARRY4(uVar9,param_2);
        iVar10 = uVar9 + param_2;
        param_2 = 0;
        iVar8 = ((int)uVar9 >> 0x1f) + param_3 + (uint)bVar11;
        param_4 = (int *)(param_1 + 8);
        while (lVar1 = CONCAT44(local_18._4_4_,(int)local_18), -1 < (int)local_18) {
          iVar7 = *param_4;
          if (((iVar7 == 0) || (*(int *)(iVar7 + 0x28) != iVar10)) ||
             (*(int *)(iVar7 + 0x2c) != iVar8)) {
            iVar7 = FUN_0058e380(piVar3,*(undefined4 *)(param_1 + 4),local_8,iVar10,iVar8,param_8,
                                 param_9,param_10,param_11,param_12,param_13,&local_1c);
            lVar1 = CONCAT44(local_18._4_4_,(int)local_18);
            if (iVar7 == 0) break;
            if (*param_4 != 0) {
              FUN_0058ecf0(*param_4);
            }
            *param_4 = iVar7;
          }
          uVar6 = *(uint *)(iVar7 + 0x34);
          iVar10 = *(uint *)(iVar7 + 0x28) + uVar6;
          iVar8 = *(int *)(iVar7 + 0x2c) + ((int)uVar6 >> 0x1f) +
                  (uint)CARRY4(*(uint *)(iVar7 + 0x28),uVar6);
          local_18._0_4_ = (int)local_18 - uVar6;
          lVar1 = CONCAT44(local_18._4_4_,(int)local_18);
          if (((double)CONCAT44(param_9,param_8) != _DAT_006106d0) ||
             (lVar1 = CONCAT44(local_18._4_4_,(int)local_18),
             (double)CONCAT44(param_11,param_10) != _DAT_00610fd8)) break;
          param_2 = param_2 + 1;
          param_4 = param_4 + 1;
          param_1 = local_c;
          lVar1 = CONCAT44(local_18._4_4_,(int)local_18);
          if (7 < param_2) break;
        }
      }
    }
    local_18 = lVar1;
    iVar10 = FUN_0058e180(iVar5);
    if (iVar10 == 0) {
      hHandle = (HANDLE)0x0;
      if (*(int *)(iVar5 + 0xbc) == 0) {
        iVar10 = FUN_0058e180(iVar5);
        while (iVar10 == 0) {
          Sleep(5);
          iVar10 = FUN_0058e180(iVar5);
        }
      }
      else {
        hHandle = *(HANDLE *)(*(int *)(iVar5 + 0xbc) + 8);
        WaitForSingleObject(hHandle,0xffffffff);
      }
      iVar10 = FUN_0058e180(iVar5);
      if (iVar10 == 0) {
        param_4 = (int *)0x0;
        do {
          ResetEvent(hHandle);
          WaitForSingleObject(hHandle,120000);
          iVar10 = FUN_0058e180(iVar5);
          if (iVar10 != 0) goto LAB_0058fcf5;
          param_4 = (int *)((int)param_4 + 1);
        } while (param_4 < 0x3c);
        uVar9 = 0xffffffff;
      }
    }
LAB_0058fcf5:
    if ((int)param_6 <= (int)uVar9) {
      uVar9 = param_6;
    }
    if ((int)uVar9 < 1) {
      local_1c = -0x7ffb1ff8;
      uVar9 = 0;
    }
    else {
      puVar4 = (undefined4 *)(local_4 * local_10 + *(int *)(iVar5 + 0x20));
      for (uVar6 = uVar9 * local_10 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *param_5 = *puVar4;
        puVar4 = puVar4 + 1;
        param_5 = param_5 + 1;
      }
      for (uVar6 = uVar9 * local_10 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)param_5 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        param_5 = (undefined4 *)((int)param_5 + 1);
      }
      local_1c = 0;
    }
    *param_7 = uVar9;
    FUN_0058ecf0(iVar5);
  }
  return local_1c;
}


