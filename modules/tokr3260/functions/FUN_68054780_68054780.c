/* Module: tokr3260.dll
   Function: FUN_68054780
   Address: 68054780
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_68054780(undefined4 param_1,int param_2,int *param_3)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  int *piVar12;
  int unaff_ESI;
  int iVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  float10 fVar17;
  float10 fVar18;
  int local_4d68;
  int local_4d64 [4607];
  int local_568 [128];
  int aiStackY_368 [32];
  int aiStackY_2e8 [32];
  int local_268 [32];
  int local_1e8 [32];
  float local_168 [32];
  int local_e8 [32];
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  uint local_54;
  float local_50;
  int local_4c;
  int local_48;
  int local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int *piVar19;
  int *piVar20;
  int *piVar21;
  int *piVar22;
  int *piVar23;
  int *piVar24;
  float *pfVar25;
  
  FUN_6805a6a0();
  local_44 = param_3[0x3c89];
  iVar6 = *(int *)(local_44 + 0x38);
  local_58 = param_3[0x3c7b];
  local_4c = param_3[0x3c81];
  if ((int)((local_4c >> 0x1f & 7U) + local_4c) >> 3 < 0x32) {
    local_48 = 3;
  }
  else {
    local_48 = 0;
  }
  piVar7 = local_268;
  for (iVar8 = 0x20; iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar7 = 0;
    piVar7 = piVar7 + 1;
  }
  piVar7 = local_4d64;
  iVar8 = 0x100;
  do {
    fVar17 = (float10)(*DAT_68061220)();
    iVar4 = FUN_680538c0((uint)(float)fVar17);
    *piVar7 = iVar4;
    piVar7 = piVar7 + 0x12;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  piVar7 = local_4d64;
  iVar8 = 0x100;
  fVar3 = _DAT_6805b0b8;
  do {
    iVar4 = *piVar7;
    piVar7 = piVar7 + 0x12;
    iVar8 = iVar8 + -1;
    fVar3 = (float)iVar4 + fVar3;
  } while (iVar8 != 0);
  iVar9 = 0;
  iVar13 = 0;
  iVar4 = 0;
  iVar8 = 0;
  local_50 = fVar3 * _DAT_6805b0bc;
  do {
    iVar5 = (iVar4 - iVar13) * 0xf;
    if (*(int *)((int)local_4d64 + iVar8) <
        *(int *)((int)local_4d64 + iVar9) + ((int)(iVar5 + (iVar5 >> 0x1f & 0xffU)) >> 8)) {
      iVar8 = iVar9;
      iVar4 = iVar13;
    }
    iVar9 = iVar9 + 0x48;
    iVar13 = iVar13 + 1;
  } while (iVar9 < 0x4800);
  piVar24 = param_3;
  iVar13 = FUN_68053e00((int)param_3);
  iVar14 = local_4c + (int)piVar24 * -3;
  iVar5 = FUN_68053e20((int)param_3);
  piVar7 = &local_4d68;
  iVar6 = *(int *)(iVar6 + (int)piVar24 * 4);
  local_34 = 0x6805490e;
  iVar9 = local_58;
  piVar19 = param_3;
  iVar8 = local_44;
  iVar6 = FUN_68055190(((iVar14 - iVar13) - iVar5) + -0xb,(int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2,
                       local_58,local_50,(int)piVar7,param_2,(int)param_3,local_44);
  bVar2 = iVar6 < 1;
  if (bVar2) {
    local_54 = 1;
  }
  else {
    iVar6 = iVar6 + 2;
    local_54 = 0;
  }
  local_54 = (uint)bVar2;
  if (0 < (int)piVar24) {
    iVar9 = iVar9 - (int)piVar7;
    piVar24 = piVar7;
    iVar13 = iVar8;
    do {
      *piVar24 = local_4d64
                 [((int)(*(int *)(iVar9 + (int)piVar24) +
                        (*(int *)(iVar9 + (int)piVar24) >> 0x1f & 3U)) >> 2) * 0x12];
      iVar5 = *(int *)(iVar9 + 4 + (int)piVar24);
      iVar14 = ((int)(*(int *)(iVar9 + (int)piVar24) + (*(int *)(iVar9 + (int)piVar24) >> 0x1f & 3U)
                     ) >> 2) + 1;
      if (iVar14 < (int)(iVar5 + (iVar5 >> 0x1f & 3U)) >> 2) {
        piVar15 = local_4d64 + iVar14 * 0x12;
        do {
          if (*piVar24 < *piVar15) {
            *piVar24 = *piVar15;
          }
          iVar5 = *(int *)(iVar9 + 4 + (int)piVar24);
          iVar14 = iVar14 + 1;
          piVar15 = piVar15 + 0x12;
        } while (iVar14 < (int)(iVar5 + (iVar5 >> 0x1f & 3U)) >> 2);
      }
      piVar24 = piVar24 + 1;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  if (0 < iVar8) {
    pfVar25 = local_168;
    iVar9 = iVar8;
    do {
      iVar9 = iVar9 + -1;
      *pfVar25 = ((float)*(int *)(((int)piVar7 - (int)local_168) + (int)pfVar25) - local_50) *
                 (float)_DAT_6805b0c0;
      pfVar25 = pfVar25 + 1;
    } while (iVar9 != 0);
  }
  piVar24 = local_1e8;
  iVar9 = local_48;
  FUN_68054f90(local_168,piVar24,iVar8,(int)piVar19,local_48);
  uVar1 = local_54;
  iVar13 = 0;
  piVar19 = piVar7;
  if (0 < iVar8) {
    iVar5 = (int)local_1e8 - (int)piVar7;
    piVar19 = piVar24;
    do {
      iVar14 = *piVar7;
      if ((iVar14 < 3) ||
         ((uVar1 == 1 &&
          (((iVar13 < iVar8 + -1 && (iVar8 = iVar9, iVar14 < piVar7[1] + -0xf)) ||
           ((iVar8 = iVar9, 1 < iVar13 && (iVar14 < piVar7[-1] + -0xf)))))))) {
        *(undefined4 *)(iVar5 + (int)piVar7) = 0;
      }
      iVar13 = iVar13 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar13 < iVar8);
  }
  iVar13 = 0x68054a8d;
  FUN_68054fe0(piVar19,local_1e8,&local_4d68,(int)local_e8,(int *)&stack0xfffffff4,iVar8,
               (int)param_3);
  iVar9 = iVar8;
  FUN_68055100(local_1e8,iVar8,&local_68);
  if (unaff_ESI < iVar13 - iVar6) {
    local_60 = local_60 + local_64;
  }
  else {
    local_60 = local_64 / 2 + local_60 + local_5c;
  }
  if (iVar4 < 0xc0) {
    if (iVar4 < 0x80) {
      bVar2 = iVar4 < 0x40;
      if (bVar2) {
        local_40 = 0;
        local_3c = 1;
      }
      else {
        local_40 = 1;
        local_3c = 0;
      }
      local_3c = (uint)bVar2;
      local_40 = (uint)!bVar2;
      local_38 = 2;
    }
    else {
      local_40 = 2;
      local_3c = 0;
      local_38 = 1;
    }
    local_34 = 3;
  }
  else {
    local_40 = 3;
    local_3c = 0;
    local_38 = 1;
    local_34 = 2;
  }
  if (local_60 == 0) {
    fVar17 = (float10)_DAT_6805b0c8;
  }
  else {
    fVar17 = ((float10)(iVar13 - iVar6) * (float10)_DAT_6805b0d0 - (float10)unaff_ESI) /
             (float10)local_60;
  }
  if (fVar17 <= (float10)_DAT_6805b0c8) {
    if (1 < iVar8) {
      pfVar25 = local_168;
      iVar6 = iVar8 + -1;
      do {
        pfVar25 = pfVar25 + 1;
        iVar6 = iVar6 + -1;
        *pfVar25 = *pfVar25 + (float)fVar17;
      } while (iVar6 != 0);
    }
  }
  else if (0 < iVar8) {
    pfVar25 = local_168;
    iVar6 = iVar8;
    do {
      iVar6 = iVar6 + -1;
      *pfVar25 = *pfVar25 + (float)fVar17;
      pfVar25 = pfVar25 + 1;
    } while (iVar6 != 0);
  }
  piVar7 = piVar19;
  FUN_68054f90(local_168,piVar19,iVar8,iVar9,local_48);
  if (0 < iVar8) {
    piVar24 = piVar19;
    iVar6 = iVar8;
    do {
      if (*(int *)(((int)local_1e8 - (int)piVar19) + (int)piVar24) == 0) {
        *piVar24 = 0;
      }
      piVar24 = piVar24 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  piVar24 = (int *)&stack0xfffffff4;
  piVar15 = local_e8;
  piVar22 = &local_4d68;
  piVar20 = piVar19;
  piVar12 = param_3;
  FUN_68054fe0(piVar7,piVar19,piVar22,(int)piVar15,piVar24,iVar8,(int)param_3);
  piVar21 = piVar20;
  piVar23 = piVar15;
  if (0 < iVar8) {
    do {
      piVar19 = piVar7;
      piVar7 = piVar20 + 1;
      iVar8 = 0;
      piVar24 = (int *)0x68054c2f;
      fVar18 = FUN_68053830(*piVar15,0);
      fVar17 = (float10)_DAT_6805b0d8;
      iVar6 = *piVar20;
      if (iVar6 < *piVar7) {
        pfVar25 = (float *)(param_2 + iVar6 * 4);
        do {
          iVar6 = iVar6 + 1;
          *pfVar25 = *pfVar25 * (float)(fVar17 / fVar18);
          pfVar25 = pfVar25 + 1;
        } while (iVar6 < *piVar7);
      }
      piVar15 = piVar15 + 1;
      piVar12 = (int *)((int)piVar12 + -1);
      piVar20 = piVar7;
      piVar7 = piVar19;
    } while (piVar12 != (int *)0x0);
  }
  iVar6 = iVar8 + -1;
  if (-1 < iVar6) {
    do {
      if (0 < *(int *)(((int)piVar19 - (int)local_e8) + (int)(local_e8 + iVar6))) {
        piVar24 = (int *)((int)piVar24 - local_e8[iVar6]);
      }
      aiStackY_2e8[iVar6] = (int)piVar24;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  iVar4 = 0;
  iVar6 = 0;
  piVar19 = piVar7;
  if (0 < iVar8) {
    iVar9 = (int)local_e8 - (int)piVar7;
    piVar24 = local_268;
    piVar15 = piVar22;
    do {
      iVar8 = aiStackY_2e8[iVar4] - iVar6;
      aiStackY_368[iVar4] = iVar8;
      if (((400 < iVar8) && (iVar13 = *piVar7, 0 < iVar13)) && (iVar13 < 7)) {
        *piVar7 = iVar13 + 1;
      }
      if ((0 < iVar4) && (iVar8 < 0x1e)) {
        if (*piVar7 < 2) {
          *piVar24 = 1;
          piVar23[iVar4] = piVar23[iVar4] + 1;
        }
        else {
          *piVar7 = *piVar7 + -1;
        }
      }
      piVar20 = piVar21 + iVar4;
      piVar22 = (int *)*piVar24;
      piVar23 = (int *)piVar15[iVar4];
      piVar21 = (int *)*piVar7;
      piVar19 = (int *)0x68054d30;
      iVar8 = local_44;
      iVar13 = FUN_68054f10((float)piVar21,(int)piVar22,(int)piVar23,
                            (float *)(param_2 + *piVar20 * 4),(short *)(param_3 + *piVar20 + 0x145f)
                            ,local_44);
      piVar24 = piVar24 + 1;
      *(int *)(iVar9 + (int)piVar7) = iVar13;
      iVar6 = iVar6 + iVar13;
      iVar4 = iVar4 + 1;
      piVar7 = piVar7 + 1;
      piVar15 = piVar22;
    } while (iVar4 < iVar8);
  }
  puVar10 = &local_40;
  iVar6 = 0;
  iVar4 = 4;
  do {
    uVar1 = *puVar10;
    iVar13 = FUN_68053ae0(uVar1,0);
    iVar14 = uVar1 + 1;
    iVar9 = 0;
    pfVar25 = (float *)0x68054d84;
    iVar5 = FUN_68053ae0(iVar14,0);
    if (iVar13 <= iVar5 + -1) {
      piVar7 = local_e8 + iVar13;
      iVar16 = (int)piVar19 - (int)local_e8;
      do {
        if (iVar13 < iVar8) {
          iVar8 = iVar9;
          if ((int)pfVar25 < *piVar7 + iVar6) {
            *(undefined4 *)((int)piVar7 + iVar16) = 0;
            *piVar7 = 0;
            iVar8 = iVar9;
          }
          iVar6 = iVar6 + *piVar7;
          iVar9 = iVar8;
        }
        iVar13 = iVar13 + 1;
        piVar7 = piVar7 + 1;
      } while (iVar13 <= iVar5 + -1);
    }
    puVar10 = (uint *)(iVar14 + 4);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar4 = iVar8;
  if (0x1e < iVar8) {
    iVar4 = 0x1e;
  }
  if (0 < iVar4) {
    iVar13 = (int)local_268 - (int)piVar19;
    iVar14 = (int)piVar21 - (int)piVar19;
    iVar5 = (int)local_e8 - (int)piVar19;
    iVar16 = (int)piVar22 - (int)piVar19;
    iVar8 = iVar9;
    do {
      iVar9 = *piVar19;
      if ((0 < iVar9) && (iVar9 < 7)) {
        pfVar25 = (float *)(param_2 + *(int *)(iVar14 + (int)piVar19) * 4);
        iVar4 = *(int *)(iVar13 + (int)piVar19);
        iVar8 = local_44;
        iVar9 = FUN_68054f10((float)(iVar9 + 1),iVar4,*(int *)(iVar16 + (int)piVar19),pfVar25,
                             (short *)local_568,local_44);
        iVar11 = (iVar9 - *(int *)((int)piVar19 + iVar5)) + iVar6;
        if (iVar11 <= (int)pfVar25) {
          *piVar19 = *piVar19 + 1;
          *(int *)((int)piVar19 + iVar5) = iVar9;
          iVar9 = 0;
          iVar6 = iVar11;
          if (0 < *(int *)(iVar16 + (int)piVar19)) {
            piVar7 = local_568;
            do {
              iVar11 = *(int *)(iVar14 + (int)piVar19) + iVar9;
              iVar9 = iVar9 + 1;
              param_3[iVar11 + 0x145f] = *piVar7;
              piVar7 = piVar7 + 1;
            } while (iVar9 < *(int *)(iVar16 + (int)piVar19));
          }
        }
      }
      piVar19 = piVar19 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_3[2] = 1;
  param_3[3] = 0;
  param_3[1] = local_58;
  *param_3 = iVar8;
  return (iVar6 - (int)pfVar25) + local_4c;
}


