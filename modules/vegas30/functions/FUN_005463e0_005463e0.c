/* Module: vegas30.exe
   Function: FUN_005463e0
   Address: 005463e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x005465dd) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005463e0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  int local_4a8;
  undefined8 local_4a4;
  uint local_49c;
  int local_498;
  HDC local_494;
  uint local_490;
  int iStack_48c;
  undefined4 local_488;
  undefined4 local_480;
  undefined4 uStack_47c;
  uint local_478;
  int local_474;
  undefined4 local_470;
  undefined4 local_46c;
  undefined4 local_468 [267];
  int local_3c;
  
  iVar3 = FUN_00428c50(param_1);
  if (iVar3 == 0) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x1c8);
  if ((*(int *)(param_1 + 0x1d0) == iVar3 || *(int *)(param_1 + 0x1d0) - iVar3 < 0) ||
     (*(int *)(param_1 + 0x1d4) == *(int *)(param_1 + 0x1cc) ||
      *(int *)(param_1 + 0x1d4) - *(int *)(param_1 + 0x1cc) < 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (*(int *)(param_1 + 0x48) == 0) {
    return;
  }
  if (bVar2) {
    if (DAT_0064a4a4 == 0) {
      return;
    }
    *(int *)(param_1 + 0x1d0) = iVar3 + 1;
    *(int *)(param_1 + 0x1d4) = *(int *)(param_1 + 0x1cc) + 1;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e0));
  if (*(int *)(param_1 + 0x44) == 0) {
    local_480 = *(undefined4 *)(param_1 + 0x200);
    uStack_47c = *(undefined4 *)(param_1 + 0x204);
    local_4a8 = 1;
    if (_DAT_00610fd8 == *(double *)(param_1 + 0x200)) goto LAB_005464b3;
  }
  else {
    local_480 = *(undefined4 *)(param_1 + 0x50);
    uStack_47c = *(undefined4 *)(param_1 + 0x54);
  }
  local_4a8 = 0;
LAB_005464b3:
  local_490 = *(uint *)(param_1 + 0x270);
  iStack_48c = *(int *)(param_1 + 0x274);
  local_474 = *(int *)(param_1 + 0x27c);
  uVar1 = *(uint *)(param_1 + 0x278);
  local_49c = *(uint *)(param_1 + 0x280);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e0));
  if (local_4a8 == 0) {
    local_4a4 = ftol();
  }
  else {
    local_4a4 = 0;
  }
  if (*(HWND *)(param_1 + 8) == (HWND)0x0) {
    local_494 = (HDC)0x0;
  }
  else {
    local_494 = GetDC(*(HWND *)(param_1 + 8));
  }
  if (DAT_0064a4a4 == 0) {
    local_498 = 0;
  }
  else {
    local_498 = FUN_005624d0(&DAT_0064b538);
  }
  local_488 = (int)local_4a4;
  lVar9 = local_4a4;
  if (((local_498 != 0) && (param_4 != 0)) && (local_4a8 == 0)) {
    iVar3 = FUN_00562930(local_498);
    lVar9 = local_4a4 + iVar3;
    local_488 = (undefined4)lVar9;
    uVar5 = (undefined4)((ulonglong)lVar9 >> 0x20);
    if (local_49c != 0) {
      local_4a4._0_4_ = uVar1 + local_490;
      local_4a4._4_4_ = local_474 + iStack_48c + (uint)CARRY4(uVar1,local_490);
      lVar7 = ftol();
      lVar9 = CONCAT44(uVar5,local_488);
      local_478 = (uint)lVar7;
      local_4a4 = CONCAT44(local_4a4._4_4_,(int)local_4a4);
      if (lVar7 < lVar9) {
        uVar8 = ftol();
        local_49c = (uint)uVar8;
        lVar9 = __allrem(local_488,uVar5,local_478,(int)((ulonglong)lVar7 >> 0x20));
        lVar9 = lVar9 + CONCAT44((int)((ulonglong)uVar8 >> 0x20),local_49c);
        iVar3 = (int)lVar9;
        iVar4 = iVar3 + -1;
        iVar3 = (int)((ulonglong)lVar9 >> 0x20) - (uint)(iVar3 == 0);
        local_4a4 = CONCAT44(local_4a4._4_4_,(int)local_4a4);
        lVar9 = CONCAT44(iVar3,iVar4);
        if ((iVar3 < 1) &&
           ((iVar3 < 0 ||
            (local_4a4 = CONCAT44(local_4a4._4_4_,(int)local_4a4), lVar9 = CONCAT44(iVar3,iVar4),
            iVar4 == 0)))) {
          lVar9 = 0;
          local_4a4 = CONCAT44(local_4a4._4_4_,(int)local_4a4);
        }
      }
    }
  }
  local_488 = (undefined4)lVar9;
  if (local_494 != (HDC)0x0) {
    if (*(int *)(param_1 + 0x44) == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e0));
      iVar3 = local_498;
      if (*(int *)(param_1 + 0x1f8) != 0) {
        puVar6 = local_468;
        for (iVar4 = 0x118; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        local_4a8 = 0;
        local_478 = 0;
        local_474 = 0;
        local_470 = 0;
        local_46c = 0;
        local_490 = 0;
        iStack_48c = 0x3ff00000;
        iVar4 = FUN_00546250(local_468,&local_4a8,local_488,(int)((ulonglong)lVar9 >> 0x20),
                             &local_490,local_498);
        FUN_005459b0(local_494,local_468,local_490,iStack_48c,-(uint)(iVar4 != 0) & (uint)&local_478
                     ,iVar3,1);
        if (iVar4 == 0) {
          iVar3 = local_4a8;
          if (local_4a8 == 0) {
            iVar3 = local_3c;
          }
          (**(code **)(**(int **)(param_1 + 0x1f8) + 0x40))(*(int **)(param_1 + 0x1f8),iVar3);
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e0));
    }
    else {
      iVar3 = (**(code **)(param_1 + 0x9c))
                        (lVar9,lVar9,*(undefined4 *)(param_1 + 0xa4),&local_4a4,param_1 + 0x58,
                         &local_49c,0,param_1 + 0xb8,&local_4a8,&local_478,0,0);
      if (iVar3 == 1) {
        PostMessageA(*(HWND *)(param_1 + 8),0x664,0,3);
      }
      else {
        FUN_005459b0(local_494,local_4a8,*(undefined4 *)(param_1 + 0x70),
                     *(undefined4 *)(param_1 + 0x74),-(uint)(iVar3 != 0) & (uint)&local_478,
                     local_498,DAT_0064a540 != 0x4d2);
        if (iVar3 == 0) {
          (**(code **)(param_1 + 0xa0))
                    (*(undefined4 *)(param_1 + 0xa4),(int)local_4a4,local_49c,local_4a8);
        }
      }
    }
    if (local_498 != 0) {
      FUN_00562540(&DAT_0064b538,local_498);
    }
    ReleaseDC(*(HWND *)(param_1 + 8),local_494);
  }
  return;
}


