/* Module: vegas30.exe
   Function: FUN_0049bab0
   Address: 0049bab0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0049bcbf) */
/* WARNING: Removing unreachable block (ram,0x0049bca9) */
/* WARNING: Removing unreachable block (ram,0x0049bd03) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_0049bab0(int param_1,uint param_2,int param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  HCURSOR pHVar6;
  HCURSOR pHVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  longlong lVar13;
  
  lVar13 = CONCAT44(param_3,param_2);
  iVar9 = *(int *)(param_1 + 0xcec);
  uVar1 = *(uint *)(iVar9 + 0x18);
  iVar12 = *(int *)(iVar9 + 0x1c);
  lVar3 = *(longlong *)(iVar9 + 0x18);
  uVar2 = *(uint *)(iVar9 + 0x20);
  iVar9 = *(int *)(iVar9 + 0x24);
  iVar4 = FUN_00497a40(param_1,param_4);
  if ((iVar4 == *(int *)(param_1 + 0xce0)) && ((*(uint *)(param_1 + 0x18) & 0x6000000) == 0)) {
    if (0 < **(int **)(param_1 + 0xcd8)) {
      FUN_004e9f70(*(undefined4 *)(param_1 + 0xbc8),(**(int **)(param_1 + 0xcd8) != 1) + '\x18',0);
      if (*(int *)(param_1 + 0xbc8) == 0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
      }
      iVar9 = *piVar5;
      iVar12 = 0;
      if (0 < iVar9) {
        do {
          iVar4 = *(int *)(piVar5[2] + iVar12 * 4);
          if ((*(uint *)(iVar4 + 0x10) & 0x100000) != 0) {
            if (DAT_0064778c != 0) {
              FUN_004ea250(*(undefined4 *)(param_1 + 0xbc8),iVar4,0xf,0);
              FUN_0047f380(iVar4);
            }
            FUN_004ea250(*(undefined4 *)(param_1 + 0xbc8),iVar4,1,0);
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < iVar9);
      }
    }
    FUN_004abbe0(param_1,*(undefined4 *)(param_1 + 0x16c),0);
    FUN_004abac0(param_1 + 0x16c);
    *(undefined4 *)(param_1 + 0x198) = 0;
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfeffffff;
    *(undefined4 *)(param_1 + 0x19c) = 0;
    pHVar6 = (HCURSOR)_SfGetUICursor_4(0x7f00);
    pHVar7 = GetCursor();
    if (pHVar7 != pHVar6) {
      SetCursor(pHVar6);
    }
    return CONCAT44(param_3,param_2);
  }
  if (param_5 == 0) {
    if ((*(int *)(param_1 + 0xbc8) == 0) ||
       (piVar5 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8)), piVar5 == (int *)0x0)) {
      iVar8 = 0;
    }
    else {
      iVar8 = *piVar5;
    }
    if ((iVar4 < 0) || (iVar8 + -1 < iVar4)) {
      uVar10 = 0;
    }
    else if (*(int *)(param_1 + 0xbc8) == 0) {
      uVar10 = *(undefined4 *)(_DAT_00000008 + iVar4 * 4);
    }
    else {
      iVar8 = FUN_005b87b0(*(int *)(param_1 + 0xbc8));
      uVar10 = *(undefined4 *)(*(int *)(iVar8 + 8) + iVar4 * 4);
    }
    lVar13 = FUN_00497110(param_1,uVar10,uVar1 + param_2,
                          iVar12 + param_3 + (uint)CARRY4(uVar1,param_2),uVar2,iVar9);
    lVar13 = lVar13 - lVar3;
  }
  uVar10 = *(undefined4 *)(param_1 + 0x1ac);
  uVar11 = *(undefined4 *)(param_1 + 0x1a8);
  if (*(longlong *)(param_1 + 0x1a8) <= lVar13) {
    uVar10 = *(undefined4 *)(param_1 + 0x1b4);
    uVar11 = *(undefined4 *)(param_1 + 0x1b0);
    if (lVar13 <= *(longlong *)(param_1 + 0x1b0)) goto LAB_0049bcc7;
  }
  lVar13 = CONCAT44(uVar10,uVar11);
LAB_0049bcc7:
  lVar3 = lVar13 + CONCAT44(iVar9 + iVar12 + (uint)CARRY4(uVar2,uVar1),uVar2 + uVar1);
  iVar9 = (int)((ulonglong)lVar3 >> 0x20);
  if ((*(int *)(param_1 + 0x604) <= iVar9) &&
     ((*(int *)(param_1 + 0x604) < iVar9 || (*(uint *)(param_1 + 0x600) < (uint)lVar3)))) {
    if (lVar3 < *(longlong *)(param_1 + 0xcc8)) {
      lVar3 = *(longlong *)(param_1 + 0xcc8);
    }
    *(longlong *)(param_1 + 0xcc8) = lVar3;
    *(uint *)**(undefined4 **)(param_1 + 0xbc8) = *(uint *)**(undefined4 **)(param_1 + 0xbc8) | 2;
  }
  FUN_004abbe0(param_1,*(undefined4 *)(param_1 + 0x16c),0);
  iVar9 = FUN_0049b560(param_1,param_4,lVar13);
  if (iVar9 == 0) {
    uVar10 = 0x7f88;
  }
  else {
    FUN_004abc80(param_1,*(undefined4 *)(param_1 + 0x16c),param_4,lVar13,0);
    *(longlong *)(param_1 + 0x198) = lVar13;
    uVar10 = 0xf;
  }
  pHVar6 = (HCURSOR)_SfGetUICursor_4(uVar10);
  pHVar7 = GetCursor();
  if (pHVar7 != pHVar6) {
    SetCursor(pHVar6);
  }
  return lVar13;
}


