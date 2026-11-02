/* Module: rv203260.dll
   Function: FUN_638b0760
   Address: 638b0760
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_638b0760(uint *param_1,uint *param_2,undefined4 param_3,uint param_4,undefined4 param_5,
            uint param_6,float param_7,uint param_8)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  uint *puVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint *puVar15;
  int iVar16;
  undefined4 *puVar17;
  int *piVar18;
  float *pfVar19;
  int iVar20;
  uint *puVar21;
  uint *puVar22;
  undefined4 *puVar23;
  bool bVar24;
  float local_1a4 [5];
  float afStack_190 [5];
  float local_17c [5];
  float local_168 [5];
  float afStack_154 [5];
  float afStack_140 [5];
  float afStack_12c [5];
  float afStack_118 [5];
  float local_104 [5];
  float afStack_f0 [5];
  float afStack_dc [5];
  float afStack_c8 [5];
  int local_b4 [5];
  int aiStack_a0 [5];
  float local_8c [5];
  float afStack_78 [5];
  uint local_64;
  uint uStack_60;
  float local_5c [5];
  float local_48 [5];
  float local_34;
  float local_30;
  int local_2c;
  float *local_28;
  uint local_24;
  float *pfStack_20;
  uint local_1c;
  uint local_18;
  float *local_14;
  int *local_10;
  float *local_c;
  float *local_8;
  
  local_8 = (float *)_DAT_638b3480;
  local_1c = (uint)param_7 >> 2;
  local_34 = 0.0;
  local_30 = 0.0;
  local_2c = 0;
  if (DAT_638b5554 == 1) {
    DAT_638b6744 = param_6;
    puVar15 = &DAT_638b6758;
    for (iVar16 = 0x14; iVar16 != 0; iVar16 = iVar16 + -1) {
      *puVar15 = param_6;
      puVar15 = puVar15 + 1;
    }
    DAT_638b5554 = 0;
    return 0;
  }
  fVar9 = _DAT_638b3480;
  if (param_8 != 0) {
    pfStack_20 = (float *)(param_8 + 1 >> 1);
    puVar15 = param_2;
    puVar22 = param_1;
    fVar10 = _DAT_638b3480;
    do {
      if (local_1c != 0) {
        puVar21 = puVar22 + local_1c;
        puVar12 = puVar15;
        local_8 = (float *)local_1c;
        do {
          fVar3 = (float)(int)((*(uint *)(((int)puVar22 - (int)puVar15) + (int)puVar12) & 0xff00) -
                              (*puVar12 & 0xff00));
          iVar16 = (*puVar21 & 0xff00) -
                   (*(uint *)(((int)puVar15 - (int)puVar22) + (int)puVar21) & 0xff00);
          puVar12 = puVar12 + 1;
          fVar9 = fVar9 - fVar3 * fVar3 * _DAT_638b34c4;
          puVar21 = puVar21 + 1;
          local_8 = (float *)((int)local_8 - 1);
          fVar10 = fVar10 - (float)iVar16 * (float)iVar16 * _DAT_638b34c4;
        } while (local_8 != (float *)0x0);
      }
      local_8 = (float *)fVar10;
      puVar15 = puVar15 + local_1c * 2;
      puVar22 = puVar22 + local_1c * 2;
      pfStack_20 = (float *)((int)pfStack_20 - 1);
      fVar10 = (float)local_8;
    } while (pfStack_20 != (float *)0x0);
  }
  local_18 = param_8 + 1 >> 1;
  local_64 = local_1c * local_18;
  pfStack_20 = (float *)0x0;
  param_7 = fVar9 / (float)local_64;
  local_24 = local_1c * (param_8 >> 1);
  uStack_60 = param_8 >> 1;
  fVar9 = (float)local_8 / (float)local_24;
  if ((((param_7 == _DAT_638b3480) && (fVar9 == _DAT_638b3480)) && (500 < DAT_638b5564)) &&
     (_DAT_638b3488 < (double)CONCAT44(param_4,param_3))) {
    DAT_638b5564 = 0;
    DAT_638b67a4 = param_6;
    return 1;
  }
  DAT_638b5564 = DAT_638b5564 + 1;
  if (param_6 < DAT_638b67a4) {
    uVar13 = (param_6 - DAT_638b67a4) - 1;
  }
  else {
    uVar13 = param_6 - DAT_638b67a4;
  }
  if (0x32 < uVar13) {
    local_8 = (float *)((uVar13 - 0x12) / 0x21);
    do {
      iVar16 = 0;
      puVar23 = &DAT_638b6758;
      puVar14 = &DAT_638b5568;
      do {
        puVar17 = puVar14 + 1;
        (&DAT_638b55b8)[iVar16] = (float)(&DAT_638b55bc)[iVar16];
        *puVar14 = (&DAT_638b556c)[iVar16];
        *puVar23 = puVar23[1];
        iVar16 = iVar16 + 1;
        puVar23 = puVar23 + 1;
        puVar14 = puVar17;
      } while (puVar17 < &DAT_638b55b4);
      DAT_638b5560 = (float)((int)DAT_638b5560 + -1);
      (&DAT_638b55b8)[iVar16] = -2.0;
      (&DAT_638b5568)[iVar16] = -2.0;
      (&DAT_638b6758)[iVar16] = param_6;
      if ((int)DAT_638b5560 < 0) {
        DAT_638b5560 = 5.60519e-45;
      }
      local_8 = (float *)((int)local_8 - 1);
    } while (local_8 != (float *)0x0);
  }
  iVar16 = 0;
  puVar23 = &DAT_638b6758;
  puVar14 = &DAT_638b5568;
  do {
    puVar17 = puVar14 + 1;
    (&DAT_638b55b8)[iVar16] = (float)(&DAT_638b55bc)[iVar16];
    *puVar14 = (&DAT_638b556c)[iVar16];
    *puVar23 = puVar23[1];
    iVar16 = iVar16 + 1;
    puVar23 = puVar23 + 1;
    puVar14 = puVar17;
  } while (puVar17 < &DAT_638b55b4);
  DAT_638b5560 = (float)((int)DAT_638b5560 + -1);
  if ((int)DAT_638b5560 < 0) {
    DAT_638b5560 = 5.60519e-45;
  }
  if (_DAT_638b3490 < param_7) {
    param_7 = 100.0;
  }
  if (_DAT_638b3490 < fVar9) {
    fVar9 = _DAT_638b3490;
  }
  (&DAT_638b6758)[iVar16] = param_6;
  (&DAT_638b55b8)[iVar16] = param_7;
  (&DAT_638b5568)[iVar16] = fVar9;
  if (DAT_638b5558 == 1) {
    if (DAT_638b55b8 == _DAT_638b3494) {
      return 0;
    }
    if (DAT_638b5568 == _DAT_638b3494) {
      return 0;
    }
    if ((double)CONCAT44(param_4,param_3) < _DAT_638b3498) {
      return 0;
    }
    param_4 = 0;
    local_28 = (float *)&DAT_638b54a8;
    do {
      local_14 = local_168;
      param_7 = 0.0;
      local_10 = (int *)param_4;
      local_8 = local_1a4;
      local_c = &DAT_638b5568 + param_4;
      do {
        pfVar1 = local_8;
        piVar18 = local_10;
        bVar24 = local_c < &DAT_638b55b8;
        local_48[(int)param_7] = 0.0;
        afStack_dc[(int)param_7] = 0.0;
        local_5c[(int)param_7] = 0.0;
        afStack_c8[(int)param_7] = 0.0;
        *local_8 = 65025.0;
        afStack_154[(int)param_7] = 65025.0;
        afStack_f0[(int)param_7] = 0.0;
        afStack_118[(int)param_7] = 0.0;
        fVar9 = _DAT_638b3480;
        fVar10 = _DAT_638b3480;
        if (bVar24) {
          do {
            if ((uint)((int)piVar18 - (int)param_7) % 5 == 0) {
              if ((&DAT_638b55b8)[(int)piVar18] != (float)_DAT_638b34a0) {
                fVar3 = (&DAT_638b55b8)[(int)piVar18];
                fVar4 = (&DAT_638b55b8)[(int)piVar18];
                fVar9 = fVar9 - _DAT_638b3494;
                local_48[(int)param_7] = local_48[(int)param_7] + (&DAT_638b55b8)[(int)piVar18];
                local_5c[(int)param_7] = fVar3 * fVar3 + local_5c[(int)param_7];
                if (afStack_118[(int)param_7] < fVar4) {
                  afStack_118[(int)param_7] = (&DAT_638b55b8)[(int)piVar18];
                }
                if ((&DAT_638b5568)[(int)piVar18] < afStack_154[(int)param_7]) {
                  afStack_154[(int)param_7] = (&DAT_638b5568)[(int)piVar18];
                }
              }
            }
            else if ((&DAT_638b55b8)[(int)piVar18] != (float)_DAT_638b34a0) {
              fVar3 = (&DAT_638b55b8)[(int)piVar18];
              fVar4 = *pfVar1;
              fVar5 = (&DAT_638b55b8)[(int)piVar18];
              fVar10 = fVar10 - _DAT_638b3494;
              afStack_dc[(int)param_7] = afStack_dc[(int)param_7] + (&DAT_638b55b8)[(int)piVar18];
              afStack_c8[(int)param_7] = fVar3 * fVar3 + afStack_c8[(int)param_7];
              if (fVar5 < fVar4) {
                *pfVar1 = (&DAT_638b55b8)[(int)piVar18];
              }
              if (afStack_f0[(int)param_7] < (&DAT_638b55b8)[(int)piVar18]) {
                afStack_f0[(int)param_7] = (&DAT_638b55b8)[(int)piVar18];
              }
            }
            piVar18 = (int *)((int)piVar18 + 1);
          } while (piVar18 < 0x14);
        }
        if ((fVar9 < _DAT_638b34a8) || (fVar10 < _DAT_638b34c8)) {
          local_b4[(int)param_7] = 0;
          local_48[(int)param_7] = 0.0;
          afStack_dc[(int)param_7] = 0.0;
          local_5c[(int)param_7] = 1.0;
          afStack_c8[(int)param_7] = 1.0;
        }
        else {
          fVar3 = local_48[(int)param_7] / fVar9;
          local_b4[(int)param_7] = 1;
          fVar4 = afStack_dc[(int)param_7] / fVar10;
          local_48[(int)param_7] = fVar3;
          local_5c[(int)param_7] = SQRT(local_5c[(int)param_7] / fVar9 - fVar3 * fVar3);
          afStack_dc[(int)param_7] = fVar4;
          afStack_c8[(int)param_7] = SQRT(afStack_c8[(int)param_7] / fVar10 - fVar4 * fVar4);
        }
        *local_14 = 0.0;
        pfVar1 = local_8c + (int)param_7;
        pfVar2 = local_17c + (int)param_7;
        local_104[(int)param_7] = 65025.0;
        afStack_190[(int)param_7] = 65025.0;
        *pfVar1 = 0.0;
        *pfVar2 = 0.0;
        afStack_78[(int)param_7] = 0.0;
        afStack_140[(int)param_7] = 0.0;
        afStack_12c[(int)param_7] = 0.0;
        pfStack_20 = (float *)local_10;
        fVar9 = _DAT_638b3480;
        fVar10 = _DAT_638b3480;
        pfVar11 = local_14;
        for (pfVar19 = local_c; pfVar19 < &DAT_638b55b8; pfVar19 = pfVar19 + 1) {
          local_14 = pfVar11;
          if ((uint)((int)pfStack_20 - (int)param_7) % 5 == 0) {
            if (*pfVar19 != (float)_DAT_638b34a0) {
              fVar3 = *pfVar19;
              fVar4 = *pfVar19;
              fVar9 = fVar9 - _DAT_638b3494;
              *pfVar1 = *pfVar19 + *pfVar1;
              afStack_78[(int)param_7] = fVar3 * fVar3 + afStack_78[(int)param_7];
              if (afStack_12c[(int)param_7] < fVar4) {
                afStack_12c[(int)param_7] = *pfVar19;
              }
              if (*pfVar19 < afStack_190[(int)param_7]) {
                afStack_190[(int)param_7] = *pfVar19;
              }
            }
          }
          else if (*pfVar19 != (float)_DAT_638b34a0) {
            fVar3 = *pfVar19;
            fVar4 = local_104[(int)param_7];
            fVar5 = *pfVar19;
            fVar6 = *pfVar11;
            fVar10 = fVar10 - _DAT_638b3494;
            *pfVar2 = *pfVar19 + *pfVar2;
            *pfVar11 = fVar3 * fVar3 + fVar6;
            if (fVar5 < fVar4) {
              local_104[(int)param_7] = *pfVar19;
            }
            if (afStack_140[(int)param_7] < *pfVar19) {
              afStack_140[(int)param_7] = *pfVar19;
            }
          }
          pfStack_20 = (float *)((int)pfStack_20 + 1);
          pfVar11 = local_14;
        }
        if ((fVar9 < _DAT_638b34a8) || (fVar10 < _DAT_638b34c8)) {
          aiStack_a0[(int)param_7] = 0;
          *pfVar1 = 0.0;
          *pfVar2 = 0.0;
          afStack_78[(int)param_7] = 1.0;
          *pfVar11 = 1.0;
        }
        else {
          aiStack_a0[(int)param_7] = 1;
          fVar4 = *pfVar1 / fVar9;
          fVar5 = *pfVar2 / fVar10;
          fVar3 = *pfVar11;
          *pfVar1 = fVar4;
          afStack_78[(int)param_7] = SQRT(afStack_78[(int)param_7] / fVar9 - fVar4 * fVar4);
          *pfVar2 = fVar5;
          *pfVar11 = SQRT(fVar3 / fVar10 - fVar5 * fVar5);
        }
        param_7 = (float)((int)param_7 + 1);
        local_10 = (int *)((int)local_10 + 1);
        local_c = local_c + 1;
        local_8 = local_8 + 1;
        local_14 = pfVar11 + 1;
      } while ((uint)param_7 < 5);
      local_c = local_5c;
      param_7 = 0.0;
      local_14 = (float *)0x2;
      local_10 = local_b4;
      do {
        local_8 = (float *)((int)param_7 * 4);
        pfStack_20 = local_48 + (int)param_7;
        if ((((((*local_28 * *local_c + *pfStack_20 <
                 afStack_dc[(int)param_7] -
                 afStack_c8[(int)param_7] * *(float *)(&DAT_638b5500 + param_4 * 4)) &&
               (*local_10 == 1)) &&
              (uVar13 = (uint)local_14 % 5,
              *local_28 * afStack_78[uVar13] + local_8c[uVar13] <
              local_17c[uVar13] - local_168[uVar13] * *(float *)(&DAT_638b5500 + param_4 * 4))) &&
             ((aiStack_a0[uVar13] == 1 && (*local_c + *pfStack_20 < local_8c[(int)param_7])))) &&
            (aiStack_a0[(int)param_7] == 1)) &&
           ((local_8c[uVar13] + afStack_78[uVar13] < local_48[uVar13] && (local_b4[uVar13] == 1))))
        {
          DAT_638b5560 = param_7;
          if (param_7 == 5.60519e-45) goto LAB_638b138e;
          if (param_7 != 4.2039e-45) {
            return 0;
          }
          local_2c = 1;
          DAT_638b5560 = 4.2039e-45;
          goto LAB_638b170d;
        }
        local_8 = local_8c + (int)param_7;
        if ((((*local_28 * afStack_78[(int)param_7] + local_8c[(int)param_7] <
               local_17c[(int)param_7] -
               local_168[(int)param_7] * *(float *)(&DAT_638b5500 + param_4 * 4)) &&
             (aiStack_a0[(int)param_7] == 1)) &&
            (uVar13 = (uint)local_14 % 5,
            *local_28 * local_5c[uVar13] + local_48[uVar13] <
            afStack_dc[uVar13] - afStack_c8[uVar13] * *(float *)(&DAT_638b5500 + param_4 * 4))) &&
           (((local_b4[uVar13] == 1 &&
             (afStack_78[(int)param_7] + local_8c[(int)param_7] < *pfStack_20)) &&
            ((*local_10 == 1 &&
             ((local_48[uVar13] + local_5c[uVar13] < local_8c[uVar13] && (aiStack_a0[uVar13] == 1)))
             ))))) {
          DAT_638b5560 = param_7;
          if (param_7 == 5.60519e-45) goto LAB_638b138e;
          if (param_7 != 4.2039e-45) {
            return 0;
          }
          local_2c = 1;
          goto LAB_638b15de;
        }
        param_7 = (float)((int)param_7 + 1);
        local_c = local_c + 1;
        local_10 = local_10 + 1;
        local_14 = (float *)((int)local_14 + 1);
      } while ((uint)param_7 < 5);
      param_7 = 0.0;
      local_14 = (float *)0x2;
      local_10 = local_b4;
      local_8 = local_104;
      do {
        pfStack_20 = local_48 + (int)param_7;
        if ((((*local_28 * local_5c[(int)param_7] + *pfStack_20 < local_1a4[(int)param_7]) &&
             (10 < DAT_638b555c)) && (*local_10 == 1)) &&
           (((uVar13 = (uint)local_14 % 5,
             *local_28 * afStack_78[uVar13] + local_8c[uVar13] < local_104[uVar13] &&
             (aiStack_a0[uVar13] == 1)) &&
            (((local_5c[(int)param_7] + *pfStack_20 < local_8c[(int)param_7] &&
              ((aiStack_a0[(int)param_7] == 1 &&
               (local_8c[uVar13] + afStack_78[uVar13] < local_48[uVar13])))) &&
             (local_b4[uVar13] == 1)))))) {
          DAT_638b5560 = param_7;
          if (param_7 == 5.60519e-45) {
LAB_638b138e:
            uVar13 = param_6 - DAT_638b6744;
            if ((uVar13 < 0x92) || (0xae < uVar13)) {
              if ((uVar13 < 300) && (4 < DAT_638b555c)) {
                DAT_638b555c = DAT_638b555c - 5;
              }
            }
            else if (DAT_638b555c < 100) {
              DAT_638b6744 = param_6;
              DAT_638b555c = DAT_638b555c + 5;
              return 1;
            }
            DAT_638b6744 = param_6;
            return 1;
          }
          if (param_7 != 4.2039e-45) {
            return 0;
          }
          local_2c = 1;
          goto LAB_638b170d;
        }
        if ((((((*local_28 * afStack_78[(int)param_7] + local_8c[(int)param_7] < *local_8) &&
               (10 < DAT_638b555c)) && (aiStack_a0[(int)param_7] == 1)) &&
             ((uVar13 = (uint)local_14 % 5,
              *local_28 * local_5c[uVar13] + local_48[uVar13] < local_1a4[uVar13] &&
              (local_b4[uVar13] == 1)))) &&
            ((afStack_78[(int)param_7] + local_8c[(int)param_7] < *pfStack_20 &&
             ((*local_10 == 1 && (local_48[uVar13] + local_5c[uVar13] < local_8c[uVar13])))))) &&
           (aiStack_a0[uVar13] == 1)) {
          DAT_638b5560 = param_7;
          if (param_7 == 5.60519e-45) goto LAB_638b138e;
          if (param_7 != 4.2039e-45) {
            return 0;
          }
          local_2c = 1;
          goto LAB_638b15de;
        }
        param_7 = (float)((int)param_7 + 1);
        local_8 = local_8 + 1;
        local_10 = local_10 + 1;
        local_14 = (float *)((int)local_14 + 1);
      } while ((uint)param_7 < 5);
      local_28 = local_28 + 5;
      param_4 = param_4 + 5;
    } while (local_28 < (float *)0x638b54e1);
    if ((((afStack_118[4] < _DAT_638b34cc) && (0x32 < DAT_638b555c)) &&
        (afStack_12c[4] < _DAT_638b34cc)) &&
       (((local_b4[4] == 1 && (afStack_140[4] < _DAT_638b34cc)) &&
        ((afStack_f0[4] < _DAT_638b34cc && ((aiStack_a0[4] == 1 && (DAT_638b5560 == 5.60519e-45)))))
        ))) {
      DAT_638b67b0 = 1;
      DAT_638b6744 = param_6;
      return 1;
    }
  }
  if (((((_DAT_638b5604 < _DAT_638b55b4 * (float)_DAT_638b34d0) && (DAT_638b5560 == 5.60519e-45)) &&
       (0x32 < DAT_638b555c)) && (DAT_638b67b0 == 0)) ||
     (((DAT_638b5560 == 5.60519e-45 && (_DAT_638b55b4 < _DAT_638b5604 * (float)_DAT_638b34d0)) &&
      ((0x32 < DAT_638b555c && (DAT_638b67b0 == 0)))))) {
    DAT_638b67b0 = 1;
    DAT_638b6744 = param_6;
    return 1;
  }
  if (((_DAT_638b5604 < _DAT_638b55b4 * (float)_DAT_638b34d8) && (_DAT_638b34b0 < _DAT_638b55b4)) &&
     ((0x32 < DAT_638b555c && (DAT_638b67b0 == 0)))) {
    DAT_638b67b0 = 1;
    DAT_638b6744 = param_6;
    return 1;
  }
  if (((_DAT_638b5604 <= _DAT_638b34b0) || (_DAT_638b5604 * (float)_DAT_638b34d8 <= _DAT_638b55b4))
     || (DAT_638b555c < 0x33)) {
    if (DAT_638b67b0 == 0) goto LAB_638b184b;
  }
  else if (DAT_638b67b0 == 0) {
    DAT_638b6744 = param_6;
    DAT_638b67b0 = 1;
    return 1;
  }
  DAT_638b67b0 = 0;
  if (DAT_638b67a8 != 0) {
LAB_638b15de:
    if (local_2c == 0) {
      if (param_8 != 0) {
        param_6 = local_18;
        puVar15 = param_2;
        puVar22 = param_1;
        do {
          if (local_1c != 0) {
            puVar21 = puVar22 + local_1c;
            puVar12 = puVar15;
            uVar13 = local_1c;
            do {
              uVar7 = *puVar21;
              puVar21 = puVar21 + 1;
              uVar8 = *puVar12;
              fVar9 = (float)(int)((*(uint *)((int)puVar12 + ((int)puVar22 - (int)puVar15)) & 0xff00
                                   ) - (uVar7 & 0xff00));
              puVar12 = puVar12 + 1;
              uVar13 = uVar13 - 1;
              local_34 = fVar9 * fVar9 + local_34;
              fVar9 = (float)(int)((uVar7 & 0xff00) - (uVar8 & 0xff00));
              local_30 = fVar9 * fVar9 + local_30;
            } while (uVar13 != 0);
          }
          puVar15 = puVar15 + local_1c * 2;
          puVar22 = puVar22 + local_1c * 2;
          param_6 = param_6 - 1;
        } while (param_6 != 0);
      }
      if (local_34 < local_30) {
        return 0;
      }
    }
    DAT_638b67a8 = 1;
    if (param_8 == 0) {
      DAT_638b67a8 = 1;
      return 0;
    }
    iVar16 = (int)param_2 - (int)param_1;
    param_8 = local_18;
    do {
      puVar15 = (uint *)((int)param_1 + iVar16);
      puVar22 = param_1;
      for (uVar13 = local_1c & 0x3fffffff; uVar13 != 0; uVar13 = uVar13 - 1) {
        *puVar22 = *puVar15;
        puVar15 = puVar15 + 1;
        puVar22 = puVar22 + 1;
      }
      for (iVar20 = 0; iVar20 != 0; iVar20 = iVar20 + -1) {
        *(char *)puVar22 = (char)*puVar15;
        puVar15 = (uint *)((int)puVar15 + 1);
        puVar22 = (uint *)((int)puVar22 + 1);
      }
      param_1 = param_1 + local_1c * 2;
      param_8 = param_8 - 1;
    } while (param_8 != 0);
    return 0;
  }
  if (DAT_638b67ac != 0) {
LAB_638b170d:
    if (local_2c == 0) {
      if (param_8 != 0) {
        param_4 = local_18;
        puVar15 = param_2;
        puVar22 = param_1;
        do {
          if (local_1c != 0) {
            param_6 = local_1c;
            puVar21 = puVar15 + local_1c;
            puVar12 = puVar22;
            do {
              uVar13 = *puVar12;
              fVar9 = (float)(int)((uVar13 & 0xff00) -
                                  (*(uint *)((int)puVar21 + ((int)puVar22 - (int)puVar15)) & 0xff00)
                                  );
              puVar12 = puVar12 + 1;
              param_6 = param_6 - 1;
              local_34 = fVar9 * fVar9 + local_34;
              fVar9 = (float)(int)((uVar13 & 0xff00) - (*puVar21 & 0xff00));
              local_30 = fVar9 * fVar9 + local_30;
              puVar21 = puVar21 + 1;
            } while (param_6 != 0);
          }
          puVar15 = puVar15 + local_1c * 2;
          puVar22 = puVar22 + local_1c * 2;
          param_4 = param_4 - 1;
        } while (param_4 != 0);
      }
      if (local_34 < local_30) {
        return 0;
      }
    }
    puVar15 = param_1 + local_1c;
    DAT_638b67ac = 1;
    if (param_8 < 2) {
      DAT_638b67ac = 1;
      return 0;
    }
    iVar16 = local_1c * 4 - (int)puVar15;
    param_8 = uStack_60;
    do {
      puVar22 = (uint *)((int)param_2 + iVar16 + (int)puVar15);
      puVar21 = puVar15;
      for (uVar13 = local_1c & 0x3fffffff; uVar13 != 0; uVar13 = uVar13 - 1) {
        *puVar21 = *puVar22;
        puVar22 = puVar22 + 1;
        puVar21 = puVar21 + 1;
      }
      for (iVar20 = 0; iVar20 != 0; iVar20 = iVar20 + -1) {
        *(char *)puVar21 = (char)*puVar22;
        puVar22 = (uint *)((int)puVar22 + 1);
        puVar21 = (uint *)((int)puVar21 + 1);
      }
      puVar15 = puVar15 + local_1c * 2;
      param_8 = param_8 - 1;
    } while (param_8 != 0);
    return 0;
  }
LAB_638b184b:
  if (((_DAT_638b34c0 < afStack_118[4]) || (_DAT_638b34c0 < afStack_f0[4])) && (DAT_638b555c != 0))
  {
    DAT_638b555c = DAT_638b555c - 1;
  }
  return 0;
}


