/* Module: sftrans1.dll
   Function: FUN_0053d1c0
   Address: 0053d1c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_0053d1c0(int param_1,double *param_2,double *param_3,int *param_4,byte *param_5,int param_6)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  byte *pbVar18;
  int iVar19;
  byte *pbVar20;
  byte *pbVar21;
  uint uVar22;
  byte *pbVar23;
  byte *local_48;
  undefined4 local_44;
  byte *local_30;
  int local_2c;
  int local_28;
  
  if (param_6 == 0) {
    local_30 = *(byte **)(param_1 + 0x10c);
    pbVar21 = (byte *)(param_1 + 300);
    piVar17 = (int *)(param_1 + 0xe0);
  }
  else {
    local_30 = *(byte **)(param_1 + 0xd4);
    pbVar21 = (byte *)(param_1 + 0x124);
    piVar17 = (int *)(param_1 + 0xa8);
  }
  uVar22 = (uint)pbVar21[3];
  local_2c = piVar17[1];
  uVar2 = *(ushort *)((int)piVar17 + 0xe);
  uVar5 = *param_4 + 3U & 0xfffffffc;
  uVar6 = local_2c * (uint)uVar2 + 0x1f;
  local_44 = CONCAT13(pbVar21[3],
                      CONCAT12((char)((pbVar21[2] * uVar22) / 0xff),
                               CONCAT11((char)((pbVar21[1] * uVar22) / 0xff),
                                        (char)((*pbVar21 * uVar22) / 0xff))));
  uVar6 = (uint)((int)((uVar6 & 0xffffffe0) + ((int)uVar6 >> 0x1f & 7U)) >> 3) >> 2;
  if (*(int *)(param_1 + 0x114) == 0) {
    iVar7 = piVar17[2];
  }
  else {
    local_2c = *(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x80);
    iVar7 = *(int *)(param_1 + 0x8c) - *(int *)(param_1 + 0x84);
  }
  if (local_30 != (byte *)0x0) goto LAB_0053d32f;
  if (piVar17[4] == 0) {
    if (((piVar17[8] != 0) || (uVar2 == 0)) || (8 < uVar2)) goto LAB_0053d324;
    iVar9 = *piVar17 + (1 << ((byte)uVar2 & 0x1f)) * 4;
  }
  else {
    if (piVar17[4] == 3) {
      local_30 = (byte *)(piVar17 + 0xd);
      goto LAB_0053d32f;
    }
LAB_0053d324:
    iVar9 = *piVar17 + piVar17[8] * 4;
  }
  local_30 = (byte *)(iVar9 + (int)piVar17);
LAB_0053d32f:
  floor(*param_2);
  iVar8 = ftol();
  floor(*param_3);
  param_2 = (double *)ftol();
  iVar9 = ftol();
  iVar10 = ftol();
  iVar11 = (0x100 - iVar9) * iVar10;
  iVar12 = (0x100 - iVar10) * iVar9;
  iVar15 = *(int *)(param_1 + 0x120);
  iVar12 = (int)(iVar12 + (iVar12 >> 0x1f & 0xffU)) >> 8;
  iVar9 = (int)(iVar10 * iVar9 + (iVar10 * iVar9 >> 0x1f & 0xffU)) >> 8;
  iVar13 = iVar15 * iVar9;
  iVar10 = (int)(iVar11 + (iVar11 >> 0x1f & 0xffU)) >> 8;
  iVar11 = iVar15 * iVar10;
  iVar14 = iVar15 * iVar12;
  iVar15 = iVar15 * (((0x100 - iVar12) - iVar10) - iVar9);
  iVar10 = *param_4;
  iVar9 = iVar10 + iVar8;
  iVar12 = param_4[1] + (int)param_2;
  if (iVar8 < 0) {
    param_5 = param_5 + -iVar8;
    param_4 = (int *)0x0;
    param_3 = (double *)-iVar8;
    pbVar23 = local_30;
  }
  else {
    param_3 = (double *)0x0;
    pbVar23 = local_30 + iVar8 * 4;
    param_4 = (int *)iVar8;
  }
  bVar3 = iVar9 < local_2c;
  if (bVar3) {
    local_2c = iVar9 + 1;
  }
  param_4 = (int *)(local_2c - (int)param_4);
  if ((int)param_2 < 0) {
    param_5 = param_5 + -((int)param_2 * uVar5);
    param_2 = (double *)0x0;
  }
  else {
    pbVar23 = pbVar23 + (int)param_2 * uVar6 * 4;
  }
  bVar4 = iVar12 < iVar7;
  if (bVar4) {
    iVar7 = iVar12 + 1;
  }
  local_2c = iVar7 - (int)param_2;
  param_2 = (double *)(param_5 + -uVar5);
  if (param_6 == 0) {
    if (*(int *)(*(int *)(param_1 + 0x18) + 0xc4) == 0) {
      iVar7 = (int)param_4 + -1;
      if (0 < local_2c) {
        do {
          pbVar20 = param_5;
          if (param_3 == (double *)0x0) {
            iVar9 = (uint)*pbVar20 * iVar15;
LAB_0053dd56:
            iVar8 = (uint)*(byte *)param_2 * iVar11;
          }
          else {
            if ((double *)iVar10 != param_3) {
              iVar9 = (uint)pbVar20[-1] * iVar14 + (uint)*(byte *)((int)param_2 + -1) * iVar13 +
                      (uint)*pbVar20 * iVar15;
              goto LAB_0053dd56;
            }
            iVar9 = (uint)pbVar20[-1] * iVar14;
            iVar8 = (uint)*(byte *)((int)param_2 + -1) * iVar13;
          }
          iVar9 = (int)(iVar9 + iVar8 + (iVar9 + iVar8 >> 0x1f & 0xffU)) >> 8;
          if (0 < iVar9) {
            iVar8 = (int)((uint)pbVar21[3] * iVar9) / 0xff;
            iVar16 = 0x100 - iVar9;
            iVar12 = (uint)pbVar23[2] * iVar16 + (uint)pbVar21[2] * iVar8;
            pbVar23[2] = (byte)(iVar12 + (iVar12 >> 0x1f & 0xffU) >> 8);
            iVar12 = (uint)pbVar21[1] * iVar8 + (uint)pbVar23[1] * iVar16;
            pbVar23[1] = (byte)(iVar12 + (iVar12 >> 0x1f & 0xffU) >> 8);
            iVar8 = (uint)*pbVar21 * iVar8 + (uint)*pbVar23 * iVar16;
            *pbVar23 = (byte)(iVar8 + (iVar8 >> 0x1f & 0xffU) >> 8);
            iVar9 = ((uint)pbVar21[3] - (uint)pbVar23[3]) * iVar9;
            pbVar23[3] = (char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8) + pbVar23[3];
          }
          iVar9 = 1;
          param_6 = 1;
          if (1 < iVar7) {
            param_5 = pbVar23 + 5;
            local_30 = (byte *)param_2;
            do {
              iVar9 = (uint)pbVar20[param_6] * iVar15 +
                      (uint)local_30[(int)pbVar20 - (int)param_2] * iVar14 +
                      (uint)local_30[1] * iVar11 + (uint)*local_30 * iVar13;
              iVar9 = (int)(iVar9 + (iVar9 >> 0x1f & 0xffU)) >> 8;
              if (0 < iVar9) {
                if (iVar9 < 0x100) {
                  iVar8 = (int)((uint)pbVar21[3] * iVar9) / 0xff;
                  iVar16 = 0x100 - iVar9;
                  iVar12 = (uint)param_5[1] * iVar16 + (uint)pbVar21[2] * iVar8;
                  param_5[1] = (byte)(iVar12 + (iVar12 >> 0x1f & 0xffU) >> 8);
                  iVar12 = (uint)*param_5 * iVar16 + (uint)pbVar21[1] * iVar8;
                  *param_5 = (byte)(iVar12 + (iVar12 >> 0x1f & 0xffU) >> 8);
                  iVar8 = (uint)param_5[-1] * iVar16 + (uint)*pbVar21 * iVar8;
                  param_5[-1] = (byte)(iVar8 + (iVar8 >> 0x1f & 0xffU) >> 8);
                  iVar9 = ((uint)pbVar21[3] - (uint)param_5[2]) * iVar9;
                  param_5[2] = (char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8) + param_5[2];
                }
                else {
                  *(undefined4 *)(param_5 + -1) = local_44;
                }
              }
              iVar9 = param_6 + 1;
              local_30 = local_30 + 1;
              param_5 = param_5 + 4;
              param_6 = iVar9;
            } while (iVar9 < iVar7);
          }
          if (iVar9 < (int)param_4) {
            if (iVar10 == iVar7 + (int)param_3) {
              iVar8 = (uint)pbVar20[iVar9 + -1] * iVar14 +
                      (uint)*(byte *)((int)param_2 + iVar9 + -1) * iVar13;
            }
            else {
              iVar8 = (uint)pbVar20[iVar9 + -1] * iVar14 +
                      (uint)*(byte *)((int)param_2 + iVar9 + -1) * iVar13 +
                      (uint)pbVar20[iVar9] * iVar15 + (uint)*(byte *)((int)param_2 + iVar9) * iVar11
              ;
            }
            iVar8 = (int)(iVar8 + (iVar8 >> 0x1f & 0xffU)) >> 8;
            if (0 < iVar8) {
              iVar12 = (int)((uint)pbVar21[3] * iVar8) / 0xff;
              iVar19 = 0x100 - iVar8;
              iVar16 = (uint)pbVar23[iVar9 * 4 + 2] * iVar19 + (uint)pbVar21[2] * iVar12;
              pbVar23[iVar9 * 4 + 2] = (byte)(iVar16 + (iVar16 >> 0x1f & 0xffU) >> 8);
              iVar16 = (uint)pbVar21[1] * iVar12 + (uint)pbVar23[iVar9 * 4 + 1] * iVar19;
              pbVar23[iVar9 * 4 + 1] = (byte)(iVar16 + (iVar16 >> 0x1f & 0xffU) >> 8);
              iVar12 = (uint)pbVar23[iVar9 * 4] * iVar19 + (uint)*pbVar21 * iVar12;
              bVar1 = pbVar23[iVar9 * 4 + 3];
              pbVar23[iVar9 * 4] = (byte)(iVar12 + (iVar12 >> 0x1f & 0xffU) >> 8);
              iVar8 = ((uint)pbVar21[3] - (uint)bVar1) * iVar8;
              pbVar23[iVar9 * 4 + 3] = (char)(iVar8 + (iVar8 >> 0x1f & 0xffU) >> 8) + bVar1;
            }
          }
          pbVar23 = pbVar23 + uVar6 * 4;
          local_2c = local_2c + -1;
          param_5 = pbVar20 + uVar5;
          param_2 = (double *)pbVar20;
        } while (local_2c != 0);
      }
    }
    else {
      iVar7 = (int)param_4 + -1;
      local_28 = local_2c;
      if (0 < local_2c) {
        do {
          pbVar20 = param_5;
          if (param_3 == (double *)0x0) {
            iVar9 = (uint)*pbVar20 * iVar15;
LAB_0053db20:
            iVar8 = (uint)*(byte *)param_2 * iVar11;
          }
          else {
            if ((double *)iVar10 != param_3) {
              iVar9 = (uint)pbVar20[-1] * iVar14 + (uint)*(byte *)((int)param_2 + -1) * iVar13 +
                      (uint)*pbVar20 * iVar15;
              goto LAB_0053db20;
            }
            iVar9 = (uint)pbVar20[-1] * iVar14;
            iVar8 = (uint)*(byte *)((int)param_2 + -1) * iVar13;
          }
          iVar9 = ((uint)pbVar21[3] - (uint)pbVar23[3]) *
                  ((int)(iVar9 + iVar8 + (iVar9 + iVar8 >> 0x1f & 0xffU)) >> 8);
          iVar8 = 1;
          param_6 = 1;
          pbVar23[3] = (char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8) + pbVar23[3];
          if (1 < iVar7) {
            param_5 = pbVar23 + 7;
            pbVar18 = (byte *)param_2;
            do {
              iVar9 = (uint)pbVar20[param_6] * iVar15 +
                      (uint)pbVar18[(int)pbVar20 - (int)param_2] * iVar14 +
                      (uint)pbVar18[1] * iVar11 + (uint)*pbVar18 * iVar13;
              iVar9 = ((int)(iVar9 + (iVar9 >> 0x1f & 0xffU)) >> 8) *
                      ((uint)pbVar21[3] - (uint)*param_5);
              iVar8 = param_6 + 1;
              *param_5 = (char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8) + *param_5;
              param_5 = param_5 + 4;
              pbVar18 = pbVar18 + 1;
              param_6 = iVar8;
            } while (iVar8 < iVar7);
          }
          if (iVar8 < (int)param_4) {
            if (iVar10 == iVar7 + (int)param_3) {
              iVar9 = (uint)pbVar20[iVar8 + -1] * iVar14;
              iVar12 = (uint)*(byte *)((int)param_2 + iVar8 + -1) * iVar13;
            }
            else {
              iVar9 = (uint)pbVar20[iVar8 + -1] * iVar14 +
                      (uint)*(byte *)((int)param_2 + iVar8 + -1) * iVar13 +
                      (uint)pbVar20[iVar8] * iVar15;
              iVar12 = (uint)*(byte *)((int)param_2 + iVar8) * iVar11;
            }
            iVar9 = ((uint)pbVar21[3] - (uint)pbVar23[iVar8 * 4 + 3]) *
                    ((int)((iVar9 + iVar12 >> 0x1f & 0xffU) + iVar9 + iVar12) >> 8);
            pbVar23[iVar8 * 4 + 3] =
                 (char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8) + pbVar23[iVar8 * 4 + 3];
          }
          pbVar23 = pbVar23 + uVar6 * 4;
          local_28 = local_28 + -1;
          param_5 = pbVar20 + uVar5;
          param_2 = (double *)pbVar20;
          if (local_28 == 0) {
            return 0;
          }
        } while( true );
      }
    }
  }
  else if (*(int *)(*(int *)(param_1 + 0x18) + 0xa0) == 0) {
    if (bVar3) {
      param_4 = (int *)((int)param_4 + -1);
    }
    if (bVar4) {
      local_2c = local_2c + -1;
    }
    param_3 = (double *)local_2c;
    if (0 < local_2c) {
      do {
        param_6 = 0;
        if (0 < (int)param_4) {
          pbVar20 = pbVar23 + 1;
          do {
            iVar7 = (uint)param_5[param_6] * *(int *)(param_1 + 0x120);
            if (0 < iVar7) {
              if (iVar7 < 0x100) {
                iVar9 = (int)((uint)pbVar21[3] * iVar7) / 0xff;
                iVar10 = 0x100 - iVar7;
                iVar15 = (uint)pbVar20[1] * iVar10 + (uint)pbVar21[2] * iVar9;
                pbVar20[1] = (byte)(iVar15 + (iVar15 >> 0x1f & 0xffU) >> 8);
                iVar15 = (uint)*pbVar20 * iVar10 + (uint)pbVar21[1] * iVar9;
                *pbVar20 = (byte)(iVar15 + (iVar15 >> 0x1f & 0xffU) >> 8);
                iVar9 = (uint)pbVar20[-1] * iVar10 + (uint)*pbVar21 * iVar9;
                pbVar20[-1] = (byte)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8);
                iVar7 = ((uint)pbVar21[3] - (uint)pbVar20[2]) * iVar7;
                pbVar20[2] = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + pbVar20[2];
              }
              else {
                *(undefined4 *)(pbVar20 + -1) = local_44;
              }
            }
            param_6 = param_6 + 1;
            pbVar20 = pbVar20 + 4;
          } while (param_6 < (int)param_4);
        }
        param_5 = param_5 + uVar5;
        pbVar23 = pbVar23 + uVar6 * 4;
        param_3 = (double *)((int)param_3 + -1);
      } while (param_3 != (double *)0x0);
      return 0;
    }
  }
  else {
    iVar7 = (int)param_4 + -1;
    if (0 < local_2c) {
      do {
        pbVar20 = param_5;
        if (param_3 == (double *)0x0) {
          iVar9 = (uint)*pbVar20 * iVar15;
LAB_0053d573:
          iVar9 = iVar9 + (uint)*(byte *)param_2 * iVar11;
        }
        else {
          if ((double *)iVar10 != param_3) {
            iVar9 = (uint)pbVar20[-1] * iVar14 + (uint)*(byte *)((int)param_2 + -1) * iVar13 +
                    (uint)*pbVar20 * iVar15;
            goto LAB_0053d573;
          }
          iVar9 = (uint)pbVar20[-1] * iVar14 + (uint)*(byte *)((int)param_2 + -1) * iVar13;
        }
        iVar9 = (int)(iVar9 + (iVar9 >> 0x1f & 0xffU)) >> 8;
        if (0 < iVar9) {
          iVar8 = (int)((uint)pbVar21[3] * iVar9) / 0xff;
          iVar16 = 0x100 - iVar9;
          iVar12 = (uint)pbVar21[2] * iVar8 + (uint)pbVar23[2] * iVar16;
          pbVar23[2] = (byte)(iVar12 + (iVar12 >> 0x1f & 0xffU) >> 8);
          iVar12 = (uint)pbVar21[1] * iVar8 + (uint)pbVar23[1] * iVar16;
          pbVar23[1] = (byte)(iVar12 + (iVar12 >> 0x1f & 0xffU) >> 8);
          iVar8 = (uint)*pbVar23 * iVar16 + (uint)*pbVar21 * iVar8;
          *pbVar23 = (byte)(iVar8 + (iVar8 >> 0x1f & 0xffU) >> 8);
          iVar9 = ((uint)pbVar21[3] - (uint)pbVar23[3]) * iVar9;
          pbVar23[3] = (char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8) + pbVar23[3];
        }
        iVar9 = 1;
        param_6 = 1;
        if (1 < iVar7) {
          pbVar18 = pbVar23 + 5;
          local_48 = (byte *)param_2;
          do {
            iVar9 = (uint)local_48[(int)pbVar20 - (int)param_2] * iVar14 +
                    (uint)pbVar20[param_6] * iVar15 + (uint)local_48[1] * iVar11 +
                    (uint)*local_48 * iVar13;
            iVar9 = (int)(iVar9 + (iVar9 >> 0x1f & 0xffU)) >> 8;
            if (0 < iVar9) {
              if (iVar9 < 0x100) {
                iVar8 = (int)((uint)pbVar21[3] * iVar9) / 0xff;
                iVar16 = 0x100 - iVar9;
                iVar12 = (uint)pbVar18[1] * iVar16 + (uint)pbVar21[2] * iVar8;
                pbVar18[1] = (byte)(iVar12 + (iVar12 >> 0x1f & 0xffU) >> 8);
                iVar12 = (uint)*pbVar18 * iVar16 + (uint)pbVar21[1] * iVar8;
                *pbVar18 = (byte)(iVar12 + (iVar12 >> 0x1f & 0xffU) >> 8);
                iVar8 = (uint)pbVar18[-1] * iVar16 + (uint)*pbVar21 * iVar8;
                pbVar18[-1] = (byte)(iVar8 + (iVar8 >> 0x1f & 0xffU) >> 8);
                iVar9 = ((uint)pbVar21[3] - (uint)pbVar18[2]) * iVar9;
                pbVar18[2] = (char)(iVar9 + (iVar9 >> 0x1f & 0xffU) >> 8) + pbVar18[2];
              }
              else {
                *(undefined4 *)(pbVar18 + -1) = local_44;
              }
            }
            iVar9 = param_6 + 1;
            local_48 = local_48 + 1;
            pbVar18 = pbVar18 + 4;
            param_6 = iVar9;
          } while (iVar9 < iVar7);
        }
        if (iVar9 < (int)param_4) {
          if (iVar10 == iVar7 + (int)param_3) {
            iVar8 = (uint)pbVar20[iVar9 + -1] * iVar14 +
                    (uint)*(byte *)((int)param_2 + iVar9 + -1) * iVar13;
            iVar8 = iVar8 + (iVar8 >> 0x1f & 0xffU);
          }
          else {
            iVar8 = (uint)pbVar20[iVar9 + -1] * iVar14 +
                    (uint)*(byte *)((int)param_2 + iVar9 + -1) * iVar13 +
                    (uint)pbVar20[iVar9] * iVar15 + (uint)*(byte *)((int)param_2 + iVar9) * iVar11;
            iVar8 = iVar8 + (iVar8 >> 0x1f & 0xffU);
          }
          iVar8 = iVar8 >> 8;
          if (0 < iVar8) {
            iVar12 = (int)((uint)pbVar21[3] * iVar8) / 0xff;
            iVar19 = 0x100 - iVar8;
            iVar16 = (uint)pbVar23[iVar9 * 4 + 2] * iVar19 + (uint)pbVar21[2] * iVar12;
            pbVar23[iVar9 * 4 + 2] = (byte)(iVar16 + (iVar16 >> 0x1f & 0xffU) >> 8);
            iVar16 = (uint)pbVar23[iVar9 * 4 + 1] * iVar19 + (uint)pbVar21[1] * iVar12;
            pbVar23[iVar9 * 4 + 1] = (byte)(iVar16 + (iVar16 >> 0x1f & 0xffU) >> 8);
            iVar12 = (uint)pbVar23[iVar9 * 4] * iVar19 + (uint)*pbVar21 * iVar12;
            pbVar23[iVar9 * 4] = (byte)(iVar12 + (iVar12 >> 0x1f & 0xffU) >> 8);
            bVar1 = pbVar23[iVar9 * 4 + 3];
            iVar8 = ((uint)pbVar21[3] - (uint)bVar1) * iVar8;
            pbVar23[iVar9 * 4 + 3] = (char)(iVar8 + (iVar8 >> 0x1f & 0xffU) >> 8) + bVar1;
          }
        }
        pbVar23 = pbVar23 + uVar6 * 4;
        local_2c = local_2c + -1;
        param_5 = pbVar20 + uVar5;
        param_2 = (double *)pbVar20;
        if (local_2c == 0) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}


