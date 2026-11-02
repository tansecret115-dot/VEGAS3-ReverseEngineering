/* Module: vegas30k.dll
   Function: FUN_01186790
   Address: 01186790
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_01186790(int param_1)

{
  uint *puVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 local_10 [4];
  int iStack_c;
  
  (**(code **)(**(int **)(param_1 + 0x638) + 0x48))(*(int **)(param_1 + 0x638),local_10);
  FUN_01198c40(uStack_18,uStack_14);
  FUN_01187ef0(0);
  if ((*(uint *)(param_1 + 0x8c4) & 0x20000000) != 0) {
    *(uint *)(param_1 + 0x764) = *(uint *)(param_1 + 0x764) | 0x20000000;
  }
  if ((*(int *)(param_1 + 0x5c8) == 0) && (*(int *)(param_1 + 0x5cc) != 0)) {
    *(undefined4 *)(param_1 + 0x5c4) = 0;
    *(undefined4 *)(param_1 + 0x5cc) = 0;
    uVar5 = *(uint *)(param_1 + 0x8c4);
    puVar6 = (undefined4 *)(param_1 + 0x5d0);
    puVar7 = (undefined4 *)(param_1 + 0x588);
    for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    *(uint *)(param_1 + 0x8c4) = uVar5 | 0x20000000;
  }
  if ((*(int *)(param_1 + 0x768) == 0) && (*(int *)(param_1 + 0x76c) != 0)) {
    puVar6 = (undefined4 *)(param_1 + 0x770);
    puVar7 = (undefined4 *)(param_1 + 0x728);
    for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    *(undefined4 *)(param_1 + 0x760) = 0;
    *(undefined4 *)(param_1 + 0x76c) = 0;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x674);
  EnterCriticalSection(lpCriticalSection);
  uStack_20 = 0;
  uStack_1c = 0;
  lVar8 = FUN_01185940(&stack0xffffffd8,*(undefined4 *)(param_1 + 0x878),
                       *(undefined4 *)(param_1 + 0x87c),&uStack_20);
  if (lVar8 != 0) {
    if (((*(int *)(param_1 + 0x48) == 0) && (*(int *)(param_1 + 0x60) == 0)) &&
       (*(int *)(param_1 + 100) == 0x3ff00000)) {
      *(uint *)(param_1 + 0x8c4) = *(uint *)(param_1 + 0x8c4) & 0xfffdffff;
      uVar5 = *(uint *)(param_1 + 0x764) & 0xfffdffff;
    }
    else {
      *(uint *)(param_1 + 0x8c4) = *(uint *)(param_1 + 0x8c4) | 0x20000;
      uVar5 = *(uint *)(param_1 + 0x764) | 0x20000;
    }
    *(uint *)(param_1 + 0x764) = uVar5;
    *(undefined4 *)(param_1 + 0x708) = *(undefined4 *)(param_1 + 0x8a0);
    *(undefined4 *)(param_1 + 0x70c) = *(undefined4 *)(param_1 + 0x8a4);
    lVar9 = FUN_01185f70(0,lVar8,*(undefined4 *)(param_1 + 0x8c4),uStack_20,uStack_1c);
    iStack_c = (int)((ulonglong)lVar9 >> 0x20);
    uVar5 = (uint)lVar9;
    if (lVar9 != -3) {
      if ((*(int *)(param_1 + 0x6a4) != 0) && ((*(uint *)(param_1 + 0x20) & 0x200) != 0)) {
        FUN_01186540(0,lVar8,*(undefined4 *)(param_1 + 0x764));
      }
      *(undefined4 *)(param_1 + 0x708) = *(undefined4 *)(param_1 + 0x8a0);
      *(undefined4 *)(param_1 + 0x70c) = *(undefined4 *)(param_1 + 0x8a4);
      LeaveCriticalSection(lpCriticalSection);
      if (*(int *)(param_1 + 0x48) == 0) {
        uVar4 = *(uint *)(param_1 + 0x850);
        *(uint *)(param_1 + 0x850) = uVar4 + uVar5;
        *(uint *)(param_1 + 0x854) =
             *(int *)(param_1 + 0x854) + iStack_c + (uint)CARRY4(uVar4,uVar5);
        iVar3 = (int)*(uint *)(param_1 + 0x840) >> 0x1f;
        if ((iVar3 <= *(int *)(param_1 + 0x854)) &&
           ((iVar3 < *(int *)(param_1 + 0x854) ||
            (*(uint *)(param_1 + 0x840) <= *(uint *)(param_1 + 0x850))))) {
          *(undefined4 *)(param_1 + 0x850) = 0;
          *(undefined4 *)(param_1 + 0x854) = 0;
        }
      }
      else if (*(int *)(param_1 + 0x850) == 0 && *(int *)(param_1 + 0x854) == 0) {
        *(undefined4 *)(param_1 + 0x850) = *(undefined4 *)(param_1 + 0x840);
        *(undefined4 *)(param_1 + 0x854) = *(undefined4 *)(param_1 + 0x844);
      }
      uVar4 = *(uint *)(param_1 + 0x858);
      *(uint *)(param_1 + 0x8c4) = *(uint *)(param_1 + 0x8c4) & 0xdfffffff;
      *(uint *)(param_1 + 0x764) = *(uint *)(param_1 + 0x764) & 0xdfffffff;
      *(uint *)(param_1 + 0x858) = uVar4 + uVar5;
      *(uint *)(param_1 + 0x85c) = *(int *)(param_1 + 0x85c) + iStack_c + (uint)CARRY4(uVar4,uVar5);
      if (*(int *)(param_1 + 0x858) != 0 || *(int *)(param_1 + 0x85c) != 0) {
        SetEvent(*(HANDLE *)(param_1 + 0x818));
      }
      return;
    }
    puVar1 = (uint *)(*(int *)(param_1 + 0x2c) + 8);
    *puVar1 = *puVar1 | 0x80000000;
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
  uVar5 = *(uint *)(param_1 + 0x20);
  if ((uVar5 & 0xc) == 0) {
    if ((*(int *)(param_1 + 0x6a4) == 0) || ((uVar5 & 0x200) == 0)) goto LAB_01186a2c;
    uVar4 = *(uint *)(param_1 + 0x720);
    iVar3 = *(int *)(param_1 + 0x724);
    if ((*(int *)(param_1 + 0x74c) != 0) && (*(int *)(param_1 + 0x76c) == 0)) {
      uVar4 = *(uint *)(param_1 + 0x740) + *(uint *)(param_1 + 0x730);
      iVar3 = *(int *)(param_1 + 0x744) + *(int *)(param_1 + 0x734) +
              (uint)CARRY4(*(uint *)(param_1 + 0x740),*(uint *)(param_1 + 0x730));
    }
    iVar2 = *(int *)(param_1 + 0x704);
    if ((iVar2 <= iVar3) &&
       (((iVar2 < iVar3 || (*(uint *)(param_1 + 0x700) < uVar4)) && (*(int *)(param_1 + 0x48) == 0))
       )) goto LAB_01186a2c;
    if ((-1 < iVar2) && ((0 < iVar2 || (*(uint *)(param_1 + 0x700) != 0)))) {
      iVar3 = *(int *)(param_1 + 0x48);
joined_r0x01186a24:
      if (iVar3 != 0) goto LAB_01186a2c;
    }
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x568);
    iVar3 = *(int *)(param_1 + 0x56c);
    if ((*(int *)(param_1 + 0x5ac) != 0) && (*(int *)(param_1 + 0x5cc) == 0)) {
      uVar4 = *(uint *)(param_1 + 0x5a0) + *(uint *)(param_1 + 0x590);
      iVar3 = *(int *)(param_1 + 0x5a4) + *(int *)(param_1 + 0x594) +
              (uint)CARRY4(*(uint *)(param_1 + 0x5a0),*(uint *)(param_1 + 0x590));
    }
    iVar2 = *(int *)(param_1 + 0x8a4);
    if (((iVar2 <= iVar3) &&
        (((iVar2 < iVar3 || (*(uint *)(param_1 + 0x8a0) < uVar4)) && (*(int *)(param_1 + 0x48) == 0)
         ))) || ((-1 < iVar2 &&
                 (((0 < iVar2 || (*(uint *)(param_1 + 0x8a0) != 0)) &&
                  (*(int *)(param_1 + 0x48) != 0)))))) goto LAB_01186a2c;
    if ((*(int *)(param_1 + 0x6a4) != 0) && ((uVar5 & 0x200) != 0)) {
      uVar4 = *(uint *)(param_1 + 0x720);
      iVar3 = *(int *)(param_1 + 0x724);
      if ((*(int *)(param_1 + 0x74c) != 0) && (*(int *)(param_1 + 0x76c) == 0)) {
        uVar4 = *(uint *)(param_1 + 0x740) + *(uint *)(param_1 + 0x730);
        iVar3 = *(int *)(param_1 + 0x744) + *(int *)(param_1 + 0x734) +
                (uint)CARRY4(*(uint *)(param_1 + 0x740),*(uint *)(param_1 + 0x730));
      }
      iVar2 = *(int *)(param_1 + 0x704);
      if ((iVar2 <= iVar3) &&
         (((iVar2 < iVar3 || (*(uint *)(param_1 + 0x700) < uVar4)) &&
          (*(int *)(param_1 + 0x48) == 0)))) goto LAB_01186a2c;
      if ((-1 < iVar2) && ((0 < iVar2 || (*(uint *)(param_1 + 0x700) != 0)))) {
        iVar3 = *(int *)(param_1 + 0x48);
        goto joined_r0x01186a24;
      }
    }
  }
  *(uint *)(param_1 + 0x20) = uVar5 | 0x4000;
LAB_01186a2c:
  if (*(int *)(param_1 + 0x858) != 0 || *(int *)(param_1 + 0x85c) != 0) {
    SetEvent(*(HANDLE *)(param_1 + 0x818));
  }
  LeaveCriticalSection(lpCriticalSection);
  return;
}


