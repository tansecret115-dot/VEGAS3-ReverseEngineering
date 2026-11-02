/* Module: oggplug.dll
   Function: FUN_00438e50
   Address: 00438e50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __cdecl FUN_00438e50(int *param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  float *pfVar6;
  int iVar7;
  float fVar8;
  float *pfVar9;
  float *pfVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int *piVar13;
  int iVar14;
  float *pfVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int *piVar19;
  int *piVar20;
  int iVar21;
  float10 fVar22;
  float10 fVar23;
  int local_4c;
  uint local_48;
  int local_40;
  int *local_3c;
  int *local_34;
  float local_28;
  float *local_24;
  int local_20;
  float *local_1c;
  int local_8;
  
  local_1c = (float *)&stack0xffffff90;
  iVar2 = param_1[0x1a];
  iVar3 = *(int *)(param_1[0x10] + 4);
  iVar17 = *(int *)(param_1[0x10] + 0x68);
  piVar4 = (int *)param_2[4];
  uVar5 = param_1[9];
  iVar18 = *(int *)(*(int *)(iVar17 + 4 + (param_1[8] + (param_1[6] + param_1[7] * 2) * 2) * 4) +
                   *(int *)(param_2[3] + 4) * 4);
  FUN_00444a80();
  pfVar9 = (float *)FUN_00430ed0((int)param_1,uVar5 * 4);
  local_28 = *(float *)(iVar2 + 4);
  iVar14 = *(int *)(iVar3 + 4);
  FUN_00444a80();
  if (((param_1[7] == 0) || (param_1[6] == 0)) || (local_20 = 1, param_1[8] == 0)) {
    local_20 = 0;
  }
  local_8 = 0;
  if (0 < iVar14) {
    fVar1 = _DAT_0044d7c8 / (float)(int)uVar5;
    do {
      pfVar6 = *(float **)(*param_1 + local_8 * 4);
      if (0 < (int)uVar5) {
        pfVar10 = pfVar6;
        local_48 = uVar5;
        do {
          fVar8 = *(float *)((iVar18 - (int)pfVar6) + (int)pfVar10) * *pfVar10;
          *pfVar10 = fVar8;
          *(float *)((int)pfVar9 + (-4 - (int)pfVar6) + (int)(pfVar10 + 1)) = fVar8;
          local_48 = local_48 - 1;
          pfVar10 = pfVar10 + 1;
        } while (local_48 != 0);
      }
      FUN_00437fb0((int *)**(undefined4 **)(iVar17 + 0x24 + param_1[7] * 4),(int)pfVar6,pfVar6);
      FUN_0043db70(param_2,pfVar9);
      fVar22 = (float10)fVar1 * (float10)*pfVar9;
      fVar23 = (float10)_DAT_0044d6f0;
      *pfVar9 = (float)fVar22;
      if (fVar22 == fVar23) {
        fVar23 = (float10)_DAT_0044d7b8;
      }
      else {
        fVar23 = (float10)log2(fVar22 * fVar22);
        fVar23 = (float10)0.6931471805599453 * fVar23 * (float10)_DAT_0044d6c0;
      }
      pfVar6[(int)uVar5 / 2] = (float)fVar23;
      *local_1c = (float)fVar23;
      iVar14 = 1;
      if (1 < (int)(uVar5 - 1)) {
        pfVar10 = pfVar9 + 1;
        do {
          fVar23 = SQRT((float10)*pfVar10 * (float10)*pfVar10 +
                        (float10)pfVar10[1] * (float10)pfVar10[1]) * (float10)fVar1;
          if (fVar23 == (float10)_DAT_0044d6f0) {
            fVar23 = (float10)_DAT_0044d7b8;
          }
          else {
            fVar23 = (float10)log2(fVar23 * fVar23);
            fVar23 = (float10)0.6931471805599453 * fVar23 * (float10)_DAT_0044d6c0;
          }
          (pfVar6 + (int)uVar5 / 2)[iVar14 + 1 >> 1] = (float)fVar23;
          if ((float10)*local_1c < fVar23) {
            *local_1c = (float)fVar23;
          }
          iVar14 = iVar14 + 2;
          pfVar10 = pfVar10 + 2;
        } while (iVar14 < (int)(uVar5 - 1));
      }
      if (local_28 < *local_1c) {
        local_28 = *local_1c;
      }
      FUN_00432360();
      local_8 = local_8 + 1;
      local_1c = local_1c + 1;
    } while (local_8 < *(int *)(iVar3 + 4));
  }
  local_24 = (float *)&stack0xffffff90;
  iVar18 = 0;
  if (0 < *(int *)(iVar3 + 4)) {
    iVar21 = (int)uVar5 / 2;
    iVar14 = -(int)local_24;
    local_34 = piVar4;
    do {
      local_34 = local_34 + 1;
      iVar7 = *local_34;
      pfVar10 = *(float **)(*param_1 + iVar18 * 4);
      pfVar6 = pfVar10 + iVar21;
      if (0 < iVar21) {
        pfVar15 = pfVar10;
        local_48 = iVar21;
        do {
          if (*pfVar15 == _DAT_0044d6f0) {
            fVar23 = (float10)_DAT_0044d7b8;
          }
          else {
            fVar23 = (float10)log2((float10)*pfVar15 * (float10)*pfVar15);
            fVar23 = (float10)0.6931471805599453 * fVar23 * (float10)_DAT_0044d6c0;
          }
          *(float *)(((int)pfVar9 - (int)pfVar10) + (int)pfVar15) = (float)fVar23;
          pfVar15 = pfVar15 + 1;
          local_48 = local_48 + -1;
        } while (local_48 != 0);
      }
      FUN_00432360();
      FUN_00433a40((int *)param_2[local_20 + 8],*(undefined4 *)(iVar17 + 0x30),iVar18,pfVar6,
                   (int)pfVar9,pfVar9 + iVar21,local_28,*local_24);
      FUN_00432360();
      uVar11 = (**(code **)(*(int *)(param_2[0xb] + iVar7 * 4) + 0x18))
                         (param_1,*(undefined4 *)(param_2[6] + iVar7 * 4),pfVar10,pfVar9,
                          pfVar9 + iVar21,pfVar6,pfVar6);
      *(undefined4 *)(&stack0xffffff90 + iVar14 + (int)local_24) = uVar11;
      FUN_00432360();
      FUN_004339f0((int *)param_2[local_20 + 8],*(undefined4 *)(iVar17 + 0x30),pfVar9,pfVar10,
                   (int)pfVar6,(int)pfVar10);
      FUN_00432360();
      FUN_00432360();
      local_24 = local_24 + 1;
      iVar18 = iVar18 + 1;
    } while (iVar18 < *(int *)(iVar3 + 4));
  }
  piVar19 = (int *)&stack0xffffff90;
  piVar13 = (int *)&stack0xffffff90;
  piVar20 = (int *)&stack0xffffff90;
  *(float *)(iVar2 + 4) = local_28;
  iVar2 = *param_1;
  iVar17 = *(int *)(iVar3 + 4);
  FUN_00444a80();
  FUN_00444a80();
  FUN_00444a80();
  FUN_00444a80();
  FUN_00444a80();
  FUN_00444a80();
  FUN_00444a80();
  local_40 = 0;
  local_8 = 0;
  iVar18 = *(int *)(*(int *)(param_2[local_20 + 8] + 4) + 0xcc);
  if (0 < iVar17) {
    iVar17 = ((int)uVar5 / 2) * 4;
    do {
      *piVar19 = *(int *)((iVar2 - (int)&stack0xffffff90) + (int)piVar19) + iVar17;
      puVar12 = (undefined4 *)FUN_00430ed0((int)param_1,iVar17);
      *piVar19 = (int)puVar12;
      for (uVar16 = (uVar5 & 0x3fffffff) >> 1; uVar16 != 0; uVar16 = uVar16 - 1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      piVar19 = piVar19 + 1;
      for (iVar14 = (uVar5 & 1) << 1; iVar14 != 0; iVar14 = iVar14 + -1) {
        *(undefined1 *)puVar12 = 0;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(iVar3 + 4));
  }
  FUN_00444a80();
  FUN_00444a80();
  FUN_00444a80();
  if (piVar4[0x133] == 0) {
    local_8 = 0;
    if (0 < *(int *)(iVar3 + 4)) {
      do {
        puVar12 = (undefined4 *)*piVar13;
        if (0 < (int)uVar5 / 2) {
          iVar14 = *(int *)((int)piVar13 + (iVar2 - (int)&stack0xffffff90)) - (int)puVar12;
          iVar17 = (int)uVar5 / 2;
          do {
            *puVar12 = *(undefined4 *)(iVar14 + (int)puVar12);
            puVar12 = puVar12 + 1;
            iVar17 = iVar17 + -1;
          } while (iVar17 != 0);
        }
        local_8 = local_8 + 1;
        piVar13 = piVar13 + 1;
      } while (local_8 < *(int *)(iVar3 + 4));
    }
  }
  else {
    FUN_00434c80((int *)param_2[local_20 + 8],(int)piVar4,iVar2,(int)&stack0xffffff90,
                 (int)&stack0xffffff90,(int)&stack0xffffff90,0);
  }
  iVar17 = 0;
  if (0 < *(int *)(iVar3 + 4)) {
    do {
      FUN_00432360();
      iVar17 = iVar17 + 1;
    } while (iVar17 < *(int *)(iVar3 + 4));
  }
  local_8 = 0;
  if (0 < *piVar4) {
    do {
      iVar14 = local_40 * 4;
      iVar17 = 0;
      local_4c = 0;
      *piVar20 = (int)(&stack0xffffff90 + iVar14);
      *piVar20 = (int)(&stack0xffffff90 + iVar14);
      *piVar20 = (int)(&stack0xffffff90 + iVar14);
      piVar13 = (int *)&stack0xffffff90;
      local_3c = piVar4;
      if (0 < *(int *)(iVar3 + 4)) {
        do {
          local_3c = local_3c + 1;
          if (*local_3c == local_8) {
            if (*piVar13 == 0) {
              *(undefined4 *)(*piVar20 + iVar17 * 4) = 0;
            }
            else {
              *(undefined4 *)(*piVar20 + iVar17 * 4) = 1;
            }
            iVar17 = iVar17 + 1;
            *(int *)(*piVar20 + -4 + iVar17 * 4) = *piVar13;
            *(int *)(*piVar20 + -4 + iVar17 * 4) = *piVar13;
          }
          local_4c = local_4c + 1;
          piVar13 = piVar13 + 1;
        } while (local_4c < *(int *)(iVar3 + 4));
      }
      *piVar20 = iVar17;
      local_40 = local_40 + iVar17;
      iVar17 = (**(code **)(*(int *)(param_2[0xc] + local_8 * 4) + 0x18))
                         (param_1,*(undefined4 *)(param_2[7] + local_8 * 4),*piVar20,*piVar20,iVar17
                         );
      local_8 = local_8 + 1;
      *piVar20 = iVar17;
      piVar20 = piVar20 + 1;
    } while (local_8 < *piVar4);
  }
  local_8 = 0;
  while( true ) {
    iVar17 = 0;
    puVar12 = (undefined4 *)&stack0xffffff90;
    if (0 < *piVar4) {
      do {
        (**(code **)(*(int *)(param_2[0xc] + iVar17 * 4) + 0x1c))
                  (param_1,*(undefined4 *)(param_2[7] + iVar17 * 4),*puVar12,*puVar12,*puVar12,
                   *puVar12,local_8,*puVar12);
        iVar17 = iVar17 + 1;
        puVar12 = puVar12 + 1;
      } while (iVar17 < *piVar4);
    }
    local_8 = local_8 + 1;
    if (iVar18 <= local_8) break;
    if (piVar4[0x133] == 0) {
      local_8 = 0;
      if (0 < *(int *)(iVar3 + 4)) {
        piVar13 = (int *)&stack0xffffff90;
        do {
          pfVar9 = (float *)*piVar13;
          if (0 < (int)uVar5 / 2) {
            iVar14 = *(int *)((iVar2 - (int)&stack0xffffff90) + (int)piVar13) - (int)pfVar9;
            iVar21 = *piVar13 - (int)pfVar9;
            iVar17 = (int)uVar5 / 2;
            do {
              pfVar6 = (float *)(iVar14 + (int)pfVar9);
              fVar1 = *pfVar9;
              pfVar9 = pfVar9 + 1;
              iVar17 = iVar17 + -1;
              *(float *)(iVar21 + -4 + (int)pfVar9) = *pfVar6 - fVar1;
            } while (iVar17 != 0);
          }
          local_8 = local_8 + 1;
          piVar13 = piVar13 + 1;
        } while (local_8 < *(int *)(iVar3 + 4));
      }
    }
    else {
      FUN_00434c80((int *)param_2[local_20 + 8],(int)piVar4,iVar2,(int)&stack0xffffff90,
                   (int)&stack0xffffff90,(int)&stack0xffffff90,local_8);
    }
  }
  DAT_00516390 = DAT_00516390 + *(int *)(iVar3 + 4);
  param_2[0xe] = param_1[0xe];
  return 0;
}


