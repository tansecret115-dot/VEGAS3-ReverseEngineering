/* Module: vegas30.exe
   Function: FUN_005cf930
   Address: 005cf930
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x005cfdf4) */
/* WARNING: Removing unreachable block (ram,0x005cfc26) */
/* WARNING: Removing unreachable block (ram,0x005cfb73) */
/* WARNING: Removing unreachable block (ram,0x005cfb23) */
/* WARNING: Removing unreachable block (ram,0x005cfaab) */
/* WARNING: Removing unreachable block (ram,0x005cfabf) */
/* WARNING: Removing unreachable block (ram,0x005cfb3d) */
/* WARNING: Removing unreachable block (ram,0x005cfbc9) */
/* WARNING: Removing unreachable block (ram,0x005cfd82) */
/* WARNING: Removing unreachable block (ram,0x005cfe98) */

undefined4
FUN_005cf930(int param_1,longlong *param_2,longlong *param_3,undefined4 *param_4,undefined4 param_5,
            undefined4 param_6,int param_7)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int local_34;
  undefined4 local_28;
  undefined4 local_24;
  
  lVar13 = CONCAT44(param_6,param_5);
  local_24 = 0;
  local_28 = 0;
  lVar9 = 0;
  lVar10 = 0;
  if (*(int *)(param_1 + 0x50) == 0) goto LAB_005cff8e;
  if ((((*(int *)(*(int *)(param_1 + 0x50) + 0x18) == 0) ||
       (iVar3 = FUN_005f13f0(*(undefined4 *)(param_1 + 4)), iVar3 == 0)) ||
      ((*(uint *)(*(int *)(iVar3 + 8) + 0x134) >> 5 & 1) != 0)) ||
     ((*(uint *)(iVar3 + 0x8c) & 1) != 0)) {
LAB_005cff86:
    local_24 = 1;
    lVar9 = 0;
    lVar10 = 0;
  }
  else {
    if (*(int *)(param_1 + 4) == 2) {
      uVar1 = *(uint *)(param_1 + 0x10);
      lVar9 = ftol();
      iVar3 = *(int *)(*(int *)(iVar3 + 0x2c) + 4);
      lVar10 = ftol();
      iVar4 = (int)((ulonglong)lVar10 >> 0x20);
      lVar11 = ftol();
      if (((uVar1 & 0x100) == 0) || (lVar10 + lVar11 <= lVar9)) {
        if (param_7 != 0) {
          if (iVar3 == 0) {
            lVar12 = 0;
          }
          else {
            lVar12 = ftol();
          }
          if (lVar13 <= lVar12) {
            if (iVar3 == 0) {
              lVar13 = 0;
            }
            else {
              lVar13 = ftol();
            }
          }
        }
        iVar8 = (int)((ulonglong)lVar13 >> 0x20);
        iVar6 = (uint)lVar10 - (uint)lVar13;
        uVar1 = (uint)((uint)lVar10 < (uint)lVar13);
        iVar5 = iVar4 - iVar8;
        iVar7 = iVar5 - uVar1;
        if ((iVar7 < 0) ||
           ((iVar7 == 0 || SBORROW4(iVar4,iVar8) != SBORROW4(iVar5,uVar1) && (iVar6 == 0)))) {
          iVar6 = 0;
          iVar7 = 0;
        }
        lVar13 = __allmul(lVar13,2,0);
        lVar9 = lVar9 - CONCAT44(iVar7,iVar6);
        if (lVar11 + lVar13 < lVar9) {
          lVar9 = lVar11 + lVar13;
        }
      }
      else {
        iVar6 = 0;
        iVar7 = 0;
        lVar9 = lVar11;
      }
      lVar10 = CONCAT44(iVar7,iVar6);
      if (param_7 == 0) goto LAB_005cff8e;
      ftol();
      if (iVar3 == 0) {
        lVar10 = 0;
        lVar9 = 0;
        goto LAB_005cff8e;
      }
      ftol();
      lVar10 = ftol();
    }
    else {
      if (*(int *)(param_1 + 4) != 3) goto LAB_005cff86;
      iVar4 = FUN_005cf890(iVar3);
      if (iVar4 == 0) {
        if ((*(int *)(iVar3 + 0x24) < 0) ||
           ((*(int *)(iVar3 + 0x24) < 1 && (*(uint *)(iVar3 + 0x20) < 2)))) {
          local_28 = 1;
          lVar9 = 1;
          lVar10 = 0;
        }
        else {
          local_28 = 1;
          lVar9 = *(longlong *)(iVar3 + 0x20);
          lVar10 = 0;
        }
        goto LAB_005cff8e;
      }
      lVar9 = ftol();
      lVar10 = ftol();
      lVar11 = ftol();
      iVar3 = FUN_0047c7d0(param_1 + 0x98,0xca);
      if (iVar3 != 0) {
        iVar4 = 0;
        if (*(int **)(iVar3 + 0x30) != (int *)0x0) {
          iVar4 = **(int **)(iVar3 + 0x30);
        }
        local_34 = 0;
        if (0 < iVar4) {
          do {
            iVar5 = *(int *)(*(int *)(iVar3 + 0x30) + 8);
            iVar8 = *(int *)(*(int *)(iVar3 + 0x30) + 4) * local_34;
            FUN_005cefa0(param_1,*(undefined4 *)(iVar8 + iVar5),*(undefined4 *)(iVar8 + 4 + iVar5),0
                         ,0);
            lVar12 = ftol();
            if (lVar12 <= lVar10) {
              lVar10 = lVar12;
            }
            if (lVar11 <= lVar12) {
              lVar11 = lVar12;
            }
            local_34 = local_34 + 1;
          } while (local_34 < iVar4);
        }
        if (iVar4 != 0) {
          FUN_005cefa0(param_1,*(int *)(param_1 + 0x20) + -1,
                       *(int *)(param_1 + 0x24) - (uint)(*(int *)(param_1 + 0x20) == 0),0,0);
          lVar12 = ftol();
          if (lVar12 <= lVar10) {
            lVar10 = lVar12;
          }
          if (lVar11 <= lVar12) {
            lVar11 = lVar12;
          }
        }
      }
      iVar3 = (int)((ulonglong)lVar10 >> 0x20);
      if (((*(uint *)(param_1 + 0x10) & 0x100) == 0) || (lVar10 + lVar11 <= lVar9)) {
        if ((param_7 != 0) &&
           (lVar12 = ftol(), bVar2 = lVar13 <= lVar12, lVar13 = CONCAT44(param_6,param_5), bVar2)) {
          lVar13 = lVar12;
        }
        iVar5 = (int)((ulonglong)lVar13 >> 0x20);
        iVar8 = (uint)lVar10 - (uint)lVar13;
        uVar1 = (uint)((uint)lVar10 < (uint)lVar13);
        iVar4 = iVar3 - iVar5;
        iVar7 = iVar4 - uVar1;
        if ((iVar7 < 0) ||
           ((iVar7 == 0 || SBORROW4(iVar3,iVar5) != SBORROW4(iVar4,uVar1) && (iVar8 == 0)))) {
          iVar8 = 0;
          iVar7 = 0;
        }
        lVar13 = __allmul(lVar13,2,0);
        lVar9 = lVar9 - CONCAT44(iVar7,iVar8);
        if (lVar11 + lVar13 < lVar9) {
          lVar9 = lVar13 + lVar11;
        }
      }
      else {
        iVar8 = 0;
        iVar7 = 0;
        local_28 = 1;
        lVar9 = lVar11;
      }
      lVar10 = CONCAT44(iVar7,iVar8);
      if (param_7 == 0) goto LAB_005cff8e;
      ftol();
      lVar10 = ftol();
      ftol();
    }
    lVar9 = ftol();
    lVar9 = lVar9 - lVar10;
  }
LAB_005cff8e:
  *param_2 = lVar10;
  *param_3 = lVar9;
  *param_4 = local_28;
  return local_24;
}


