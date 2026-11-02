/* Module: vegas30.exe
   Function: FUN_00597a80
   Address: 00597a80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00597df4) */
/* WARNING: Removing unreachable block (ram,0x00597e18) */

uint FUN_00597a80(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 int param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong lVar17;
  int *local_58;
  uint local_50;
  int local_44;
  int local_3c;
  
  iVar5 = (int)param_1;
  piVar6 = (int *)FUN_005b87b0(*(undefined4 *)((int)param_1 + 0x68));
  iVar1 = *piVar6;
  local_50 = 0;
  local_44 = 0;
  if (0 < iVar1) {
    do {
      iVar11 = *(int *)(piVar6[2] + local_44 * 4);
      if ((*(int *)(iVar11 + 4) == 2) && (iVar7 = FUN_005954d0(iVar11), iVar7 == 0)) {
        FUN_00595760(param_1,iVar11);
        uVar12 = 1;
        uVar8 = 0xc0000000;
        puVar9 = (uint *)(iVar11 + 0x400);
        iVar7 = 0x3a;
        do {
          uVar2 = puVar9[1];
          if (((int)uVar8 <= (int)uVar2) && (((int)uVar8 < (int)uVar2 || (uVar12 <= *puVar9)))) {
            uVar8 = uVar2;
            uVar12 = *puVar9;
          }
          puVar9 = puVar9 + 2;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        *(undefined4 *)(iVar11 + 0x5e0) = 0xffffffff;
        *(uint *)(iVar11 + 0x5e8) = uVar12;
        *(undefined4 *)(iVar11 + 0x5e4) = 0x7fffffff;
        *(uint *)(iVar11 + 0x5ec) = uVar8;
        if ((uVar12 != 1) || (uVar8 != 0xc0000000)) {
          iVar7 = ftol();
          iVar7 = iVar7 + *(int *)(iVar11 + 0x238);
          if (param_6 == 0) {
            lVar17 = FUN_00598a80(iVar11);
            if (lVar17 == 0x7fffffffffffffff) {
              local_58 = *(int **)(*(int *)((int)param_1 + 0x6c) + 4);
              if ((*(int **)(iVar11 + 0x28) == (int *)0x0) ||
                 (lVar17 = CONCAT44(param_5,param_4), **(int **)(iVar11 + 0x28) == 0))
              goto LAB_00597e5a;
            }
            else {
              local_58 = (int *)((uVar12 - (int)lVar17) + iVar7);
            }
            if (-1 < (int)local_58) {
              lVar16 = FUN_00598a20(param_1,lVar17,param_2,param_3);
              if (*(int *)((int)param_1 + 0xd4) != 0) {
                uVar8 = *(uint *)((int)param_1 + 0xb8);
                if (*(longlong *)((int)param_1 + 0xb8) <= lVar16) {
                  uVar12 = *(uint *)((int)param_1 + 200) + uVar8;
                  iVar7 = *(int *)((int)param_1 + 0xcc) + *(int *)((int)param_1 + 0xbc) +
                          (uint)CARRY4(*(uint *)((int)param_1 + 200),uVar8);
                  if (lVar16 < CONCAT44(iVar7,uVar12)) {
                    uVar8 = uVar12 - (uint)lVar16;
                    iVar7 = (iVar7 - (int)((ulonglong)lVar16 >> 0x20)) -
                            (uint)(uVar12 < (uint)lVar16);
                    if ((iVar7 <= (int)local_58 >> 0x1f) &&
                       ((iVar7 < (int)local_58 >> 0x1f || (uVar8 < local_58)))) {
                      local_58 = (int *)uVar8;
                    }
                  }
                }
              }
              goto LAB_00597e44;
            }
          }
          else {
            if (**(int **)(iVar11 + 0x5d0) == 0) {
              uVar8 = 0xffffffff;
              iVar13 = 0x7fffffff;
            }
            else {
              iVar13 = *(int *)(*(int **)(iVar11 + 0x5d0))[2];
              uVar8 = *(uint *)(iVar13 + 0x18);
              iVar13 = *(int *)(iVar13 + 0x1c);
            }
            lVar17 = CONCAT44(iVar13,uVar8);
            FUN_00598a80(iVar11);
            if ((uVar8 == 0xffffffff) && (iVar13 == 0x7fffffff)) {
              if ((*(int **)(iVar11 + 0x28) != (int *)0x0) && (**(int **)(iVar11 + 0x28) != 0)) {
                uVar15 = ftol();
                lVar16 = __alldiv(uVar15,2,0);
                lVar16 = lVar16 + 1;
LAB_00597c4b:
                *(longlong *)(iVar11 + 0x5e0) = lVar16;
              }
            }
            else {
              iVar10 = 0;
              iVar4 = **(int **)(iVar11 + 0x5d0);
              if (0 < iVar4) {
                local_58 = (int *)(*(int **)(iVar11 + 0x5d0))[2];
                uVar12 = uVar8;
                local_3c = iVar13;
                do {
                  lVar16 = CONCAT44(local_3c,uVar12);
                  iVar3 = *local_58;
                  if ((*(uint *)(iVar3 + 0x18) != uVar12) || (*(int *)(iVar3 + 0x1c) != local_3c)) {
                    if (0 < (int)(*(int *)(iVar3 + 0x18) - uVar12)) goto LAB_00597c4b;
                    break;
                  }
                  uVar2 = *(uint *)(iVar3 + 0x28);
                  bVar14 = CARRY4(uVar12,uVar2);
                  uVar12 = uVar12 + uVar2;
                  local_3c = local_3c + ((int)uVar2 >> 0x1f) + (uint)bVar14;
                  iVar10 = iVar10 + 1;
                  local_58 = local_58 + 1;
                } while (iVar10 < iVar4);
              }
              if ((int)((uVar8 - param_4) + iVar7) < 1) {
                local_58 = (int *)0x0;
              }
              else {
                local_58 = (int *)0x4000;
                lVar17 = CONCAT44(iVar13 - (uint)(uVar8 < 0x4000),uVar8 - 0x4000);
                iVar7 = FUN_00598a20(param_1,uVar8,iVar13,param_2,param_3);
                if (*(int *)((int)param_1 + 0xd4) != 0) {
                  local_58 = (int *)(iVar7 - *(int *)((int)param_1 + 0xb8));
                  if (local_58 == (int *)0x0) {
                    local_58 = (int *)0x1;
                  }
                  else if (0x4000 < (int)local_58) {
                    local_58 = (int *)0x4000;
                  }
                  lVar17 = CONCAT44((iVar13 - ((int)local_58 >> 0x1f)) - (uint)(uVar8 < local_58),
                                    uVar8 - (int)local_58);
                }
              }
LAB_00597e44:
              if (0 < (int)local_58) {
                *(longlong *)(iVar11 + 0x5e0) = lVar17;
              }
            }
          }
        }
LAB_00597e5a:
        FUN_00595790(param_1,iVar11);
      }
      local_44 = local_44 + 1;
    } while (local_44 < iVar1);
  }
  local_44 = 0;
  do {
    iVar7 = -1;
    uVar8 = 0xffffffff;
    iVar13 = 0;
    iVar11 = 0x7fffffff;
    if (iVar1 < 1) {
      return local_50;
    }
    param_1 = (int *)piVar6[2];
    do {
      iVar4 = *param_1;
      if (*(int *)(iVar4 + 4) == 2) {
        uVar12 = *(uint *)(iVar4 + 0x5e0);
        iVar4 = *(int *)(iVar4 + 0x5e4);
        if (param_6 == 0) {
          if ((iVar4 <= iVar11) && ((iVar4 < iVar11 || (uVar12 < uVar8)))) goto LAB_00597efc;
        }
        else if (((iVar11 < iVar4) ||
                 (((iVar11 <= iVar4 && (uVar8 < uVar12)) ||
                  ((uVar8 == 0xffffffff && (iVar11 == 0x7fffffff)))))) &&
                ((uVar12 != 0xffffffff || (iVar4 != 0x7fffffff)))) {
LAB_00597efc:
          iVar11 = iVar4;
          uVar8 = uVar12;
          iVar7 = iVar13;
        }
      }
      iVar13 = iVar13 + 1;
      param_1 = param_1 + 1;
    } while (iVar13 < iVar1);
    if (iVar7 < 0) {
      return local_50;
    }
    iVar11 = *(int *)(piVar6[2] + iVar7 * 4);
    FUN_00595760(iVar5,iVar11);
    *(undefined4 *)(iVar11 + 0x5e0) = 0xffffffff;
    *(undefined4 *)(iVar11 + 0x5e4) = 0x7fffffff;
    uVar8 = FUN_00596230(iVar5,iVar11,*(undefined4 *)(iVar11 + 0x5e8),
                         *(undefined4 *)(iVar11 + 0x5ec),param_2,param_3,param_4,param_5,param_6);
    local_50 = local_50 | uVar8;
    FUN_00595790(iVar5,iVar11);
    local_44 = local_44 + 1;
    if (0x13 < local_44) {
      return local_50;
    }
  } while( true );
}


