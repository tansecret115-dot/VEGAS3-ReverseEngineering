/* Module: erv13260.dll
   Function: FUN_635f6f80
   Address: 635f6f80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_635f6f80(uint param_1,byte *param_2,byte *param_3,undefined4 param_4,int param_5,int param_6,
            byte param_7,int param_8)

{
  double dVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  int iVar13;
  float10 extraout_ST0;
  float10 fVar14;
  uint local_c;
  uint local_8;
  
  uVar10 = (uint)*param_2;
  iVar13 = *(int *)(param_8 + 0x1cf8);
  if (*(int *)(param_8 + 99) != 0) {
    return 1;
  }
  bVar9 = *(byte *)(param_8 + 0x1d51);
  local_c = (uint)bVar9;
  local_8 = (uint)*(byte *)(param_8 + 0x1d52);
  iVar2 = ftol();
  if (param_7 == 0) {
    iVar3 = *(int *)(param_8 + 0x1d00) + 0x40;
  }
  else {
    iVar3 = *(int *)(param_8 + 0x1d00) + (param_7 + 1) * 0x58;
  }
  *(int *)(param_8 + 0x1d00) = iVar3;
  iVar3 = *(int *)(param_8 + 0x1d00) + (param_1 - iVar13);
  *(int *)(param_8 + 0x1d00) = iVar3;
  if (*(int *)(param_8 + 0x31) != 0) {
    if (iVar3 + iVar2 * -5 < 1) {
      iVar8 = iVar13;
      if (iVar13 <= iVar2) {
        iVar8 = iVar2;
      }
      if (iVar3 == iVar8 * 3 || iVar3 + iVar8 * -3 < 0) {
        iVar8 = iVar13;
        if (iVar2 <= iVar13) {
          iVar8 = iVar2;
        }
        if (iVar3 + iVar8 * -2 < 1) {
          if ((iVar3 + iVar2 * 10 < 0) && (*(int *)(param_8 + 0x3a) == 1)) {
            *(undefined4 *)(param_8 + 0x1d00) = 0;
            *(undefined4 *)(param_8 + 0x1d28) = 0;
            *(undefined4 *)(param_8 + 0x1d2c) = 0;
            if (*(int *)(param_8 + 0x1d30) != 0) {
              do {
                *(double *)(param_8 + 0x1d18) = *(double *)(param_8 + 0x1d18) * _DAT_636041e8;
                iVar2 = *(int *)(param_8 + 0x1d30) + -1;
                *(int *)(param_8 + 0x1d30) = iVar2;
              } while (iVar2 != 0);
              *(undefined4 *)(param_8 + 0x1d30) = 0;
              *(double *)(param_8 + 0x1d10) =
                   (double)(extraout_ST0 /
                           ((float10)*(double *)(param_8 + 0x1d08) -
                           (float10)*(double *)(param_8 + 0x1d18)));
            }
          }
          else {
            iVar8 = iVar2;
            if (iVar2 <= iVar13) {
              iVar8 = iVar13;
            }
            if (iVar3 + iVar8 * 2 < 0) {
              if (*(int *)(param_8 + 0x1d30) != 0) {
                do {
                  *(double *)(param_8 + 0x1d18) = *(double *)(param_8 + 0x1d18) * _DAT_636041e8;
                  iVar2 = *(int *)(param_8 + 0x1d30) + -1;
                  *(int *)(param_8 + 0x1d30) = iVar2;
                } while (iVar2 != 0);
                *(undefined4 *)(param_8 + 0x1d30) = 0;
                *(double *)(param_8 + 0x1d10) =
                     (double)(extraout_ST0 /
                             ((float10)*(double *)(param_8 + 0x1d08) -
                             (float10)*(double *)(param_8 + 0x1d18)));
              }
              *(undefined4 *)(param_8 + 0x1d28) = 0;
              *(undefined4 *)(param_8 + 0x1d2c) = 0xc0140000;
            }
            else {
              if (iVar13 <= iVar2) {
                iVar2 = iVar13;
              }
              if (iVar3 + iVar2 * 2 < 0) {
                if (*(int *)(param_8 + 0x1d30) != 0) {
                  do {
                    *(double *)(param_8 + 0x1d18) = *(double *)(param_8 + 0x1d18) * _DAT_636041e8;
                    iVar2 = *(int *)(param_8 + 0x1d30) + -1;
                    *(int *)(param_8 + 0x1d30) = iVar2;
                  } while (iVar2 != 0);
                  *(undefined4 *)(param_8 + 0x1d30) = 0;
                  *(double *)(param_8 + 0x1d10) =
                       (double)(extraout_ST0 /
                               ((float10)*(double *)(param_8 + 0x1d08) -
                               (float10)*(double *)(param_8 + 0x1d18)));
                }
                *(undefined4 *)(param_8 + 0x1d28) = 0;
                *(undefined4 *)(param_8 + 0x1d2c) = 0xc0000000;
              }
              else {
                if (*(int *)(param_8 + 0x1d30) != 0) {
                  do {
                    *(double *)(param_8 + 0x1d18) = *(double *)(param_8 + 0x1d18) * _DAT_636041e8;
                    iVar2 = *(int *)(param_8 + 0x1d30) + -1;
                    *(int *)(param_8 + 0x1d30) = iVar2;
                  } while (iVar2 != 0);
                  *(undefined4 *)(param_8 + 0x1d30) = 0;
                  *(double *)(param_8 + 0x1d10) =
                       (double)(extraout_ST0 /
                               ((float10)*(double *)(param_8 + 0x1d08) -
                               (float10)*(double *)(param_8 + 0x1d18)));
                }
                *(undefined4 *)(param_8 + 0x1d28) = 0;
                *(undefined4 *)(param_8 + 0x1d2c) = 0;
              }
            }
          }
        }
        else {
          if (*(int *)(param_8 + 0x1d30) != 0) {
            do {
              *(double *)(param_8 + 0x1d18) = *(double *)(param_8 + 0x1d18) * _DAT_636041e8;
              iVar2 = *(int *)(param_8 + 0x1d30) + -1;
              *(int *)(param_8 + 0x1d30) = iVar2;
            } while (iVar2 != 0);
            *(undefined4 *)(param_8 + 0x1d30) = 0;
            *(double *)(param_8 + 0x1d10) =
                 (double)(extraout_ST0 /
                         ((float10)*(double *)(param_8 + 0x1d08) -
                         (float10)*(double *)(param_8 + 0x1d18)));
          }
          *(undefined4 *)(param_8 + 0x1d28) = 0;
          *(undefined4 *)(param_8 + 0x1d2c) = 0x40000000;
        }
      }
      else {
        if (*(int *)(param_8 + 0x1d30) != 0) {
          do {
            *(double *)(param_8 + 0x1d18) = *(double *)(param_8 + 0x1d18) * _DAT_636041e8;
            iVar2 = *(int *)(param_8 + 0x1d30) + -1;
            *(int *)(param_8 + 0x1d30) = iVar2;
          } while (iVar2 != 0);
          *(undefined4 *)(param_8 + 0x1d30) = 0;
          *(double *)(param_8 + 0x1d10) =
               (double)(extraout_ST0 /
                       ((float10)*(double *)(param_8 + 0x1d08) -
                       (float10)*(double *)(param_8 + 0x1d18)));
        }
        *(undefined4 *)(param_8 + 0x1d28) = 0;
        *(undefined4 *)(param_8 + 0x1d2c) = 0x40140000;
      }
    }
    else {
      *(int *)(param_8 + 0x1d30) = *(int *)(param_8 + 0x1d30) + 1;
      fVar14 = (float10)*(double *)(param_8 + 0x1d18) * (float10)_DAT_636041e0;
      *(double *)(param_8 + 0x1d18) = (double)fVar14;
      *(double *)(param_8 + 0x1d10) =
           (double)(extraout_ST0 / ((float10)*(double *)(param_8 + 0x1d08) - fVar14));
      *(undefined4 *)(param_8 + 0x1d28) = 0;
      *(undefined4 *)(param_8 + 0x1d2c) = 0x40240000;
    }
    *(double *)(param_8 + 0x1d20) =
         (double)(int)(param_1 - iVar13) / ((double)iVar13 + (double)iVar13);
    if (param_6 != 0) {
      if ((*(int *)(param_8 + 0x1d28) == 0) && (*(int *)(param_8 + 0x1d2c) == 0x40240000)) {
        pbVar5 = (byte *)ftol();
        pbVar7 = (byte *)(uint)*(byte *)(param_8 + 0x1d51);
        pbVar12 = pbVar7;
        if ((int)pbVar5 <= (int)pbVar7) {
          pbVar12 = pbVar5;
        }
        param_2 = (byte *)(uint)*(byte *)(param_8 + 0x1d52);
        if (((int)param_2 <= (int)pbVar12) && (param_2 = pbVar5, (int)pbVar7 < (int)pbVar5)) {
          param_2 = pbVar7;
        }
        dVar1 = (*(double *)(param_8 + 0x1d10) * *(double *)(param_8 + 0x1d08) -
                (double)(int)param_2) - _DAT_63604220;
      }
      else {
        dVar1 = *(double *)(param_8 + 0x1d10) * *(double *)(param_8 + 0x1d08) - (double)*param_2;
      }
      if (_DAT_63604208 <= dVar1) {
        uVar11 = ftol();
        *(uint *)(param_8 + 0x1d6b) = uVar11;
        uVar10 = uVar11;
        if (4999 < (int)uVar11) {
          uVar10 = 5000;
        }
        uVar6 = *(uint *)(param_8 + 0x4a);
        if ((uVar6 <= uVar10) && (uVar6 = uVar11, 4999 < (int)uVar11)) {
          uVar6 = 5000;
        }
        *(uint *)(param_8 + 0x1d6b) = uVar6;
      }
      else {
        *(undefined4 *)(param_8 + 0x1d6b) = 5000;
      }
      if ((int)param_1 < *(int *)(param_8 + 0x1d00)) {
        uVar10 = *param_3 + 1;
        if ((uint)*(byte *)(param_8 + 0x1d51) < *param_3 + 1) {
          *param_3 = *(byte *)(param_8 + 0x1d51);
          return 1;
        }
      }
      else {
        if ((int)-param_1 <= *(int *)(param_8 + 0x1d00)) {
          return 1;
        }
        uVar10 = *param_3 - 1;
        if ((int)(*param_3 - 1) < (int)(uint)*(byte *)(param_8 + 0x1d52)) {
          uVar10 = (uint)*(byte *)(param_8 + 0x1d52);
        }
      }
      *param_3 = (byte)uVar10;
      return 1;
    }
    param_1 = ftol();
    uVar10 = 0x1f;
    if ((int)param_1 < 0x20) {
      uVar10 = param_1;
    }
    if ((int)uVar10 < 2) {
      param_1 = 2;
    }
    else if (0x1f < (int)param_1) {
      param_1 = 0x1f;
    }
    uVar10 = param_1 - 2;
    uVar6 = (uint)*(byte *)(param_8 + 0x1d51);
    uVar11 = uVar6;
    if ((int)uVar10 <= (int)uVar6) {
      uVar11 = uVar10;
    }
    uVar4 = (uint)*(byte *)(param_8 + 0x1d52);
    if (((int)uVar4 <= (int)uVar11) && (uVar4 = uVar10, (int)uVar6 < (int)uVar10)) {
      uVar4 = uVar6;
    }
    *param_3 = (byte)uVar4;
    if (*(int *)(param_8 + 0x1d4c) == 1) {
      uVar11 = (uint)*(byte *)(param_8 + 0x1d51);
      uVar10 = uVar11;
      if ((int)param_1 <= (int)uVar11) {
        uVar10 = param_1;
      }
      if ((int)uVar10 < 2) {
        uVar11 = 2;
      }
      else if ((int)param_1 <= (int)uVar11) goto LAB_635f72b0;
      param_1 = uVar11;
    }
LAB_635f72b0:
    bVar9 = (byte)param_1;
    if (*(double *)(param_8 + 0x1d10) * *(double *)(param_8 + 0x1d08) - (double)(int)param_1 <
        _DAT_63604208) {
      *(undefined4 *)(param_8 + 0x1d6b) = 5000;
      *param_2 = bVar9;
      return 1;
    }
    uVar11 = ftol();
    *(uint *)(param_8 + 0x1d6b) = uVar11;
    uVar10 = uVar11;
    if (4999 < (int)uVar11) {
      uVar10 = 5000;
    }
    if (*(uint *)(param_8 + 0x4a) <= uVar10) {
      if (4999 < (int)uVar11) {
        uVar11 = 5000;
      }
      *(uint *)(param_8 + 0x1d6b) = uVar11;
      *param_2 = bVar9;
      return 1;
    }
    *(uint *)(param_8 + 0x1d6b) = *(uint *)(param_8 + 0x4a);
    *param_2 = bVar9;
    return 1;
  }
  if ((*(int *)(param_8 + 0x3a) == 1) && ((iVar2 * 0xf < iVar3 || (iVar3 < iVar2 * -10)))) {
    *(undefined4 *)(param_8 + 0x1d00) = 0;
  }
  if (*(int *)(param_8 + 0x1d00) < 1) {
    iVar3 = -(iVar13 / 2);
  }
  else {
    iVar3 = iVar13 / 2;
  }
  iVar3 = (iVar3 + *(int *)(param_8 + 0x1d00)) / iVar13;
  if (param_5 < *(int *)(param_8 + 0x1d00)) {
    *param_3 = bVar9;
  }
  if (*(int *)(param_8 + 0x1d00) + iVar2 * -3 < 1) {
    if (*(int *)(param_8 + 0x1d00) == iVar13 * 2 || *(int *)(param_8 + 0x1d00) + iVar13 * -2 < 0) {
      iVar8 = *(int *)(param_8 + 0x1d00);
      if (iVar8 + iVar2 * 4 < 0) {
        local_8 = 1;
        uVar11 = (uint)*(byte *)(param_8 + 0x1d52) + iVar3;
        if (0 < (int)uVar11) {
          local_8 = uVar11;
        }
        uVar10 = uVar10 - 6;
        iVar13 = (iVar3 + -1) / 2 + (uint)*param_3;
        uVar11 = local_8;
        if ((int)local_8 <= iVar13) {
          *param_3 = (byte)iVar13;
          goto LAB_635f762f;
        }
      }
      else {
        uVar11 = local_8;
        if (iVar8 + iVar2 * 2 < 0) {
          iVar13 = (iVar3 + -1) / 2;
          uVar10 = (uint)*param_2 + iVar13;
          iVar13 = iVar13 + (uint)*param_3;
          if ((int)local_8 <= iVar13) {
            *param_3 = (byte)iVar13;
            goto LAB_635f762f;
          }
        }
        else {
          if (-1 < iVar13 * 2 + iVar8) {
            uVar10 = (uint)*param_2;
            goto LAB_635f762f;
          }
          uVar10 = uVar10 - 1;
          bVar9 = *param_3 - 1;
          *param_3 = bVar9;
          if (local_8 <= bVar9) {
            uVar11 = (uint)bVar9;
          }
        }
      }
    }
    else {
      uVar10 = uVar10 + 1;
      bVar9 = *param_3 + 1;
      *param_3 = bVar9;
      uVar11 = local_c;
      if (bVar9 <= local_c) {
        *param_3 = bVar9;
        goto LAB_635f762f;
      }
    }
    *param_3 = (byte)uVar11;
  }
  else {
    iVar13 = local_c + iVar3;
    if (0x1f < iVar13) {
      iVar13 = 0x1f;
    }
    local_c = (int)(local_c + iVar13) / 2;
    iVar3 = (iVar3 + 1) / 2;
    iVar2 = (uint)*param_3 + iVar3;
    if (iVar13 < iVar2) {
      iVar2 = iVar13;
    }
    *param_3 = (byte)iVar2;
    uVar10 = (uint)*param_2 + iVar3;
  }
LAB_635f762f:
  uVar11 = local_c;
  if ((int)uVar10 <= (int)local_c) {
    uVar11 = uVar10;
  }
  if (((int)local_8 <= (int)uVar11) && (local_8 = uVar10, (int)local_c < (int)uVar10)) {
    local_8 = local_c;
  }
  if (*(int *)(param_8 + 0x1d8b) != 0) {
    uVar10 = (uint)*param_2;
    if (local_8 != uVar10) {
      fprintf(*(FILE **)(param_8 + 0x23bf),s_QP__>_new_QP____2d__>__2d_63606444,uVar10,local_8);
      *param_2 = (byte)local_8;
      return 1;
    }
    fprintf(*(FILE **)(param_8 + 0x23bf),s_QP_remains_the_same__QP____2d_6360641c,uVar10);
  }
  *param_2 = (byte)local_8;
  return 1;
}


