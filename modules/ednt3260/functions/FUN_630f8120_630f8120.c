/* Module: ednt3260.dll
   Function: FUN_630f8120
   Address: 630f8120
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_630f8120(int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short *psVar12;
  double *pdVar13;
  short *psVar14;
  int iVar15;
  short *psVar16;
  int iVar17;
  short *psVar18;
  int iVar19;
  double local_68;
  double local_60;
  double local_40;
  double local_38;
  short *local_20;
  int local_1c;
  int local_18;
  int local_8;
  
  if (*(short *)(param_1 + 0x630a) == 2) {
    psVar12 = (short *)(param_1 + 0xb06e);
    psVar14 = (short *)(param_1 + 0x1b902);
    psVar18 = (short *)(param_1 + 0x1b8ea);
    local_18 = 0;
    local_1c = 0xdc81;
    do {
      if (psVar12[-0x2675] == psVar12[-0x2674]) {
        local_8 = 0;
        if (0 < *psVar18) {
          do {
            sVar7 = *psVar12;
            if (psVar12[-1] < sVar7) {
              sVar7 = psVar12[-1];
            }
            if ((short)(&DAT_63101b20)[local_8] < sVar7) {
              sVar7 = (&DAT_63101b20)[local_8];
            }
            iVar17 = (int)(short)(&DAT_63101b18)[local_8];
            local_68 = _DAT_63102af8;
            local_60 = _DAT_63102af8;
            local_38 = 0.0;
            local_40 = 0.0;
            if (iVar17 < sVar7) {
              iVar15 = sVar7 - iVar17;
              pdVar13 = (double *)(param_1 + 0x30992 + (local_18 + iVar17) * 8);
              do {
                dVar1 = pdVar13[-0x231b];
                dVar2 = pdVar13[0x100];
                dVar3 = pdVar13[-0x241b];
                dVar4 = *pdVar13;
                dVar5 = (dVar1 + dVar3) * _DAT_63102b00;
                dVar6 = (dVar2 + dVar4) * _DAT_63102b00;
                pdVar13 = pdVar13 + 1;
                iVar15 = iVar15 + -1;
                local_68 = dVar4 * dVar4 + dVar3 * dVar3 + local_68;
                local_38 = dVar2 * dVar2 + dVar1 * dVar1 + local_38;
                local_40 = dVar6 * dVar6 + dVar5 * dVar5 + local_40;
                local_60 = (dVar4 - dVar6) * (dVar4 - dVar6) + (dVar3 - dVar5) * (dVar3 - dVar5) +
                           local_60;
              } while (iVar15 != 0);
            }
            sVar8 = FUN_630f95c0(local_68,0x18);
            sVar9 = FUN_630f95c0(local_38,0x18);
            sVar10 = FUN_630f95c0(local_40,0x18);
            sVar11 = FUN_630f95c0(local_60,0x18);
            sVar7 = 0x18 - sVar8;
            if ((short)(0x18 - sVar9) <= (short)(0x18 - sVar8)) {
              sVar7 = 0x18 - sVar9;
            }
            sVar8 = 0x18 - sVar10;
            if ((short)(0x18 - sVar11) <= (short)(0x18 - sVar10)) {
              sVar8 = 0x18 - sVar11;
            }
            if (sVar8 + 2 < (int)sVar7) {
              *(undefined2 *)(param_1 + (local_1c + local_8) * 2) = 1;
            }
            else {
              *(undefined2 *)(param_1 + (local_1c + local_8) * 2) = 0;
            }
            local_8 = local_8 + 1;
          } while (local_8 < *psVar18);
        }
      }
      else {
        iVar17 = 0;
        psVar16 = psVar14;
        if (0 < *psVar18) {
          do {
            *psVar16 = 0;
            iVar17 = iVar17 + 1;
            psVar16 = psVar16 + 1;
          } while (iVar17 < *psVar18);
        }
      }
      local_8 = 0;
      local_20 = psVar14;
      if (0 < *psVar18) {
        do {
          if (*local_20 == 1) {
            sVar7 = psVar12[-1];
            if (*psVar12 <= psVar12[-1]) {
              sVar7 = *psVar12;
            }
            if ((short)(&DAT_63101b20)[local_8] < sVar7) {
              sVar7 = (&DAT_63101b20)[local_8];
            }
            iVar17 = (int)(short)(&DAT_63101b18)[local_8];
            iVar15 = (int)sVar7;
            if (iVar17 < iVar15) {
              iVar19 = iVar15 - iVar17;
              pdVar13 = (double *)(param_1 + 0x1f0ba + (local_18 + iVar17) * 8);
              do {
                dVar1 = pdVar13[-0x100];
                iVar19 = iVar19 + -1;
                dVar2 = (*pdVar13 + dVar1) * _DAT_63102b00;
                pdVar13[-0x100] = dVar2;
                *pdVar13 = dVar1 - dVar2;
                pdVar13 = pdVar13 + 1;
              } while (iVar19 != 0);
              if (iVar17 < iVar15) {
                iVar15 = iVar15 - iVar17;
                pdVar13 = (double *)(param_1 + 0x31192 + (local_18 + iVar17) * 8);
                do {
                  dVar1 = pdVar13[-0x100];
                  iVar15 = iVar15 + -1;
                  dVar2 = (*pdVar13 + dVar1) * _DAT_63102b00;
                  pdVar13[-0x100] = dVar2;
                  *pdVar13 = dVar1 - dVar2;
                  pdVar13 = pdVar13 + 1;
                } while (iVar15 != 0);
              }
            }
          }
          local_8 = local_8 + 1;
          local_20 = local_20 + 1;
        } while (local_8 < *psVar18);
      }
      local_1c = local_1c + 4;
      psVar18 = psVar18 + 1;
      psVar14 = psVar14 + 4;
      psVar12 = psVar12 + 5;
      local_18 = local_18 + 0x500;
    } while (local_1c < 0xdc99);
    *(undefined2 *)(param_1 + 0x1b8f6) = 1;
    psVar12 = (short *)(param_1 + 0x1b90a);
    psVar14 = (short *)(param_1 + 0x1b8ec);
    iVar17 = 5;
    do {
      iVar15 = 0;
      psVar14[6] = 0;
      if (*psVar14 != psVar14[-1]) {
        psVar14[6] = 1;
      }
      psVar18 = psVar12;
      if (0 < *psVar14) {
        do {
          if (*psVar18 != psVar18[-4]) {
            psVar14[6] = 1;
          }
          iVar15 = iVar15 + 1;
          psVar18 = psVar18 + 1;
        } while (iVar15 < *psVar14);
      }
      psVar14 = psVar14 + 1;
      psVar12 = psVar12 + 4;
      iVar17 = iVar17 + -1;
    } while (iVar17 != 0);
  }
  return;
}


