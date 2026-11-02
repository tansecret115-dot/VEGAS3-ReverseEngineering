/* Module: oggplug.dll
   Function: FUN_0043fa90
   Address: 0043fa90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_0043fa90(float *param_1,float *param_2,int param_3,int param_4,float *param_5,float *param_6,
            float *param_7,float *param_8,float *param_9,int param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  int iVar17;
  int iVar18;
  float *pfVar19;
  uint uVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  int iVar24;
  int iVar25;
  float *pfVar26;
  float10 fVar27;
  float10 fVar28;
  int local_38;
  float *local_34;
  float *local_30;
  int local_28;
  float *local_24;
  int local_1c;
  int local_18;
  int local_10;
  
  pfVar21 = param_2;
  pfVar16 = param_1;
  iVar17 = (int)param_1 * param_3;
  fVar27 = (float10)fcos((float10)_DAT_004532c0 / (float10)(int)param_2);
  iVar18 = (int)param_1 + -1 >> 1;
  iVar6 = (int)param_1 * (int)param_2;
  fVar28 = (float10)fsin((float10)_DAT_004532c0 / (float10)(int)param_2);
  local_1c = (int)param_2 + 1 >> 1;
  if ((int)param_1 < param_3) {
    if (0 < (int)param_1) {
      local_30 = param_1;
      pfVar11 = param_5;
      do {
        if (0 < param_3) {
          pfVar7 = (float *)(((int)param_8 - (int)param_5) + (int)pfVar11);
          pfVar12 = pfVar11;
          iVar25 = param_3;
          do {
            *pfVar7 = *pfVar12;
            pfVar7 = pfVar7 + (int)param_1;
            pfVar12 = pfVar12 + iVar6;
            iVar25 = iVar25 + -1;
          } while (iVar25 != 0);
        }
        pfVar11 = pfVar11 + 1;
        local_30 = (float *)((int)local_30 + -1);
      } while (local_30 != (float *)0x0);
    }
  }
  else if (0 < param_3) {
    local_38 = param_3;
    pfVar11 = param_5;
    pfVar12 = param_8;
    do {
      pfVar7 = pfVar11;
      pfVar8 = pfVar12;
      pfVar19 = param_1;
      if (0 < (int)param_1) {
        do {
          *pfVar8 = *pfVar7;
          pfVar19 = (float *)((int)pfVar19 + -1);
          pfVar7 = pfVar7 + 1;
          pfVar8 = pfVar8 + 1;
        } while (pfVar19 != (float *)0x0);
      }
      pfVar12 = pfVar12 + (int)param_1;
      pfVar11 = pfVar11 + iVar6;
      local_38 = local_38 + -1;
    } while (local_38 != 0);
  }
  iVar25 = iVar17 * (int)param_2;
  if (1 < local_1c) {
    pfVar11 = param_8 + iVar25;
    local_28 = local_1c + -1;
    pfVar12 = param_8;
    local_30 = param_5;
    do {
      local_30 = local_30 + (int)param_1 * 2;
      pfVar12 = pfVar12 + iVar17;
      pfVar11 = pfVar11 + -iVar17;
      pfVar7 = local_30;
      pfVar8 = pfVar12;
      pfVar19 = pfVar11;
      iVar24 = param_3;
      if (0 < param_3) {
        do {
          *pfVar8 = pfVar7[-1] + pfVar7[-1];
          *pfVar19 = *pfVar7 + *pfVar7;
          iVar24 = iVar24 + -1;
          pfVar7 = pfVar7 + iVar6;
          pfVar8 = pfVar8 + (int)param_1;
          pfVar19 = pfVar19 + (int)param_1;
        } while (iVar24 != 0);
      }
      local_28 = local_28 + -1;
    } while (local_28 != 0);
  }
  if (param_1 != (float *)0x1) {
    if (iVar18 < param_3) {
      if (1 < local_1c) {
        local_28 = local_1c + -1;
        pfVar11 = param_8 + iVar25;
        pfVar12 = param_8;
        pfVar7 = param_5;
        do {
          pfVar12 = pfVar12 + iVar17;
          pfVar11 = pfVar11 + -iVar17;
          pfVar7 = pfVar7 + (int)param_1 * 2;
          if (2 < (int)param_1) {
            param_5 = (float *)((int)param_1 - 1U >> 1);
            pfVar8 = pfVar7;
            pfVar19 = pfVar7;
            pfVar13 = pfVar12;
            pfVar22 = pfVar11;
            do {
              pfVar19 = pfVar19 + 2;
              pfVar13 = pfVar13 + 2;
              pfVar22 = pfVar22 + 2;
              pfVar8 = pfVar8 + -2;
              pfVar10 = pfVar8;
              pfVar9 = pfVar19;
              pfVar14 = pfVar13;
              iVar24 = param_3;
              pfVar23 = pfVar22;
              if (0 < param_3) {
                do {
                  pfVar14[-1] = pfVar10[-1] + pfVar9[-1];
                  pfVar23[-1] = pfVar9[-1] - pfVar10[-1];
                  *pfVar14 = *pfVar9 - *pfVar10;
                  *pfVar23 = *pfVar10 + *pfVar9;
                  iVar24 = iVar24 + -1;
                  pfVar10 = pfVar10 + iVar6;
                  pfVar9 = pfVar9 + iVar6;
                  pfVar14 = pfVar14 + (int)param_1;
                  pfVar23 = pfVar23 + (int)param_1;
                } while (iVar24 != 0);
              }
              param_5 = (float *)((int)param_5 + -1);
            } while (param_5 != (float *)0x0);
          }
          local_28 = local_28 + -1;
        } while (local_28 != 0);
      }
    }
    else if (1 < local_1c) {
      local_24 = (float *)(local_1c + -1);
      pfVar11 = param_8 + iVar25;
      pfVar12 = param_5;
      pfVar7 = param_8;
      do {
        pfVar7 = pfVar7 + iVar17;
        pfVar11 = pfVar11 + -iVar17;
        pfVar12 = pfVar12 + (int)param_1 * 2;
        if (0 < param_3) {
          local_28 = param_3;
          pfVar8 = pfVar12;
          param_5 = pfVar11;
          local_30 = pfVar7;
          do {
            if (2 < (int)param_1) {
              uVar20 = (int)param_1 - 1U >> 1;
              pfVar19 = pfVar8;
              pfVar13 = pfVar8;
              pfVar22 = local_30;
              pfVar10 = param_5;
              do {
                pfVar14 = pfVar13 + -2;
                pfVar9 = pfVar19 + 2;
                uVar20 = uVar20 - 1;
                pfVar22[1] = pfVar13[-3] + pfVar19[1];
                pfVar10[1] = pfVar19[1] - pfVar13[-3];
                pfVar22[2] = *pfVar9 - *pfVar14;
                pfVar10[2] = *pfVar9 + *pfVar14;
                pfVar19 = pfVar9;
                pfVar13 = pfVar14;
                pfVar22 = pfVar22 + 2;
                pfVar10 = pfVar10 + 2;
              } while (uVar20 != 0);
            }
            local_30 = local_30 + (int)param_1;
            param_5 = param_5 + (int)param_1;
            pfVar8 = pfVar8 + iVar6;
            local_28 = local_28 + -1;
          } while (local_28 != 0);
        }
        local_24 = (float *)((int)local_24 + -1);
      } while (local_24 != (float *)0x0);
    }
  }
  if (1 < local_1c) {
    pfVar11 = param_7 + (int)param_2 * param_4;
    local_10 = local_1c + -1;
    pfVar12 = param_7;
    fVar1 = 1.0;
    fVar3 = _DAT_0044d6f0;
    do {
      pfVar12 = pfVar12 + param_4;
      pfVar11 = pfVar11 + -param_4;
      fVar4 = fVar1 * (float)fVar27 - fVar3 * (float)fVar28;
      fVar3 = fVar3 * (float)fVar27 + fVar1 * (float)fVar28;
      if (0 < param_4) {
        pfVar13 = param_9 + param_4;
        local_28 = param_4;
        pfVar7 = param_9;
        pfVar8 = pfVar12;
        pfVar19 = param_9 + ((int)param_2 + -1) * param_4;
        local_24 = pfVar11;
        do {
          fVar1 = *pfVar13;
          pfVar13 = pfVar13 + 1;
          fVar2 = *pfVar7;
          pfVar7 = pfVar7 + 1;
          *pfVar8 = fVar4 * fVar1 + fVar2;
          *local_24 = fVar3 * *pfVar19;
          local_28 = local_28 + -1;
          pfVar8 = pfVar8 + 1;
          pfVar19 = pfVar19 + 1;
          local_24 = local_24 + 1;
        } while (local_28 != 0);
      }
      if (2 < local_1c) {
        local_34 = param_9 + param_4;
        local_30 = param_9 + ((int)param_2 * param_4 - param_4);
        local_28 = local_1c + -2;
        fVar1 = fVar4;
        fVar2 = fVar3;
        do {
          fVar5 = fVar1 * fVar4 - fVar2 * fVar3;
          local_34 = local_34 + param_4;
          local_30 = local_30 + -param_4;
          fVar2 = fVar1 * fVar3 + fVar2 * fVar4;
          pfVar7 = pfVar12;
          pfVar8 = pfVar11;
          pfVar19 = local_34;
          iVar6 = param_4;
          pfVar13 = local_30;
          if (0 < param_4) {
            do {
              iVar6 = iVar6 + -1;
              *pfVar7 = fVar5 * *pfVar19 + *pfVar7;
              *pfVar8 = fVar2 * *pfVar13 + *pfVar8;
              pfVar7 = pfVar7 + 1;
              pfVar8 = pfVar8 + 1;
              pfVar19 = pfVar19 + 1;
              pfVar13 = pfVar13 + 1;
            } while (iVar6 != 0);
          }
          local_28 = local_28 + -1;
          fVar1 = fVar5;
        } while (local_28 != 0);
      }
      local_10 = local_10 + -1;
      fVar1 = fVar4;
    } while (local_10 != 0);
  }
  if (1 < local_1c) {
    local_10 = local_1c + -1;
    param_5 = param_9;
    do {
      param_5 = param_5 + param_4;
      pfVar11 = param_9;
      pfVar12 = param_5;
      iVar6 = param_4;
      if (0 < param_4) {
        do {
          iVar6 = iVar6 + -1;
          *pfVar11 = *pfVar11 + *pfVar12;
          pfVar11 = pfVar11 + 1;
          pfVar12 = pfVar12 + 1;
        } while (iVar6 != 0);
      }
      local_10 = local_10 + -1;
    } while (local_10 != 0);
    if (1 < local_1c) {
      param_5 = (float *)(local_1c + -1);
      pfVar11 = param_6 + iVar25;
      pfVar12 = param_6;
      do {
        pfVar12 = pfVar12 + iVar17;
        pfVar11 = pfVar11 + -iVar17;
        if (0 < param_3) {
          pfVar7 = pfVar12;
          pfVar8 = pfVar11;
          iVar6 = param_3;
          do {
            *(float *)(((int)param_8 - (int)param_6) + (int)pfVar7) = *pfVar7 - *pfVar8;
            fVar1 = *pfVar7;
            pfVar7 = pfVar7 + (int)param_1;
            *(float *)(((int)param_8 - (int)param_6) + (int)pfVar8) = *pfVar8 + fVar1;
            pfVar8 = pfVar8 + (int)param_1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        param_5 = (float *)((int)param_5 + -1);
      } while (param_5 != (float *)0x0);
    }
  }
  if (param_1 != (float *)0x1) {
    if (iVar18 < param_3) {
      if (1 < local_1c) {
        pfVar11 = param_6 + -1;
        pfVar12 = param_8 + iVar25;
        pfVar7 = param_6 + iVar25 + -1;
        local_10 = local_1c + -1;
        pfVar8 = param_8;
        do {
          pfVar8 = pfVar8 + iVar17;
          pfVar11 = pfVar11 + iVar17;
          pfVar12 = pfVar12 + -iVar17;
          pfVar7 = pfVar7 + -iVar17;
          if (2 < (int)param_1) {
            param_5 = (float *)((int)param_1 - 1U >> 1);
            pfVar19 = pfVar11;
            pfVar13 = pfVar7;
            pfVar22 = pfVar12;
            pfVar10 = pfVar8;
            do {
              pfVar10 = pfVar10 + 2;
              pfVar19 = pfVar19 + 2;
              pfVar22 = pfVar22 + 2;
              pfVar13 = pfVar13 + 2;
              if (0 < param_3) {
                pfVar9 = pfVar19;
                pfVar14 = pfVar13;
                pfVar23 = pfVar22;
                iVar6 = param_3;
                pfVar26 = pfVar10;
                do {
                  *(float *)((int)pfVar9 + ((int)param_8 - (int)param_6)) = *pfVar9 - pfVar14[1];
                  *(float *)((int)pfVar14 + ((int)param_8 - (int)param_6)) = pfVar14[1] + *pfVar9;
                  *pfVar26 = pfVar9[1] + *pfVar14;
                  pfVar15 = pfVar9 + 1;
                  fVar1 = *pfVar14;
                  pfVar26 = pfVar26 + (int)param_1;
                  pfVar9 = pfVar9 + (int)param_1;
                  pfVar14 = pfVar14 + (int)param_1;
                  *pfVar23 = *pfVar15 - fVar1;
                  pfVar23 = pfVar23 + (int)param_1;
                  iVar6 = iVar6 + -1;
                } while (iVar6 != 0);
              }
              param_5 = (float *)((int)param_5 + -1);
            } while (param_5 != (float *)0x0);
          }
          local_10 = local_10 + -1;
        } while (local_10 != 0);
      }
    }
    else if (1 < local_1c) {
      pfVar11 = param_6 + -1;
      pfVar12 = param_8 + iVar25;
      pfVar7 = param_6 + iVar25 + -1;
      local_1c = local_1c + -1;
      pfVar8 = param_8;
      do {
        pfVar8 = pfVar8 + iVar17;
        pfVar11 = pfVar11 + iVar17;
        pfVar12 = pfVar12 + -iVar17;
        pfVar7 = pfVar7 + -iVar17;
        if (0 < param_3) {
          local_18 = param_3;
          pfVar19 = pfVar7;
          pfVar13 = pfVar12;
          pfVar22 = pfVar8;
          param_5 = pfVar11;
          do {
            if (2 < (int)param_1) {
              uVar20 = (int)param_1 - 1U >> 1;
              pfVar10 = param_5;
              pfVar9 = pfVar19;
              pfVar14 = pfVar13;
              pfVar23 = pfVar22;
              do {
                pfVar26 = pfVar10 + 2;
                pfVar15 = pfVar9 + 2;
                pfVar23 = pfVar23 + 2;
                pfVar14 = pfVar14 + 2;
                uVar20 = uVar20 - 1;
                *(float *)((int)pfVar26 + ((int)param_8 - (int)param_6)) = pfVar10[2] - pfVar9[3];
                *(float *)((int)pfVar15 + ((int)param_8 - (int)param_6)) = *pfVar26 + pfVar9[3];
                *pfVar23 = pfVar10[3] + *pfVar15;
                *pfVar14 = pfVar10[3] - *pfVar15;
                pfVar10 = pfVar26;
                pfVar9 = pfVar15;
              } while (uVar20 != 0);
            }
            param_5 = param_5 + (int)param_1;
            pfVar22 = pfVar22 + (int)param_1;
            pfVar13 = pfVar13 + (int)param_1;
            pfVar19 = pfVar19 + (int)param_1;
            local_18 = local_18 + -1;
          } while (local_18 != 0);
        }
        local_1c = local_1c + -1;
      } while (local_1c != 0);
    }
    if (0 < param_4) {
      iVar6 = (int)param_9 - (int)param_7;
      do {
        *param_7 = *(float *)(iVar6 + (int)param_7);
        param_7 = param_7 + 1;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
    if (1 < (int)param_2) {
      param_5 = (float *)((int)param_2 + -1);
      pfVar11 = param_6;
      do {
        pfVar11 = pfVar11 + iVar17;
        if (0 < param_3) {
          pfVar12 = pfVar11;
          iVar6 = param_3;
          do {
            *pfVar12 = *(float *)((int)pfVar12 + ((int)param_8 - (int)param_6));
            pfVar12 = pfVar12 + (int)param_1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        param_5 = (float *)((int)param_5 + -1);
      } while (param_5 != (float *)0x0);
    }
    if (param_3 < iVar18) {
      if (1 < (int)param_2) {
        param_2 = param_6;
        param_9 = (float *)(param_10 + (-1 - (int)param_1) * 4);
        param_5 = param_8 + -1;
        param_7 = (float *)((int)pfVar21 + -1);
        do {
          param_9 = param_9 + (int)pfVar16;
          param_2 = param_2 + iVar17;
          param_5 = param_5 + iVar17;
          if (0 < param_3) {
            param_4 = param_3;
            pfVar21 = param_2;
            param_1 = param_5;
            do {
              if (2 < (int)pfVar16) {
                uVar20 = (int)pfVar16 - 1U >> 1;
                pfVar11 = param_1;
                pfVar12 = param_9;
                pfVar7 = pfVar21;
                do {
                  pfVar8 = pfVar11 + 2;
                  pfVar7 = pfVar7 + 2;
                  uVar20 = uVar20 - 1;
                  *(float *)(((int)param_6 - (int)param_8) + (int)pfVar8) =
                       pfVar12[1] * pfVar11[2] - pfVar12[2] * pfVar11[3];
                  *pfVar7 = pfVar12[1] * pfVar11[3] + *pfVar8 * pfVar12[2];
                  pfVar11 = pfVar8;
                  pfVar12 = pfVar12 + 2;
                } while (uVar20 != 0);
              }
              pfVar21 = pfVar21 + (int)pfVar16;
              param_1 = param_1 + (int)pfVar16;
              param_4 = param_4 + -1;
            } while (param_4 != 0);
          }
          param_7 = (float *)((int)param_7 + -1);
        } while (param_7 != (float *)0x0);
        return;
      }
    }
    else if (1 < (int)param_2) {
      pfVar16 = (float *)(param_10 + (-1 - (int)param_1) * 4);
      pfVar11 = param_8 + -1;
      param_5 = (float *)((int)param_2 + -1);
      pfVar21 = param_6;
      do {
        pfVar16 = pfVar16 + (int)param_1;
        pfVar21 = pfVar21 + iVar17;
        pfVar11 = pfVar11 + iVar17;
        if (2 < (int)param_1) {
          param_2 = (float *)((int)param_1 - 1U >> 1);
          pfVar12 = pfVar11;
          pfVar7 = pfVar16;
          pfVar8 = pfVar21;
          do {
            pfVar19 = pfVar7 + 2;
            pfVar8 = pfVar8 + 2;
            pfVar12 = pfVar12 + 2;
            if (0 < param_3) {
              pfVar13 = pfVar12;
              pfVar22 = pfVar8;
              iVar6 = param_3;
              do {
                *(float *)(((int)param_6 - (int)param_8) + (int)pfVar13) =
                     pfVar7[1] * *pfVar13 - pfVar13[1] * *pfVar19;
                fVar1 = *pfVar13;
                pfVar10 = pfVar13 + 1;
                pfVar13 = pfVar13 + (int)param_1;
                *pfVar22 = pfVar7[1] * *pfVar10 + fVar1 * *pfVar19;
                pfVar22 = pfVar22 + (int)param_1;
                iVar6 = iVar6 + -1;
              } while (iVar6 != 0);
            }
            param_2 = (float *)((int)param_2 + -1);
            pfVar7 = pfVar19;
          } while (param_2 != (float *)0x0);
        }
        param_5 = (float *)((int)param_5 + -1);
      } while (param_5 != (float *)0x0);
    }
  }
  return;
}


