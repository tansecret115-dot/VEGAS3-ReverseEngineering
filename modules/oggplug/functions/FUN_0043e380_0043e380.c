/* Module: oggplug.dll
   Function: FUN_0043e380
   Address: 0043e380
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_0043e380(uint param_1,float *param_2,int param_3,int param_4,float *param_5,float *param_6,
            float *param_7,float *param_8,float *param_9,float *param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  int iVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  int iVar24;
  float *pfVar25;
  uint uVar26;
  float *pfVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  float10 fVar31;
  float10 fVar32;
  float *local_34;
  float *local_2c;
  float *local_28;
  int local_20;
  uint local_1c;
  int local_18;
  int local_c;
  
  uVar26 = param_1;
  iVar6 = (int)param_2 + 1 >> 1;
  iVar7 = (int)(param_1 - 1) >> 1;
  iVar8 = param_1 * param_3;
  fVar31 = (float10)fcos((float10)_DAT_004532b0 / (float10)(int)param_2);
  iVar9 = param_1 * (int)param_2;
  fVar32 = (float10)fsin((float10)_DAT_004532b0 / (float10)(int)param_2);
  if (param_1 != 1) {
    if (0 < param_4) {
      pfVar16 = param_9;
      iVar28 = param_4;
      do {
        *pfVar16 = *(float *)(((int)param_7 - (int)param_9) + (int)pfVar16);
        pfVar16 = pfVar16 + 1;
        iVar28 = iVar28 + -1;
      } while (iVar28 != 0);
    }
    if (1 < (int)param_2) {
      local_28 = (float *)((int)param_2 + -1);
      pfVar16 = param_8;
      do {
        pfVar16 = pfVar16 + iVar8;
        if (0 < param_3) {
          pfVar21 = pfVar16;
          iVar28 = param_3;
          do {
            *pfVar21 = *(float *)(((int)param_6 - (int)param_8) + (int)pfVar21);
            pfVar21 = pfVar21 + param_1;
            iVar28 = iVar28 + -1;
          } while (iVar28 != 0);
        }
        local_28 = (float *)((int)local_28 + -1);
      } while (local_28 != (float *)0x0);
    }
    if (param_3 < iVar7) {
      if (1 < (int)param_2) {
        iVar28 = 0;
        local_34 = (float *)((int)param_2 + -1);
        param_10 = param_10 + (-1 - param_1);
        do {
          iVar28 = iVar28 + iVar8 * 4;
          param_10 = param_10 + param_1;
          iVar10 = iVar28 + param_1 * -4;
          if (0 < param_3) {
            local_28 = (float *)param_3;
            pfVar16 = (float *)(iVar10 + (int)param_8);
            local_2c = (float *)(iVar10 + -4 + (int)param_6);
            do {
              pfVar16 = pfVar16 + param_1;
              local_2c = local_2c + param_1;
              if (2 < (int)param_1) {
                uVar29 = param_1 - 1 >> 1;
                pfVar21 = local_2c;
                pfVar22 = param_10;
                pfVar14 = pfVar16;
                do {
                  pfVar17 = pfVar21 + 2;
                  pfVar14 = pfVar14 + 2;
                  uVar29 = uVar29 - 1;
                  *(float *)(((int)param_8 - (int)param_6) + (int)pfVar17) =
                       pfVar21[2] * pfVar22[1] + pfVar21[3] * pfVar22[2];
                  *pfVar14 = pfVar22[1] * pfVar21[3] - *pfVar17 * pfVar22[2];
                  pfVar21 = pfVar17;
                  pfVar22 = pfVar22 + 2;
                } while (uVar29 != 0);
              }
              local_28 = (float *)((int)local_28 + -1);
            } while (local_28 != (float *)0x0);
          }
          local_34 = (float *)((int)local_34 + -1);
        } while (local_34 != (float *)0x0);
      }
    }
    else if (1 < (int)param_2) {
      pfVar21 = param_10 + (-1 - param_1);
      pfVar16 = param_6 + -1;
      local_28 = (float *)((int)param_2 + -1);
      pfVar22 = param_8;
      do {
        pfVar21 = pfVar21 + param_1;
        pfVar22 = pfVar22 + iVar8;
        pfVar16 = pfVar16 + iVar8;
        if (2 < (int)param_1) {
          param_10 = (float *)(param_1 - 1 >> 1);
          pfVar14 = pfVar16;
          pfVar17 = pfVar21;
          pfVar23 = pfVar22;
          do {
            pfVar15 = pfVar17 + 2;
            pfVar23 = pfVar23 + 2;
            pfVar14 = pfVar14 + 2;
            if (0 < param_3) {
              pfVar12 = pfVar14;
              iVar28 = param_3;
              pfVar19 = pfVar23;
              do {
                *(float *)((int)pfVar12 + ((int)param_8 - (int)param_6)) =
                     pfVar12[1] * *pfVar15 + *pfVar12 * pfVar17[1];
                pfVar25 = pfVar12 + 1;
                fVar1 = *pfVar12;
                pfVar12 = pfVar12 + param_1;
                *pfVar19 = *pfVar25 * pfVar17[1] - *pfVar15 * fVar1;
                pfVar19 = pfVar19 + param_1;
                iVar28 = iVar28 + -1;
              } while (iVar28 != 0);
            }
            param_10 = (float *)((int)param_10 + -1);
            pfVar17 = pfVar15;
          } while (param_10 != (float *)0x0);
        }
        local_28 = (float *)((int)local_28 + -1);
      } while (local_28 != (float *)0x0);
    }
    iVar10 = iVar8 * (int)param_2;
    iVar28 = 0;
    if (iVar7 < param_3) {
      if (1 < iVar6) {
        local_18 = iVar6 + -1;
        do {
          iVar28 = iVar28 + iVar8;
          iVar10 = iVar10 - iVar8;
          if (2 < (int)param_1) {
            local_1c = param_1 - 1 >> 1;
            iVar30 = iVar28 * 4;
            iVar24 = iVar28;
            do {
              iVar24 = iVar24 + 2;
              iVar30 = iVar30 + 8;
              iVar11 = iVar30 + param_1 * -4;
              if (0 < param_3) {
                iVar18 = (iVar24 - param_1) + (iVar10 - iVar28);
                pfVar16 = (float *)(iVar11 + (int)param_6);
                local_28 = param_6 + iVar18;
                pfVar21 = (float *)(iVar11 + -4 + (int)param_8);
                pfVar22 = param_8 + iVar18 + -1;
                local_20 = param_3;
                do {
                  pfVar14 = pfVar21 + param_1;
                  pfVar17 = pfVar22 + param_1;
                  pfVar21 = pfVar21 + param_1;
                  pfVar22 = pfVar22 + param_1;
                  pfVar16 = pfVar16 + param_1;
                  local_28 = local_28 + param_1;
                  *(float *)(((int)param_6 - (int)param_8) + (int)pfVar21) = *pfVar14 + *pfVar17;
                  *(float *)((int)pfVar22 + ((int)param_6 - (int)param_8)) = pfVar21[1] - pfVar22[1]
                  ;
                  *pfVar16 = pfVar22[1] + pfVar21[1];
                  *local_28 = *pfVar22 - *pfVar21;
                  local_20 = local_20 + -1;
                } while (local_20 != 0);
              }
              local_1c = local_1c - 1;
            } while (local_1c != 0);
          }
          local_18 = local_18 + -1;
        } while (local_18 != 0);
      }
    }
    else if (1 < iVar6) {
      pfVar21 = param_6 + iVar10;
      pfVar22 = param_8 + iVar10 + -1;
      pfVar16 = param_8 + -1;
      local_2c = (float *)(iVar6 + -1);
      pfVar14 = param_6;
      do {
        pfVar14 = pfVar14 + iVar8;
        pfVar16 = pfVar16 + iVar8;
        pfVar21 = pfVar21 + -iVar8;
        pfVar22 = pfVar22 + -iVar8;
        if (0 < param_3) {
          local_28 = (float *)param_3;
          pfVar17 = pfVar22;
          pfVar23 = pfVar14;
          pfVar15 = pfVar21;
          param_10 = pfVar16;
          do {
            if (2 < (int)param_1) {
              uVar29 = param_1 - 1 >> 1;
              pfVar12 = param_10;
              pfVar19 = pfVar17;
              pfVar25 = pfVar23;
              pfVar27 = pfVar15;
              do {
                pfVar20 = pfVar19 + 2;
                pfVar13 = pfVar12 + 2;
                pfVar25 = pfVar25 + 2;
                pfVar27 = pfVar27 + 2;
                uVar29 = uVar29 - 1;
                *(float *)(((int)param_6 - (int)param_8) + (int)pfVar13) = pfVar19[2] + pfVar12[2];
                *(float *)((int)pfVar20 + ((int)param_6 - (int)param_8)) = pfVar12[3] - pfVar19[3];
                *pfVar25 = pfVar19[3] + pfVar12[3];
                *pfVar27 = *pfVar20 - *pfVar13;
                pfVar12 = pfVar13;
                pfVar19 = pfVar20;
              } while (uVar29 != 0);
            }
            param_10 = param_10 + param_1;
            pfVar23 = pfVar23 + param_1;
            pfVar15 = pfVar15 + param_1;
            pfVar17 = pfVar17 + param_1;
            local_28 = (float *)((int)local_28 + -1);
          } while (local_28 != (float *)0x0);
        }
        local_2c = (float *)((int)local_2c + -1);
      } while (local_2c != (float *)0x0);
    }
  }
  if (0 < param_4) {
    pfVar16 = param_7;
    iVar28 = param_4;
    do {
      *pfVar16 = *(float *)(((int)param_9 - (int)param_7) + (int)pfVar16);
      pfVar16 = pfVar16 + 1;
      iVar28 = iVar28 + -1;
    } while (iVar28 != 0);
  }
  if (1 < iVar6) {
    iVar28 = 0;
    local_1c = iVar6 + -1;
    param_10 = (float *)((int)param_2 * param_4);
    do {
      iVar28 = iVar28 + iVar8 * 4;
      param_10 = (float *)((int)param_10 - iVar8);
      if (0 < param_3) {
        pfVar21 = (float *)(iVar28 + param_1 * -4 + (int)param_8);
        pfVar16 = param_8 + ((int)param_10 - param_1);
        local_18 = param_3;
        do {
          pfVar16 = pfVar16 + param_1;
          pfVar21 = pfVar21 + param_1;
          local_18 = local_18 + -1;
          *(float *)((int)pfVar21 + ((int)param_6 - (int)param_8)) = *pfVar16 + *pfVar21;
          *(float *)((int)pfVar16 + ((int)param_6 - (int)param_8)) = *pfVar16 - *pfVar21;
        } while (local_18 != 0);
      }
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  iVar28 = ((int)param_2 + -1) * param_4;
  if (1 < iVar6) {
    local_c = iVar6 + -1;
    param_10 = param_9 + (int)param_2 * param_4;
    local_34 = param_9;
    fVar1 = 1.0;
    fVar3 = _DAT_0044d6f0;
    do {
      fVar4 = fVar1 * (float)fVar31 - fVar3 * (float)fVar32;
      local_34 = local_34 + param_4;
      param_10 = param_10 + -param_4;
      fVar3 = fVar3 * (float)fVar31 + fVar1 * (float)fVar32;
      if (0 < param_4) {
        pfVar17 = param_7 + param_4;
        pfVar16 = local_34;
        pfVar21 = param_7;
        iVar10 = param_4;
        pfVar22 = param_7 + iVar28;
        pfVar14 = param_10;
        do {
          fVar1 = *pfVar17;
          pfVar17 = pfVar17 + 1;
          fVar2 = *pfVar21;
          pfVar21 = pfVar21 + 1;
          iVar10 = iVar10 + -1;
          *pfVar16 = fVar4 * fVar1 + fVar2;
          *pfVar14 = fVar3 * *pfVar22;
          pfVar16 = pfVar16 + 1;
          pfVar22 = pfVar22 + 1;
          pfVar14 = pfVar14 + 1;
        } while (iVar10 != 0);
      }
      if (2 < iVar6) {
        local_20 = iVar6 + -2;
        local_28 = param_7 + param_4;
        local_2c = param_7 + iVar28;
        fVar1 = fVar4;
        fVar2 = fVar3;
        do {
          fVar5 = fVar1 * fVar4 - fVar2 * fVar3;
          local_28 = local_28 + param_4;
          local_2c = local_2c + -param_4;
          fVar2 = fVar1 * fVar3 + fVar2 * fVar4;
          pfVar16 = local_34;
          pfVar21 = param_10;
          iVar10 = param_4;
          pfVar22 = local_28;
          pfVar14 = local_2c;
          if (0 < param_4) {
            do {
              iVar10 = iVar10 + -1;
              *pfVar16 = fVar5 * *pfVar22 + *pfVar16;
              *pfVar21 = fVar2 * *pfVar14 + *pfVar21;
              pfVar16 = pfVar16 + 1;
              pfVar21 = pfVar21 + 1;
              pfVar22 = pfVar22 + 1;
              pfVar14 = pfVar14 + 1;
            } while (iVar10 != 0);
          }
          local_20 = local_20 + -1;
          fVar1 = fVar5;
        } while (local_20 != 0);
      }
      local_c = local_c + -1;
      fVar1 = fVar4;
    } while (local_c != 0);
  }
  if (1 < iVar6) {
    param_6 = (float *)(iVar6 + -1);
    do {
      param_7 = param_7 + param_4;
      pfVar16 = param_9;
      pfVar21 = param_7;
      iVar28 = param_4;
      if (0 < param_4) {
        do {
          iVar28 = iVar28 + -1;
          *pfVar16 = *pfVar21 + *pfVar16;
          pfVar16 = pfVar16 + 1;
          pfVar21 = pfVar21 + 1;
        } while (iVar28 != 0);
      }
      param_6 = (float *)((int)param_6 + -1);
    } while (param_6 != (float *)0x0);
  }
  if ((int)param_1 < param_3) {
    if (0 < (int)param_1) {
      param_6 = (float *)param_1;
      pfVar16 = param_8;
      do {
        if (0 < param_3) {
          pfVar22 = (float *)(((int)param_5 - (int)param_8) + (int)pfVar16);
          pfVar21 = pfVar16;
          iVar28 = param_3;
          do {
            *pfVar22 = *pfVar21;
            pfVar21 = pfVar21 + param_1;
            pfVar22 = pfVar22 + iVar9;
            iVar28 = iVar28 + -1;
          } while (iVar28 != 0);
        }
        pfVar16 = pfVar16 + 1;
        param_6 = (float *)((int)param_6 + -1);
      } while (param_6 != (float *)0x0);
    }
  }
  else if (0 < param_3) {
    param_4 = param_3;
    param_6 = param_8;
    pfVar16 = param_5;
    do {
      pfVar21 = param_6;
      pfVar22 = pfVar16;
      uVar29 = param_1;
      if (0 < (int)param_1) {
        do {
          *pfVar22 = *pfVar21;
          uVar29 = uVar29 - 1;
          pfVar21 = pfVar21 + 1;
          pfVar22 = pfVar22 + 1;
        } while (uVar29 != 0);
      }
      param_6 = param_6 + param_1;
      pfVar16 = pfVar16 + iVar9;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  iVar28 = iVar8 * (int)param_2;
  if (1 < iVar6) {
    pfVar16 = param_8 + iVar28;
    param_2 = (float *)(iVar6 + -1);
    pfVar21 = param_5;
    pfVar22 = param_8;
    do {
      pfVar21 = pfVar21 + param_1 * 2;
      pfVar22 = pfVar22 + iVar8;
      pfVar16 = pfVar16 + -iVar8;
      if (0 < param_3) {
        param_6 = (float *)param_3;
        pfVar14 = pfVar21;
        pfVar17 = pfVar22;
        pfVar23 = pfVar16;
        do {
          fVar1 = *pfVar17;
          pfVar17 = pfVar17 + param_1;
          pfVar14[-1] = fVar1;
          *pfVar14 = *pfVar23;
          pfVar14 = pfVar14 + iVar9;
          pfVar23 = pfVar23 + param_1;
          param_6 = (float *)((int)param_6 + -1);
        } while (param_6 != (float *)0x0);
      }
      param_2 = (float *)((int)param_2 + -1);
    } while (param_2 != (float *)0x0);
  }
  if (param_1 != 1) {
    if (iVar7 < param_3) {
      iVar7 = -param_1;
      local_34 = (float *)0x0;
      if (1 < iVar6) {
        iVar10 = 0;
        param_6 = (float *)(iVar28 * 4);
        pfVar21 = (float *)0xfffffffe;
        local_c = iVar6 + -1;
        pfVar16 = param_5 + -2;
        do {
          iVar6 = uVar26 * 2;
          iVar10 = iVar10 + iVar8 * 4;
          iVar7 = iVar7 + iVar6;
          pfVar21 = (float *)((int)pfVar21 + iVar6);
          pfVar16 = pfVar16 + uVar26 * 2;
          local_34 = (float *)((int)local_34 + iVar6);
          param_6 = param_6 + -iVar8;
          if (2 < (int)uVar26) {
            param_7 = (float *)0x4;
            param_1 = uVar26 - 1 >> 1;
            pfVar22 = pfVar16;
            param_2 = pfVar21;
            iVar6 = iVar10;
            do {
              iVar6 = iVar6 + 8;
              if (0 < param_3) {
                pfVar14 = (float *)(iVar6 + (int)param_8);
                pfVar15 = (float *)((iVar6 - iVar10) + (int)param_6 + (int)param_8);
                pfVar17 = param_5 + (int)param_7 + (int)param_2 + (int)local_34 + (-uVar26 - iVar7);
                param_4 = param_3;
                pfVar23 = pfVar22;
                do {
                  pfVar17[-1] = pfVar14[-1] + pfVar15[-1];
                  pfVar23[-1] = pfVar14[-1] - pfVar15[-1];
                  *pfVar17 = *pfVar15 + *pfVar14;
                  fVar1 = *pfVar15;
                  fVar3 = *pfVar14;
                  pfVar15 = pfVar15 + uVar26;
                  pfVar14 = pfVar14 + uVar26;
                  pfVar17 = pfVar17 + iVar9;
                  *pfVar23 = fVar1 - fVar3;
                  pfVar23 = pfVar23 + iVar9;
                  param_4 = param_4 + -1;
                } while (param_4 != 0);
              }
              pfVar22 = pfVar22 + -2;
              param_2 = (float *)((int)param_2 + -2);
              param_7 = param_7 + 1;
              param_1 = param_1 - 1;
            } while (param_1 != 0);
          }
          local_c = local_c + -1;
        } while (local_c != 0);
        return;
      }
    }
    else if (1 < iVar6) {
      pfVar22 = param_8 + 2;
      pfVar16 = param_5 + 2;
      pfVar21 = param_5 + -2;
      param_9 = (float *)(iVar6 + -1);
      param_8 = param_8 + iVar28 + 2;
      do {
        pfVar22 = pfVar22 + iVar8;
        pfVar21 = pfVar21 + param_1 * 2;
        pfVar16 = pfVar16 + param_1 * 2;
        param_8 = param_8 + -iVar8;
        if (0 < param_3) {
          param_4 = param_3;
          pfVar14 = pfVar16;
          param_2 = pfVar22;
          param_6 = pfVar21;
          param_7 = param_8;
          do {
            if (2 < (int)param_1) {
              uVar26 = param_1 - 1 >> 1;
              pfVar17 = param_7;
              pfVar23 = param_2;
              pfVar15 = pfVar14;
              pfVar12 = param_6;
              do {
                uVar26 = uVar26 - 1;
                pfVar15[-1] = pfVar23[-1] + pfVar17[-1];
                pfVar12[-1] = pfVar23[-1] - pfVar17[-1];
                *pfVar15 = *pfVar23 + *pfVar17;
                *pfVar12 = *pfVar17 - *pfVar23;
                pfVar17 = pfVar17 + 2;
                pfVar23 = pfVar23 + 2;
                pfVar15 = pfVar15 + 2;
                pfVar12 = pfVar12 + -2;
              } while (uVar26 != 0);
            }
            pfVar14 = pfVar14 + iVar9;
            param_6 = param_6 + iVar9;
            param_2 = param_2 + param_1;
            param_7 = param_7 + param_1;
            param_4 = param_4 + -1;
          } while (param_4 != 0);
        }
        param_9 = (float *)((int)param_9 + -1);
      } while (param_9 != (float *)0x0);
    }
  }
  return;
}


