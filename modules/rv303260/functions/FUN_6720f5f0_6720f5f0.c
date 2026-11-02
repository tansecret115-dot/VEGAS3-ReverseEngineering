/* Module: rv303260.dll
   Function: FUN_6720f5f0
   Address: 6720f5f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_6720f5f0(uint *param_1,float *param_2,undefined4 param_3,float *param_4,float *param_5,
            uint param_6)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  float *pfVar11;
  int iVar12;
  float *pfVar13;
  uint uVar14;
  int *piVar15;
  uint *puVar16;
  bool bVar17;
  float local_b4 [5];
  float local_a0 [5];
  float local_8c [5];
  float local_78 [4];
  float local_68;
  float local_64 [5];
  float afStack_50 [5];
  int local_3c [5];
  float afStack_28 [5];
  int local_14;
  uint local_10;
  uint local_c;
  float *local_8;
  
  local_c = (uint)param_5 >> 2;
  if ((DAT_67215644 == 1) || (param_2 == (float *)0x0)) {
    DAT_67216834 = param_6;
    puVar16 = &DAT_67216848;
    for (iVar12 = 0x14; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar16 = param_6;
      puVar16 = puVar16 + 1;
    }
    DAT_67215644 = 0;
  }
  else {
    fVar6 = _DAT_67213488;
    if (local_c != 0) {
      iVar12 = (int)param_2 - (int)param_1;
      uVar14 = local_c;
      do {
        iVar8 = (*param_1 & 0xff) - (*(uint *)(iVar12 + (int)param_1) & 0xff);
        param_1 = param_1 + 1;
        uVar14 = uVar14 - 1;
        fVar6 = fVar6 + (float)(iVar8 * iVar8);
      } while (uVar14 != 0);
    }
    fVar6 = fVar6 / (float)local_c;
    if (((fVar6 == _DAT_67213488) && (500 < DAT_67215654)) &&
       (_DAT_67213490 < (double)CONCAT44(param_4,param_3))) {
      DAT_67215654 = 0;
      DAT_67216894 = param_6;
      return 1;
    }
    DAT_67215654 = DAT_67215654 + 1;
    if (param_6 < DAT_67216894) {
      uVar14 = (param_6 - DAT_67216894) - 1;
    }
    else {
      uVar14 = param_6 - DAT_67216894;
    }
    if (0x32 < uVar14) {
      param_5 = (float *)((uVar14 - 0x12) / 0x21);
      do {
        iVar12 = 0;
        puVar9 = &DAT_67216848;
        do {
          puVar10 = puVar9 + 1;
          (&DAT_67215548)[iVar12] = (float)(&DAT_6721554c)[iVar12];
          *puVar9 = (&DAT_6721684c)[iVar12];
          iVar12 = iVar12 + 1;
          puVar9 = puVar10;
        } while (puVar10 < &DAT_67216894);
        DAT_67215650 = DAT_67215650 + -1;
        (&DAT_67215548)[iVar12] = -2.0;
        (&DAT_67216848)[iVar12] = param_6;
        if ((int)DAT_67215650 < 0) {
          DAT_67215650 = 4;
        }
        param_5 = (float *)((int)param_5 + -1);
      } while (param_5 != (float *)0x0);
    }
    iVar12 = 0;
    puVar9 = &DAT_67216848;
    do {
      puVar10 = puVar9 + 1;
      (&DAT_67215548)[iVar12] = (float)(&DAT_6721554c)[iVar12];
      *puVar9 = (&DAT_6721684c)[iVar12];
      iVar12 = iVar12 + 1;
      puVar9 = puVar10;
    } while (puVar10 < &DAT_67216894);
    DAT_67215650 = DAT_67215650 + -1;
    if ((int)DAT_67215650 < 0) {
      DAT_67215650 = 4;
    }
    iVar8 = DAT_67215650;
    if (_DAT_67213498 < fVar6) {
      fVar6 = _DAT_67213498;
    }
    (&DAT_67215548)[iVar12] = fVar6;
    (&DAT_67216848)[iVar12] = param_6;
    bVar17 = false;
    if (DAT_67215648 == 1) {
      if (DAT_67215548 == _DAT_6721349c) {
        return 0;
      }
      if ((double)CONCAT44(param_4,param_3) < _DAT_672134a0) {
        return 0;
      }
      bVar17 = true;
    }
    if (bVar17) {
      local_8 = (float *)&DAT_67215598;
      local_14 = 0;
      do {
        param_2 = local_b4;
        param_5 = local_78;
        param_4 = &DAT_67215548 + local_14;
        param_1 = (uint *)0x0;
        iVar12 = local_14;
        do {
          pfVar13 = local_8c + (int)param_1;
          *param_2 = 0.0;
          pfVar1 = local_a0 + (int)param_1;
          *pfVar13 = 0.0;
          afStack_28[(int)param_1] = 0.0;
          *param_5 = 0.0;
          *pfVar1 = 0.0;
          afStack_50[(int)param_1] = 0.0;
          local_10 = iVar12 + (int)param_1;
          local_64[(int)param_1] = 65025.0;
          pfVar11 = param_4;
          fVar6 = _DAT_67213488;
          fVar7 = _DAT_67213488;
          if (local_10 < 0x14) {
            do {
              if ((local_10 - (int)param_1) % 5 == 0) {
                if (*pfVar11 != (float)_DAT_672134a8) {
                  fVar2 = *pfVar11;
                  fVar3 = *pfVar11;
                  fVar6 = fVar6 - _DAT_6721349c;
                  *pfVar13 = *pfVar11 + *pfVar13;
                  afStack_28[(int)param_1] = fVar2 * fVar2 + afStack_28[(int)param_1];
                  if (afStack_50[(int)param_1] < fVar3) {
                    afStack_50[(int)param_1] = *pfVar11;
                  }
                }
              }
              else if (*pfVar11 != (float)_DAT_672134a8) {
                fVar2 = *pfVar11;
                fVar3 = local_64[(int)param_1];
                fVar4 = *pfVar11;
                fVar5 = *param_2;
                fVar7 = fVar7 - _DAT_6721349c;
                *pfVar1 = *pfVar11 + *pfVar1;
                *param_2 = fVar2 * fVar2 + fVar5;
                if (fVar4 < fVar3) {
                  local_64[(int)param_1] = *pfVar11;
                }
                if (*param_5 < *pfVar11) {
                  *param_5 = *pfVar11;
                }
              }
              pfVar11 = pfVar11 + 1;
              local_10 = local_10 + 1;
              iVar12 = local_14;
            } while (pfVar11 < &DAT_67215598);
          }
          if ((fVar6 < _DAT_672134b0) || (fVar7 < _DAT_672134b4)) {
            local_3c[(int)param_1] = 0;
            *pfVar13 = 0.0;
            *pfVar1 = 0.0;
            afStack_28[(int)param_1] = 1.0;
            *param_2 = 1.0;
          }
          else {
            local_3c[(int)param_1] = 1;
            fVar3 = *pfVar13 / fVar6;
            fVar4 = *pfVar1 / fVar7;
            fVar2 = *param_2;
            *pfVar13 = fVar3;
            afStack_28[(int)param_1] = SQRT(afStack_28[(int)param_1] / fVar6 - fVar3 * fVar3);
            *pfVar1 = fVar4;
            *param_2 = SQRT(fVar2 / fVar7 - fVar4 * fVar4);
          }
          param_1 = (uint *)((int)param_1 + 1);
          param_4 = param_4 + 1;
          param_5 = param_5 + 1;
          param_2 = param_2 + 1;
        } while (param_1 < (uint *)0x5);
        uVar14 = 0;
        pfVar13 = local_a0;
        do {
          if ((afStack_28[uVar14] * *local_8 + local_8c[uVar14] <
               *pfVar13 - local_b4[uVar14] * *(float *)(&DAT_672155f0 + iVar12 * 4)) &&
             (local_3c[uVar14] == 1)) {
            DAT_67215650 = uVar14;
            if (uVar14 != 4) {
              return 0;
            }
            uVar14 = param_6 - DAT_67216834;
            if ((uVar14 < 0x92) || (0xae < uVar14)) {
              if ((uVar14 < 300) && (4 < DAT_6721564c)) {
                DAT_6721564c = DAT_6721564c - 5;
              }
            }
            else if (DAT_6721564c < 100) {
              DAT_67216834 = param_6;
              DAT_6721564c = DAT_6721564c + 5;
              return 1;
            }
            DAT_67216834 = param_6;
            return 1;
          }
          uVar14 = uVar14 + 1;
          pfVar13 = pfVar13 + 1;
        } while (uVar14 < 5);
        uVar14 = 0;
        piVar15 = local_3c;
        pfVar13 = local_64;
        do {
          if (((afStack_28[uVar14] * *local_8 + local_8c[uVar14] < *pfVar13) && (10 < DAT_6721564c))
             && (*piVar15 == 1)) {
            DAT_67215650 = uVar14;
            if (uVar14 != 4) {
              return 0;
            }
            uVar14 = param_6 - DAT_67216834;
            if ((uVar14 < 0x92) || (0xae < uVar14)) {
              if ((uVar14 < 300) && (4 < DAT_6721564c)) {
                DAT_6721564c = DAT_6721564c - 5;
              }
            }
            else if (DAT_6721564c < 100) {
              DAT_67216834 = param_6;
              DAT_6721564c = DAT_6721564c + 5;
              return 1;
            }
            DAT_67216834 = param_6;
            return 1;
          }
          uVar14 = uVar14 + 1;
          pfVar13 = pfVar13 + 1;
          piVar15 = piVar15 + 1;
        } while (uVar14 < 5);
        if (((afStack_50[4] < _DAT_672134b8) && (0x32 < DAT_6721564c)) &&
           ((local_68 < _DAT_672134b8 && ((local_3c[4] == 1 && (DAT_67215650 == 4)))))) {
          DAT_67216834 = param_6;
          return 1;
        }
        local_8 = local_8 + 5;
        local_14 = iVar12 + 5;
        iVar8 = DAT_67215650;
      } while (local_8 <= &DAT_672155d0);
    }
    if ((((_DAT_67215594 < _DAT_672134b8) || (_DAT_67215594 < _DAT_67215590)) &&
        (0x32 < DAT_6721564c)) && ((local_3c[4] == 1 && (iVar8 == 4)))) {
      DAT_67216834 = param_6;
      return 1;
    }
    if ((_DAT_67215594 < _DAT_67215590 * (float)_DAT_672134c0) && (0x32 < DAT_6721564c)) {
      DAT_67215650 = 4;
      DAT_67216834 = param_6;
      return 1;
    }
    if (((_DAT_672134c8 < afStack_50[4]) || (_DAT_672134c8 < local_68)) && (DAT_6721564c != 0)) {
      DAT_6721564c = DAT_6721564c - 1;
      return 0;
    }
  }
  return 0;
}


