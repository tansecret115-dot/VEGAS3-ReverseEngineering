/* Module: vegas30k.dll
   Function: FUN_010a7150
   Address: 010a7150
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_010a7150(uint param_1,uint param_2,int param_3,int *param_4,int param_5,undefined4 param_6,
            undefined4 param_7,undefined4 *param_8)

{
  uint uVar1;
  SHORT SVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  undefined4 *puVar14;
  int *piVar15;
  undefined4 *puVar16;
  int local_8;
  int *local_4;
  
  uVar1 = param_1;
  uVar5 = *(uint *)(param_1 + 0x34);
  if (uVar5 == 0xffffffff) {
    return 0;
  }
  uVar7 = 0;
  if (*(uint *)(param_1 + 0xa4) != 0) {
    puVar10 = *(uint **)(param_1 + 0xb8);
    do {
      if ((uVar5 <= *puVar10) && (*puVar10 <= *(uint *)(param_1 + 0x38))) {
        return 0;
      }
      uVar7 = uVar7 + 1;
      puVar10 = puVar10 + 1;
    } while (uVar7 < *(uint *)(param_1 + 0xa4));
  }
  iVar11 = param_2 - (int)param_4;
  local_8 = param_3 - param_5;
  if ((uVar5 == 0) || (*(int *)(param_1 + 0x38) == *(int *)(param_1 + 0xa0) + -1)) {
    iVar11 = 0;
  }
  if ((*(int *)(param_1 + 0x5c) != 0) && (SVar2 = GetAsyncKeyState(0x11), -1 < SVar2)) {
    iVar11 = 0;
  }
  piVar8 = (int *)0xffffffff;
  local_4 = (int *)0xffffffff;
  if (*(int *)(uVar1 + 0xa4) != 0) {
    piVar12 = *(int **)(uVar1 + 0xb8);
    piVar15 = *(int **)(uVar1 + 0xb8);
    piVar3 = (int *)*(int *)(uVar1 + 0xa4);
    do {
      local_4 = piVar3;
      param_4 = piVar15;
      piVar15 = *(int **)(*(int *)(uVar1 + 0xb4) + *param_4 * 8);
      param_3 = *(int *)(*(int *)(uVar1 + 0xb4) + 4 + *param_4 * 8);
      piVar13 = piVar15;
      if (piVar8 == (int *)0xffffffff) {
LAB_010a722b:
        piVar8 = piVar15;
      }
      else {
        piVar13 = piVar12;
        if ((int)piVar12 < (int)piVar15) {
          piVar13 = piVar15;
        }
        if ((int)piVar15 < (int)piVar8) goto LAB_010a722b;
      }
      piVar15 = param_4 + 1;
      piVar3 = (int *)((int)local_4 + -1);
      piVar12 = piVar13;
      param_4 = piVar13;
      local_4 = piVar8;
    } while (piVar3 != (int *)0x0);
  }
  if (*(int *)(uVar1 + 0x98) == *(int *)(uVar1 + 0xa0)) {
    iVar6 = *(int *)(uVar1 + 0x34);
    if (0 < iVar6) {
      piVar8 = *(int **)(*(int *)(uVar1 + 0xb4) + -8 + iVar6 * 8);
      param_3 = *(int *)(*(int *)(uVar1 + 0xb4) + -4 + iVar6 * 8);
      piVar12 = piVar8;
      if (local_4 != (int *)0xffffffff) {
        if ((int)param_4 < (int)piVar8) {
          param_4 = piVar8;
        }
        piVar12 = param_4;
        if ((int)local_4 <= (int)piVar8) goto LAB_010a729f;
      }
      param_4 = piVar12;
      local_4 = piVar8;
    }
LAB_010a729f:
    iVar6 = *(int *)(uVar1 + 0x38);
    if (iVar6 < *(int *)(uVar1 + 0xa0) + -1) {
      piVar8 = *(int **)(*(int *)(uVar1 + 0xb4) + 8 + iVar6 * 8);
      param_3 = *(int *)(*(int *)(uVar1 + 0xb4) + 0xc + iVar6 * 8);
      piVar12 = piVar8;
      if (local_4 != (int *)0xffffffff) {
        if ((int)param_4 < (int)piVar8) {
          param_4 = piVar8;
        }
        piVar12 = param_4;
        if ((int)local_4 <= (int)piVar8) goto LAB_010a72e0;
      }
      param_4 = piVar12;
      local_4 = piVar8;
    }
  }
LAB_010a72e0:
  param_2 = *(uint *)(uVar1 + 0x34);
  if (param_2 <= *(uint *)(uVar1 + 0x38)) {
    do {
      iVar6 = *(int *)(*(int *)(uVar1 + 0xb4) + param_2 * 8);
      iVar9 = *(int *)(*(int *)(uVar1 + 0xb4) + 4 + param_2 * 8);
      if (local_8 != 0) {
        if (*(int *)(uVar1 + 0x8c) <= iVar9 + local_8) {
          local_8 = *(int *)(uVar1 + 0x8c) - iVar9;
        }
        if (local_8 + iVar9 < *(int *)(uVar1 + 0x88)) {
          local_8 = *(int *)(uVar1 + 0x88) - iVar9;
        }
      }
      if (iVar11 != 0) {
        if (*(int *)(uVar1 + 0x18) == 0) {
          iVar4 = *(int *)(uVar1 + 0x94);
          if (iVar4 <= iVar6 + iVar11) goto LAB_010a7356;
        }
        else {
          iVar4 = *(int *)(uVar1 + 0x20);
          if (iVar4 <= iVar6 + iVar11) {
LAB_010a7356:
            iVar11 = (iVar4 - iVar6) + -1;
          }
        }
        if (iVar6 + iVar11 <= *(int *)(uVar1 + 0x90)) {
          iVar11 = (*(int *)(uVar1 + 0x90) - iVar6) + 1;
        }
      }
      iVar4 = FUN_010a41a0(uVar1,param_2,&param_1);
      if (iVar4 != 0) {
        iVar4 = *(int *)(uVar1 + 0xbc) + param_1 * 0x1c;
        if ((*(int *)(*(int *)(uVar1 + 0xbc) + 8 + param_1 * 0x1c) != 0) &&
           ((iVar9 + local_8 < *(int *)(iVar4 + 0xc) || (*(int *)(iVar4 + 0x10) < iVar9 + local_8)))
           ) {
          local_8 = 0;
        }
        if ((*(int *)(iVar4 + 4) != 0) &&
           ((iVar6 + iVar11 < *(int *)(iVar4 + 0x14) || (*(int *)(iVar4 + 0x18) < iVar6 + iVar11))))
        {
          iVar11 = 0;
        }
      }
      param_2 = param_2 + 1;
    } while (param_2 <= *(uint *)(uVar1 + 0x38));
  }
  if (local_4 == (int *)0xffffffff) {
LAB_010a743f:
    if (iVar11 != 0) goto LAB_010a7453;
  }
  else if (iVar11 != 0) {
    if (iVar11 < 1) {
      iVar6 = *(int *)(*(int *)(uVar1 + 0xb4) + *(int *)(uVar1 + 0x34) * 8);
      param_3 = *(int *)(*(int *)(uVar1 + 0xb4) + 4 + *(int *)(uVar1 + 0x34) * 8);
      if ((iVar6 + iVar11 <= (int)local_4) && ((int)local_4 < iVar6)) {
        iVar11 = (int)local_4 - iVar6;
      }
    }
    else {
      iVar6 = *(int *)(*(int *)(uVar1 + 0xb4) + *(int *)(uVar1 + 0x38) * 8);
      param_3 = *(int *)(*(int *)(uVar1 + 0xb4) + 4 + *(int *)(uVar1 + 0x38) * 8);
      if (((int)param_4 <= iVar6 + iVar11) && (iVar6 < (int)param_4)) {
        iVar11 = (int)param_4 - iVar6;
      }
    }
    goto LAB_010a743f;
  }
  if (local_8 == 0) {
    return 0;
  }
LAB_010a7453:
  uVar5 = *(uint *)(uVar1 + 0x34);
  if (uVar5 <= *(uint *)(uVar1 + 0x38)) {
    do {
      *(int *)(*(int *)(uVar1 + 0xb4) + uVar5 * 8) =
           *(int *)(*(int *)(uVar1 + 0xb4) + uVar5 * 8) + iVar11;
      iVar6 = uVar5 * 8;
      iVar9 = uVar5 * 8;
      uVar5 = uVar5 + 1;
      *(int *)(*(int *)(uVar1 + 0xb4) + 4 + iVar9) =
           *(int *)(*(int *)(uVar1 + 0xb4) + 4 + iVar6) + local_8;
    } while (uVar5 <= *(uint *)(uVar1 + 0x38));
  }
  if (iVar11 != 0) {
    *param_8 = param_6;
  }
  if (local_8 != 0) {
    param_8[1] = param_7;
  }
  if (iVar11 < 0) {
    uVar5 = *(uint *)(uVar1 + 0x34);
    param_2 = 1;
    if (1 < uVar5) {
      do {
        uVar7 = param_2;
        iVar11 = param_2 * 8;
        if (*(int *)(*(int *)(uVar1 + 0xb4) + uVar5 * 8) <=
            *(int *)(*(int *)(uVar1 + 0xb4) + iVar11)) {
          iVar6 = FUN_010a41a0(uVar1,param_2,&param_1);
          if (iVar6 != 0) {
            if (param_1 < *(int *)(uVar1 + 0xac) - 1U) {
              iVar6 = param_1 * 0x1c;
              uVar5 = param_1;
              do {
                uVar5 = uVar5 + 1;
                puVar14 = (undefined4 *)(*(int *)(uVar1 + 0xbc) + 0x1c + iVar6);
                puVar16 = (undefined4 *)(*(int *)(uVar1 + 0xbc) + iVar6);
                iVar6 = iVar6 + 0x1c;
                for (iVar9 = 7; iVar9 != 0; iVar9 = iVar9 + -1) {
                  *puVar16 = *puVar14;
                  puVar14 = puVar14 + 1;
                  puVar16 = puVar16 + 1;
                }
                uVar7 = param_2;
              } while (uVar5 < *(int *)(uVar1 + 0xac) - 1U);
            }
            *(int *)(uVar1 + 0xac) = *(int *)(uVar1 + 0xac) + -1;
          }
          uVar5 = param_2;
          if (uVar7 < *(int *)(uVar1 + 0xa0) - 1U) {
            do {
              uVar5 = uVar5 + 1;
              iVar6 = *(int *)(uVar1 + 0xb4);
              *(undefined4 *)(iVar6 + iVar11) = *(undefined4 *)(iVar6 + 8 + iVar11);
              *(undefined4 *)(iVar6 + 4 + iVar11) = *(undefined4 *)(iVar6 + 0xc + iVar11);
              iVar6 = FUN_010a4160(uVar1,uVar5,&param_1);
              if (iVar6 != 0) {
                *(int *)(*(int *)(uVar1 + 0xb8) + param_1 * 4) =
                     *(int *)(*(int *)(uVar1 + 0xb8) + param_1 * 4) + -1;
              }
              iVar6 = FUN_010a41a0(uVar1,uVar5,&param_1);
              if (iVar6 != 0) {
                *(int *)(*(int *)(uVar1 + 0xbc) + param_1 * 0x1c) =
                     *(int *)(*(int *)(uVar1 + 0xbc) + param_1 * 0x1c) + -1;
              }
              iVar11 = iVar11 + 8;
            } while (uVar5 < *(int *)(uVar1 + 0xa0) - 1U);
          }
          *(int *)(uVar1 + 0x34) = *(int *)(uVar1 + 0x34) + -1;
          *(int *)(uVar1 + 0x38) = *(int *)(uVar1 + 0x38) + -1;
          *(int *)(uVar1 + 0xa0) = *(int *)(uVar1 + 0xa0) + -1;
        }
        uVar5 = *(uint *)(uVar1 + 0x34);
        param_2 = param_2 + 1;
      } while (param_2 < uVar5);
      return 1;
    }
  }
  else {
    uVar5 = *(int *)(uVar1 + 0x38) + 1;
    if (uVar5 < *(int *)(uVar1 + 0xa0) - 1U) {
      do {
        iVar11 = uVar5 * 8;
        if (*(int *)(*(int *)(uVar1 + 0xb4) + iVar11) <=
            *(int *)(*(int *)(uVar1 + 0xb4) + *(int *)(uVar1 + 0x38) * 8)) {
          param_2 = uVar5;
          iVar6 = FUN_010a41a0(uVar1,uVar5,&param_1);
          if (iVar6 != 0) {
            if (param_1 < *(int *)(uVar1 + 0xac) - 1U) {
              iVar6 = param_1 * 0x1c;
              uVar7 = param_1;
              do {
                uVar7 = uVar7 + 1;
                puVar14 = (undefined4 *)(*(int *)(uVar1 + 0xbc) + 0x1c + iVar6);
                puVar16 = (undefined4 *)(*(int *)(uVar1 + 0xbc) + iVar6);
                iVar6 = iVar6 + 0x1c;
                for (iVar9 = 7; iVar9 != 0; iVar9 = iVar9 + -1) {
                  *puVar16 = *puVar14;
                  puVar14 = puVar14 + 1;
                  puVar16 = puVar16 + 1;
                }
                uVar5 = param_2;
              } while (uVar7 < *(int *)(uVar1 + 0xac) - 1U);
            }
            *(int *)(uVar1 + 0xac) = *(int *)(uVar1 + 0xac) + -1;
          }
          uVar7 = uVar5;
          if (uVar5 < *(int *)(uVar1 + 0xa0) - 1U) {
            do {
              uVar7 = uVar7 + 1;
              iVar6 = *(int *)(uVar1 + 0xb4);
              *(undefined4 *)(iVar6 + iVar11) = *(undefined4 *)(iVar6 + 8 + iVar11);
              *(undefined4 *)(iVar6 + 4 + iVar11) = *(undefined4 *)(iVar6 + 0xc + iVar11);
              iVar6 = FUN_010a4160(uVar1,uVar7,&param_1);
              if (iVar6 != 0) {
                *(int *)(*(int *)(uVar1 + 0xb8) + param_1 * 4) =
                     *(int *)(*(int *)(uVar1 + 0xb8) + param_1 * 4) + -1;
              }
              iVar6 = FUN_010a41a0(uVar1,uVar7,&param_1);
              if (iVar6 != 0) {
                *(int *)(*(int *)(uVar1 + 0xbc) + param_1 * 0x1c) =
                     *(int *)(*(int *)(uVar1 + 0xbc) + param_1 * 0x1c) + -1;
              }
              iVar11 = iVar11 + 8;
              uVar5 = param_2;
            } while (uVar7 < *(int *)(uVar1 + 0xa0) - 1U);
          }
          *(int *)(uVar1 + 0xa0) = *(int *)(uVar1 + 0xa0) + -1;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(int *)(uVar1 + 0xa0) - 1U);
    }
  }
  return 1;
}


