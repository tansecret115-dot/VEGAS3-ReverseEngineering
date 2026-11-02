/* Module: vegas30.exe
   Function: FUN_00477820
   Address: 00477820
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00477c57) */
/* WARNING: Removing unreachable block (ram,0x00477bef) */
/* WARNING: Removing unreachable block (ram,0x00477b05) */
/* WARNING: Removing unreachable block (ram,0x004779d4) */
/* WARNING: Removing unreachable block (ram,0x00477915) */
/* WARNING: Removing unreachable block (ram,0x00477a46) */
/* WARNING: Removing unreachable block (ram,0x00477b5b) */
/* WARNING: Removing unreachable block (ram,0x00477c20) */
/* WARNING: Removing unreachable block (ram,0x00477c8e) */

int FUN_00477820(undefined4 param_1,int *param_2,int param_3,undefined4 param_4,int param_5,
                uint param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int local_2c;
  
  iVar6 = *param_2;
  iVar5 = param_2[1];
  local_2c = 0;
  if (iVar6 == 0) {
    return 0;
  }
  iVar2 = FUN_00476330(iVar6,(double)*(float *)(iVar6 + 0x60));
  lVar13 = FUN_00477cb0(iVar6,5);
  iVar7 = (int)((ulonglong)lVar13 >> 0x20);
  iVar3 = (int)lVar13;
  uVar9 = *(uint *)(iVar6 + 0x18);
  uVar8 = *(uint *)(iVar6 + 0x20) + uVar9;
  iVar4 = *(int *)(iVar6 + 0x24) + *(int *)(iVar6 + 0x1c) +
          (uint)CARRY4(*(uint *)(iVar6 + 0x20),uVar9);
  uVar1 = param_2[4];
  iVar12 = param_2[5];
  if ((uVar1 == uVar9) && (iVar12 == *(int *)(iVar6 + 0x1c))) {
    if ((*(int *)(iVar6 + 0x7c) < 0) ||
       ((*(int *)(iVar6 + 0x7c) < 1 && (*(int *)(iVar6 + 0x78) == 0)))) {
      uVar9 = param_6 - *(uint *)(iVar6 + 0x18);
      iVar10 = (param_7 - *(int *)(iVar6 + 0x1c)) - (uint)(param_6 < *(uint *)(iVar6 + 0x18));
      iVar5 = -(iVar7 + (uint)(iVar3 != 0));
      if ((iVar5 <= iVar10) &&
         ((((iVar5 < iVar10 || ((uint)-iVar3 <= uVar9)) && (CONCAT44(iVar10,uVar9) <= lVar13)) &&
          ((iVar5 = *(int *)(*(int *)(iVar6 + 0x218) + 0x24), iVar5 + -2 <= param_5 &&
           (param_5 <= iVar5 + 6)))))) {
        return 4;
      }
    }
    else {
      if (param_3 == iVar6) {
        uVar9 = param_6 - param_2[0x38];
        iVar10 = (param_7 - param_2[0x39]) - (uint)(param_6 < (uint)param_2[0x38]);
        iVar11 = -(iVar7 + (uint)(iVar3 != 0));
        if (((iVar11 <= iVar10) && ((iVar11 < iVar10 || ((uint)-iVar3 <= uVar9)))) &&
           (CONCAT44(iVar10,uVar9) <= lVar13)) {
          local_2c = 1;
          if ((iVar2 + -5 <= param_5) && (param_5 <= iVar2 + 5)) {
            local_2c = 4;
          }
          if (iVar5 != 0) {
            iVar10 = *(int *)(iVar5 + 0x24) + *(int *)(iVar5 + 0x1c) +
                     (uint)CARRY4(*(uint *)(iVar5 + 0x20),*(uint *)(iVar5 + 0x18));
            if ((iVar10 <= iVar4) &&
               ((iVar10 < iVar4 || (*(uint *)(iVar5 + 0x20) + *(uint *)(iVar5 + 0x18) <= uVar8)))) {
              local_2c = 2;
            }
          }
        }
      }
      if (param_3 == iVar5) {
        iVar10 = (param_7 - iVar12) - (uint)(param_6 < uVar1);
        iVar11 = -(iVar7 + (uint)(iVar3 != 0));
        if (((iVar11 <= iVar10) &&
            (((iVar11 < iVar10 || ((uint)-iVar3 <= param_6 - uVar1)) &&
             (CONCAT44(iVar10,param_6 - uVar1) <= lVar13)))) && (iVar5 != 0)) {
          iVar10 = *(int *)(iVar5 + 0x24) + *(int *)(iVar5 + 0x1c) +
                   (uint)CARRY4(*(uint *)(iVar5 + 0x20),*(uint *)(iVar5 + 0x18));
          if ((iVar10 <= iVar4) &&
             ((iVar10 < iVar4 || (*(uint *)(iVar5 + 0x20) + *(uint *)(iVar5 + 0x18) <= uVar8)))) {
            return 9;
          }
        }
      }
      if (local_2c != 0) {
        return local_2c;
      }
    }
  }
  if (param_3 != iVar6) {
    return local_2c;
  }
  if ((param_2[0x38] == uVar8) && (param_2[0x39] == iVar4)) {
    if ((*(int *)(iVar6 + 0x84) < 0) ||
       ((*(int *)(iVar6 + 0x84) < 1 && (*(int *)(iVar6 + 0x80) == 0)))) {
      iVar12 = (param_7 - iVar4) - (uint)(param_6 < uVar8);
      iVar5 = -(iVar7 + (uint)(iVar3 != 0));
      if ((iVar5 <= iVar12) &&
         ((((iVar5 < iVar12 || ((uint)-iVar3 <= param_6 - uVar8)) &&
           (CONCAT44(iVar12,param_6 - uVar8) <= lVar13)) &&
          ((iVar5 = *(int *)(*(int *)(iVar6 + 0x218) + 0x24), iVar5 + -2 <= param_5 &&
           (param_5 <= iVar5 + 6)))))) {
        return 5;
      }
    }
    else {
      iVar12 = (param_7 - iVar12) - (uint)(param_6 < uVar1);
      iVar5 = -(iVar7 + (uint)(iVar3 != 0));
      if (((iVar5 <= iVar12) && ((iVar5 < iVar12 || ((uint)-iVar3 <= param_6 - uVar1)))) &&
         (CONCAT44(iVar12,param_6 - uVar1) <= lVar13)) {
        if (param_5 < iVar2 + -5) {
          return 3;
        }
        if (param_5 <= iVar2 + 5) {
          return 5;
        }
        return 3;
      }
    }
  }
  if (DAT_00647724 < 2) {
    return local_2c;
  }
  iVar5 = *(int *)(*(int *)(iVar6 + 0x218) + 0x24);
  if (DAT_006477b8 < *(int *)(*(int *)(iVar6 + 0x218) + 0x2c) - iVar5) {
    iVar5 = iVar5 + -2;
    if (iVar5 <= iVar2 + -5) {
      iVar5 = iVar2 + -5;
    }
    if (param_5 < iVar5) {
      return local_2c;
    }
    if (iVar2 + 5 < param_5) {
      return local_2c;
    }
    if ((-1 < *(int *)(iVar6 + 0x7c)) &&
       (((0 < *(int *)(iVar6 + 0x7c) || (*(int *)(iVar6 + 0x78) != 0)) &&
        (*(longlong *)(iVar6 + 0x78) <= lVar13)))) {
      uVar9 = param_6 - *(uint *)(iVar6 + 0x18);
      iVar12 = (param_7 - *(int *)(iVar6 + 0x1c)) - (uint)(param_6 < *(uint *)(iVar6 + 0x18));
      iVar5 = -(iVar7 + (uint)(iVar3 != 0));
      if ((iVar5 <= iVar12) &&
         (((iVar5 < iVar12 || ((uint)-iVar3 <= uVar9)) && (CONCAT44(iVar12,uVar9) <= lVar13)))) {
        return 4;
      }
    }
    if (*(int *)(iVar6 + 0x84) < 0) {
      return 8;
    }
    if ((*(int *)(iVar6 + 0x84) < 1) && (*(int *)(iVar6 + 0x80) == 0)) {
      return 8;
    }
    if (lVar13 < *(longlong *)(iVar6 + 0x80)) {
      return 8;
    }
    iVar6 = (param_7 - iVar4) - (uint)(param_6 < uVar8);
    iVar5 = -(iVar7 + (uint)(iVar3 != 0));
    if (iVar5 <= iVar6) {
      if ((iVar6 <= iVar5) && (param_6 - uVar8 < (uint)-iVar3)) {
        return 8;
      }
      if (CONCAT44(iVar6,param_6 - uVar8) <= lVar13) {
        return 5;
      }
      return 8;
    }
    return 8;
  }
  return local_2c;
}


