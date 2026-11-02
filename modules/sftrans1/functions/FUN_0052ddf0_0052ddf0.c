/* Module: sftrans1.dll
   Function: FUN_0052ddf0
   Address: 0052ddf0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0052ddf0(int param_1,int param_2,int *param_3,int param_4,int *param_5,int param_6,int param_7,
            int param_8,float *param_9,int param_10)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  float *pfVar4;
  undefined1 uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  uint local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_5c;
  int local_58;
  uint local_54;
  uint local_50;
  int local_4c;
  int local_48;
  undefined1 local_44;
  undefined1 uStack_43;
  undefined1 uStack_42;
  byte bStack_41;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  float *local_20;
  int local_1c;
  int local_18;
  int local_14;
  byte *local_10;
  int local_c;
  int local_8;
  
  iVar6 = 0x8000 - param_7;
  if (((param_6 != 0) || (param_7 != 0)) && (0 < iVar6)) {
    param_7 = param_7 + iVar6;
    param_6 = param_6 - iVar6;
    if (param_6 < 0) {
      param_6 = 0;
    }
  }
  local_8 = param_1;
  if ((DAT_00621400 == 0) && (param_10 == 4)) {
    local_20 = (float *)0x0;
    do {
      pfVar4 = local_20;
      uVar5 = ftol();
      (&DAT_00621000)[(int)pfVar4] = uVar5;
      local_20 = (float *)((int)pfVar4 + 1);
    } while ((int)local_20 < 0x400);
    DAT_00621400 = 1;
  }
  local_18 = param_7 + param_6;
  piVar13 = *(int **)(local_8 + 4);
  if ((0 < *piVar13) && (local_18 != 0)) {
    uStack_42 = ftol();
    uStack_43 = ftol();
    local_44 = ftol();
    bStack_41 = ftol();
    iVar6 = local_8;
    iVar10 = 0;
    if (0 < *piVar13) {
      do {
        piVar7 = (int *)(piVar13[1] * iVar10 + piVar13[2]);
        if ((*(byte *)(piVar13[1] * iVar10 + 0xc + piVar13[2]) & 1) == 0) {
          *piVar7 = *piVar7 + *param_5;
          piVar7[1] = piVar7[1] + *param_5;
          iVar12 = param_5[1];
        }
        else {
          *piVar7 = *piVar7 + param_5[1];
          piVar7[1] = piVar7[1] + param_5[1];
          iVar12 = *param_5;
        }
        iVar10 = iVar10 + 1;
        piVar7[2] = piVar7[2] + iVar12;
        piVar13 = *(int **)(local_8 + 4);
      } while (iVar10 < *piVar13);
    }
    FUN_0052dda0(0,&local_54);
    iVar10 = 1;
    if (1 < **(int **)(iVar6 + 4)) {
      do {
        FUN_0052dda0(iVar10,&local_74);
        if ((int)local_74 < (int)local_54) {
          local_54 = local_74;
        }
        if (local_70 < (int)local_50) {
          local_50 = local_70;
        }
        if (local_4c < local_6c) {
          local_4c = local_6c;
        }
        if (local_48 < local_68) {
          local_48 = local_68;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < **(int **)(local_8 + 4));
    }
    uVar8 = local_50 - local_18;
    uVar11 = local_54 - local_18;
    local_64 = (int)((uVar11 & 0xffffc000) + ((int)uVar11 >> 0x1f & 0x3fffU)) >> 0xe;
    local_38 = (int)((uVar8 & 0xffffc000) + ((int)uVar8 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar6 = ((local_48 + local_18) - 1U | 0x3fff) + 1;
    iVar6 = (int)(iVar6 + (iVar6 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar10 = ((local_4c + local_18) - 1U | 0x3fff) + 1;
    local_5c = (int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar10 = ((local_50 + param_7) - 1 | 0x3fff) + 1;
    local_70 = (int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe;
    iVar10 = ((local_54 + param_7) - 1 | 0x3fff) + 1;
    local_74 = (int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe;
    local_68 = (int)((local_48 - param_7 & 0xffffc000U) + (local_48 - param_7 >> 0x1f & 0x3fffU)) >>
               0xe;
    local_6c = (int)((local_4c - param_7 & 0xffffc000U) + (local_4c - param_7 >> 0x1f & 0x3fffU)) >>
               0xe;
    if (local_64 < 0) {
      local_64 = 0;
    }
    if (local_38 < 0) {
      local_38 = 0;
    }
    if (*param_3 < local_5c) {
      local_5c = *param_3;
    }
    if (param_3[1] < iVar6) {
      iVar6 = param_3[1];
    }
    local_34 = local_38 * param_4 + param_2;
    local_c = local_38 * 0x4000 + 0x2000;
    if (local_38 < iVar6) {
      local_3c = local_64 * 0x4000 + 0x2000;
      local_1c = local_64;
      local_58 = iVar6;
      local_54 = uVar11;
      local_50 = uVar8;
      local_4c = local_4c + local_18;
      local_48 = local_48 + local_18;
      do {
        if ((local_38 <= local_70) || (local_24 = 1, local_68 <= local_38)) {
          local_24 = 0;
        }
        param_3 = (int *)local_3c;
        iVar10 = local_1c;
        if (local_1c < local_5c) {
          local_20 = (float *)(local_1c * 0x10 + 8 + local_34);
          local_10 = (byte *)(local_34 + 2 + local_1c * 4);
          do {
            if (((local_24 == 0) || (local_1c <= (int)local_74)) || (local_6c <= local_1c)) {
              iVar12 = 0;
              piVar13 = *(int **)(local_8 + 4);
              param_5 = (int *)param_7;
              bVar3 = false;
              iVar6 = *piVar13;
              iVar10 = local_18;
              if (iVar6 < 1) {
LAB_0052e223:
                local_14 = 0;
                if (0 < iVar6) {
                  do {
                    uVar8 = *(uint *)(piVar13[1] * local_14 + 0xc + piVar13[2]);
                    piVar7 = (int *)(piVar13[1] * local_14 + piVar13[2]);
                    if ((uVar8 & 1) == 0) {
                      iVar6 = *piVar7 - (int)param_3;
                      if (*piVar7 - (int)param_3 < 0) {
                        iVar6 = iVar10;
                      }
                      local_2c = (int)param_3 - piVar7[1];
                      if ((int)param_3 - piVar7[1] < 0) {
                        local_2c = iVar10;
                      }
                      if (iVar6 < local_2c) {
                        local_2c = iVar6;
                      }
                      if ((-1 < local_2c) && (local_2c < iVar10)) {
                        local_28 = piVar7[2] - local_c;
                        if ((uVar8 & 2) != 0) {
                          local_28 = -local_28;
                        }
                        if (((0 < local_28) && (local_28 < iVar10)) &&
                           (iVar6 = ftol(), iVar6 < iVar10)) {
                          bVar3 = true;
                          iVar10 = iVar6;
                        }
                      }
                    }
                    local_14 = local_14 + 1;
                  } while (local_14 < *piVar13);
                }
              }
              else {
                do {
                  piVar7 = (int *)(piVar13[1] * iVar12 + piVar13[2]);
                  if ((piVar7[3] & 1U) == 0) {
                    if ((*piVar7 <= (int)param_3) && ((int)param_3 <= piVar7[1])) {
                      iVar6 = piVar7[2];
                      iVar9 = local_c;
                      goto LAB_0052e1e7;
                    }
                  }
                  else if ((*piVar7 <= local_c) && (local_c <= piVar7[1])) {
                    iVar6 = piVar7[2];
                    iVar9 = (int)param_3;
LAB_0052e1e7:
                    iVar6 = iVar6 - iVar9;
                    if ((piVar7[3] & 2U) != 0) {
                      iVar6 = -iVar6;
                    }
                    if (iVar6 < 0) {
                      iVar9 = -iVar6;
                      iVar6 = iVar10;
                      if (iVar9 < (int)param_5) goto LAB_0052e208;
                    }
                    else {
                      iVar9 = (int)param_5;
                      if (iVar6 < iVar10) {
LAB_0052e208:
                        param_5 = (int *)iVar9;
                        bVar3 = true;
                        iVar10 = iVar6;
                      }
                    }
                  }
                  iVar6 = *piVar13;
                  iVar12 = iVar12 + 1;
                } while (iVar12 < iVar6);
                if (!bVar3) goto LAB_0052e223;
              }
              if (param_8 != 0) {
                iVar10 = iVar10 + param_8;
                if (local_18 < iVar10) {
                  iVar10 = local_18;
                }
                param_5 = (int *)((int)param_5 + param_8);
                if (param_7 < (int)param_5) {
                  param_5 = (int *)param_7;
                }
              }
              if (bVar3) {
                if (param_10 == 4) {
                  uVar8 = local_30 >> 8;
                  local_30 = local_30 & 0xffffff00;
                  if (iVar10 < param_6) {
LAB_0052e347:
                    *(uint *)(local_10 + -2) =
                         CONCAT13(bStack_41,CONCAT12(uStack_42,CONCAT11(uStack_43,local_44)));
                  }
                  else {
                    if (param_7 != 0) {
                      iVar6 = iVar10 - param_6;
                      if ((int)param_5 <= iVar10 - param_6) {
                        iVar6 = (int)param_5;
                      }
                      local_30 = CONCAT31((int3)uVar8,
                                          -1 - (&DAT_00621000)
                                               [(int)(((longlong)iVar6 * 0x3ff) / (longlong)param_7)
                                               ]);
                      if ((char)(-1 - (&DAT_00621000)
                                      [(int)(((longlong)iVar6 * 0x3ff) / (longlong)param_7)]) == -1)
                      goto LAB_0052e347;
                    }
                    uVar8 = local_30 & 0xff;
                    iVar6 = ((CONCAT12(uStack_42,CONCAT11(uStack_43,local_44)) & 0xff) -
                            (uint)local_10[-2]) * uVar8;
                    local_10[-2] = (char)(iVar6 + (iVar6 >> 0x1f & 0xffU) >> 8) + local_10[-2];
                    iVar6 = ((CONCAT12(bStack_41,CONCAT11(uStack_42,uStack_43)) & 0xff) -
                            (uint)local_10[-1]) * uVar8;
                    local_10[-1] = (char)(iVar6 + (iVar6 >> 0x1f & 0xffU) >> 8) + local_10[-1];
                    iVar6 = ((CONCAT11(bStack_41,uStack_42) & 0xff) - (uint)*local_10) * uVar8;
                    *local_10 = (char)(iVar6 + (iVar6 >> 0x1f & 0xffU) >> 8) + *local_10;
                    iVar6 = ((uint)bStack_41 - (uint)local_10[1]) * uVar8;
                    local_10[1] = (char)(iVar6 + (iVar6 >> 0x1f & 0xffU) >> 8) + local_10[1];
                  }
                }
                else {
                  fVar1 = _DAT_0055c008;
                  if ((param_6 <= iVar10) && (fVar1 = _DAT_00557840, param_7 != 0)) {
                    iVar6 = iVar10 - param_6;
                    if ((int)param_5 <= iVar10 - param_6) {
                      iVar6 = (int)param_5;
                    }
                    param_5 = (int *)iVar6;
                    fVar2 = (float)(int)param_5 / (float)param_7;
                    fVar1 = fVar2 * fVar2 * fVar2;
                    fVar1 = _DAT_0055c008 - (fVar2 * fVar2 * _DAT_0056d96c - (fVar1 + fVar1));
                  }
                  local_20[-2] = (*param_9 - local_20[-2]) * fVar1 + local_20[-2];
                  local_20[-1] = (param_9[1] - local_20[-1]) * fVar1 + local_20[-1];
                  *local_20 = (param_9[2] - *local_20) * fVar1 + *local_20;
                  local_20[1] = (param_9[3] - local_20[1]) * fVar1 + local_20[1];
                }
              }
            }
            param_3 = (int *)((int)param_3 + 0x4000);
            local_1c = local_1c + 1;
            local_10 = local_10 + 4;
            local_20 = local_20 + 4;
            iVar6 = local_58;
            iVar10 = local_64;
          } while (local_1c < local_5c);
        }
        local_34 = local_34 + param_4;
        local_c = local_c + 0x4000;
        local_38 = local_38 + 1;
        local_1c = iVar10;
      } while (local_38 < iVar6);
    }
  }
  return;
}


