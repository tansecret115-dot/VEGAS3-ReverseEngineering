/* Module: vegas30.exe
   Function: FUN_005a5520
   Address: 005a5520
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x005a57d8) */

int FUN_005a5520(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  ulonglong uVar10;
  int local_18;
  uint local_10;
  int local_c;
  
  iVar4 = (int)param_1;
  local_10 = 0;
  local_c = 0;
  iVar1 = **(int **)((int)param_1 + 4);
  if (iVar1 < 1) {
    return 0;
  }
  piVar5 = (int *)(*(int **)((int)param_1 + 4))[2];
  local_18 = iVar1;
  do {
    iVar6 = *piVar5;
    if ((*(int *)(iVar6 + 0x438) == 0) && ((*(byte *)(iVar6 + 0x434) & 8) != 0)) {
      uVar8 = *(uint *)(iVar6 + 0x440);
      if (uVar8 < 2) {
        uVar8 = 1;
      }
      uVar8 = (uint)(10000 / (ulonglong)uVar8);
      if (uVar8 < 2) {
        uVar8 = 1;
      }
      if (*(int *)((int)param_1 + 0x20) == 0) {
LAB_005a5626:
        if (uVar8 == 0) {
          uVar8 = 1;
        }
        else if (1000000000 < uVar8) {
          uVar8 = 1000000000;
        }
      }
      else {
        if ((*(byte *)((int)param_1 + 0xd0) & 2) == 0) {
LAB_005a55ec:
          iVar2 = *(int *)(iVar6 + 0x44c);
          iVar7 = *(int *)((int)param_1 + 0x2c);
          uVar3 = *(uint *)((int)param_1 + 0x28);
          if ((iVar7 <= iVar2) && ((iVar7 < iVar2 || (uVar3 <= *(uint *)(iVar6 + 0x448))))) {
            iVar7 = *(int *)((int)param_1 + 0x34) + iVar7 +
                    (uint)CARRY4(*(uint *)((int)param_1 + 0x30),uVar3);
            if ((iVar2 < iVar7) ||
               ((iVar2 <= iVar7 &&
                (*(uint *)(iVar6 + 0x448) <= *(uint *)((int)param_1 + 0x30) + uVar3))))
            goto LAB_005a5626;
          }
          uVar8 = uVar8 * 0x32;
          goto LAB_005a5626;
        }
        iVar2 = *(int *)(iVar6 + 0x44c);
        if (iVar2 < 0) goto LAB_005a55ec;
        if (((iVar2 < *(int *)((int)param_1 + 0x2c)) ||
            (((iVar2 <= *(int *)((int)param_1 + 0x2c) &&
              (*(uint *)(iVar6 + 0x448) < *(uint *)((int)param_1 + 0x28))) ||
             (*(int *)((int)param_1 + 0x3c) < iVar2)))) ||
           ((*(int *)((int)param_1 + 0x3c) <= iVar2 &&
            (*(uint *)((int)param_1 + 0x38) < *(uint *)(iVar6 + 0x448))))) {
          uVar8 = uVar8 * 100000;
          goto LAB_005a5626;
        }
        uVar8 = 1;
      }
      bVar9 = CARRY4(local_10,uVar8);
      local_10 = local_10 + uVar8;
      local_c = local_c + (uint)bVar9;
    }
    piVar5 = piVar5 + 1;
    local_18 = local_18 + -1;
  } while (local_18 != 0);
  if (local_10 != 0 || local_c != 0) {
    uVar8 = rand();
    iVar6 = rand();
    uVar10 = __aullrem(iVar6,uVar8 | iVar6 >> 0x1f,local_10,local_c);
    param_1 = *(int **)(*(int *)((int)param_1 + 4) + 8);
    local_10 = 0;
    local_c = 0;
    local_18 = 0;
    do {
      iVar6 = *param_1;
      if ((*(int *)(iVar6 + 0x438) == 0) && ((*(byte *)(iVar6 + 0x434) & 8) != 0)) {
        uVar8 = *(uint *)(iVar6 + 0x440);
        if (uVar8 < 2) {
          uVar8 = 1;
        }
        uVar8 = (uint)(10000 / (ulonglong)uVar8);
        if (uVar8 < 2) {
          uVar8 = 1;
        }
        if (*(int *)(iVar4 + 0x20) == 0) {
LAB_005a57a2:
          if (uVar8 == 0) {
            uVar8 = 1;
          }
          else if (1000000000 < uVar8) {
            uVar8 = 1000000000;
          }
        }
        else {
          if ((*(byte *)(iVar4 + 0xd0) & 2) == 0) {
LAB_005a5764:
            iVar2 = *(int *)(iVar6 + 0x44c);
            iVar7 = *(int *)(iVar4 + 0x2c);
            uVar3 = *(uint *)(iVar4 + 0x28);
            if ((iVar7 <= iVar2) && ((iVar7 < iVar2 || (uVar3 <= *(uint *)(iVar6 + 0x448))))) {
              iVar7 = *(int *)(iVar4 + 0x34) + iVar7 + (uint)CARRY4(*(uint *)(iVar4 + 0x30),uVar3);
              if ((iVar2 < iVar7) ||
                 ((iVar2 <= iVar7 && (*(uint *)(iVar6 + 0x448) <= *(uint *)(iVar4 + 0x30) + uVar3)))
                 ) goto LAB_005a57a2;
            }
            uVar8 = uVar8 * 0x32;
            goto LAB_005a57a2;
          }
          iVar2 = *(int *)(iVar6 + 0x44c);
          if (iVar2 < 0) goto LAB_005a5764;
          if ((iVar2 < *(int *)(iVar4 + 0x2c)) ||
             ((((iVar2 <= *(int *)(iVar4 + 0x2c) &&
                (*(uint *)(iVar6 + 0x448) < *(uint *)(iVar4 + 0x28))) ||
               (*(int *)(iVar4 + 0x3c) < iVar2)) ||
              ((*(int *)(iVar4 + 0x3c) <= iVar2 &&
               (*(uint *)(iVar4 + 0x38) < *(uint *)(iVar6 + 0x448))))))) {
            uVar8 = uVar8 * 100000;
            goto LAB_005a57a2;
          }
          uVar8 = 1;
        }
        bVar9 = CARRY4(local_10,uVar8);
        local_10 = local_10 + uVar8;
        local_c = local_c + (uint)bVar9;
        if (uVar10 <= CONCAT44(local_c,local_10)) {
          if (param_2 == 0) {
            *(undefined4 *)(iVar6 + 0x448) = 0;
            *(undefined4 *)(iVar6 + 0x43c) = 0;
            *(uint *)(iVar6 + 0x434) = *(uint *)(iVar6 + 0x434) & 0xfffffff7;
            *(undefined4 *)(iVar6 + 0x440) = 0;
            *(undefined4 *)(iVar6 + 0x44c) = 0;
          }
          return iVar6;
        }
      }
      local_18 = local_18 + 1;
      param_1 = param_1 + 1;
    } while (local_18 < iVar1);
  }
  return 0;
}


