/* Module: vegas30.exe
   Function: FUN_005ab510
   Address: 005ab510
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_005ab510(int *param_1,int *param_2,int *param_3,int param_4,undefined4 param_5,
            undefined4 param_6,int *param_7)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  ushort uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  double *pdVar14;
  int iVar15;
  undefined1 *puVar16;
  uint local_238;
  int local_234;
  int local_22c;
  int local_228;
  int local_224;
  int local_220;
  int local_21c;
  int local_218;
  int local_20c;
  int aiStack_200 [16];
  int aiStack_1c0 [16];
  float afStack_180 [16];
  int aiStack_140 [16];
  int aiStack_100 [16];
  int aiStack_c0 [16];
  int aiStack_80 [16];
  int aiStack_40 [16];
  
  iVar15 = 0;
  local_234 = 0;
  if (param_4 == 0) {
    uVar7 = (uint)*(ushort *)((int)param_2 + 0xe) * param_2[1] + 0x1f;
    param_4 = (int)((uVar7 & 0xffffffe0) + ((int)uVar7 >> 0x1f & 7U)) >> 3;
  }
  if (param_3 != (int *)0x0) goto LAB_005ab596;
  if (param_2[4] == 0) {
    if (((param_2[8] != 0) || (uVar4 = *(ushort *)((int)param_2 + 0xe), uVar4 == 0)) || (8 < uVar4))
    goto LAB_005ab58c;
    iVar11 = 1 << ((byte)uVar4 & 0x1f);
  }
  else {
    if (param_2[4] == 3) {
      param_3 = param_2 + 0xd;
      goto LAB_005ab596;
    }
LAB_005ab58c:
    iVar11 = param_2[8];
  }
  param_3 = (int *)(*param_2 + iVar11 * 4 + (int)param_2);
LAB_005ab596:
  if (param_7 == (int *)0x0) {
    local_218 = param_2[1];
    iVar11 = param_2[2];
  }
  else {
    local_218 = *param_7;
    iVar11 = param_7[1];
  }
  iVar5 = param_2[2];
  if ((local_218 != param_1[0x96]) || (iVar11 != param_1[0x97])) {
    return 0x8000ffff;
  }
  FUN_005aaeb0(param_1,param_5,param_6);
  local_238 = param_1[0x90];
  if (0 < (int)local_238) {
    pdVar14 = (double *)(param_1 + 0x30);
    do {
      if (*pdVar14 != _DAT_00610fd8) {
        piVar6 = (int *)*param_1;
        uVar4 = *(ushort *)((int)piVar6 + 0xe);
        iVar9 = piVar6[4];
        iVar8 = piVar6[1];
        afStack_180[iVar15] = (float)*pdVar14;
        uVar7 = (uint)uVar4 * iVar8 + 0x1f;
        iVar8 = (int)((uVar7 & 0xffffffe0) + ((int)uVar7 >> 0x1f & 7U)) >> 3;
        aiStack_140[iVar15] = iVar8;
        if (iVar9 == 0) {
          if (((piVar6[8] != 0) || (uVar4 = *(ushort *)((int)piVar6 + 0xe), uVar4 == 0)) ||
             (8 < uVar4)) goto LAB_005ab698;
          iVar9 = 1 << ((byte)uVar4 & 0x1f);
LAB_005ab69b:
          piVar10 = (int *)(*piVar6 + iVar9 * 4 + (int)piVar6);
        }
        else {
          if (iVar9 != 3) {
LAB_005ab698:
            iVar9 = piVar6[8];
            goto LAB_005ab69b;
          }
          piVar10 = piVar6 + 0xd;
        }
        aiStack_c0[iVar15] = (int)((piVar6[2] + -1) * iVar8 + (int)piVar10);
        aiStack_140[iVar15] = -iVar8;
        iVar15 = iVar15 + 1;
      }
      pdVar14 = pdVar14 + 1;
      param_1 = param_1 + 1;
      local_238 = local_238 + -1;
      local_234 = iVar15;
    } while (local_238 != 0);
  }
  iVar15 = _SfGetPixelType_4(param_2);
  if (iVar15 != 0x20) {
    iVar15 = 0;
    if (0 < local_234) {
      do {
        iVar9 = ftol();
        aiStack_1c0[iVar15] = iVar9;
        iVar9 = ftol();
        aiStack_100[iVar15] = iVar9;
        iVar9 = ftol();
        aiStack_200[iVar15] = iVar9;
        iVar15 = iVar15 + 1;
      } while (iVar15 < local_234);
    }
    local_238 = 0;
    if (0 < iVar11) {
      do {
        iVar15 = 0;
        if (0 < local_234) {
          do {
            iVar9 = aiStack_140[iVar15];
            iVar8 = aiStack_c0[iVar15];
            afStack_180[iVar15] = (float)(iVar9 * local_238 + iVar8);
            if ((aiStack_100[iVar15] != 0) || (aiStack_200[iVar15] != 0)) {
              aiStack_40[iVar15] = iVar9 * (((int)(local_238 - 1) < 0) - 1 & local_238 - 1) + iVar8;
              iVar13 = local_238 + 1;
              if (iVar11 + -1 < (int)(local_238 + 1)) {
                iVar13 = iVar11 + -1;
              }
              aiStack_80[iVar15] = iVar9 * iVar13 + iVar8;
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 < local_234);
        }
        local_20c = 0;
        if (0 < local_218) {
          puVar16 = (undefined1 *)((int)param_3 + local_238 * -param_4 + (iVar5 + -1) * param_4 + 2)
          ;
          do {
            iVar15 = 0;
            local_21c = 0;
            local_22c = 0;
            local_228 = 0;
            local_224 = 0;
            if (0 < local_234) {
              do {
                local_220 = aiStack_100[iVar15];
                if ((local_220 == 0) && (aiStack_200[iVar15] == 0)) {
                  iVar9 = aiStack_1c0[iVar15];
                  pbVar1 = (byte *)((int)afStack_180[iVar15] + local_20c * 4);
                  iVar12 = (uint)*pbVar1 * iVar9;
                  iVar8 = (uint)pbVar1[1] * iVar9;
                  iVar13 = (uint)pbVar1[2] * iVar9;
                  iVar9 = (uint)pbVar1[3] * iVar9;
                }
                else {
                  if ((local_238 & 1) == 0) {
                    iVar9 = local_220;
                    local_220 = aiStack_200[iVar15];
                  }
                  else {
                    iVar9 = aiStack_200[iVar15];
                  }
                  pbVar1 = (byte *)(aiStack_80[iVar15] + local_20c * 4);
                  pbVar2 = (byte *)(aiStack_40[iVar15] + local_20c * 4);
                  pbVar3 = (byte *)((int)afStack_180[iVar15] + local_20c * 4);
                  iVar8 = (int)(((uint)*pbVar1 + (uint)*pbVar2) * local_220) / 2 +
                          (uint)*pbVar3 * iVar9;
                  iVar12 = ((int)(iVar8 + (iVar8 >> 0x1f & 0x3fffU)) >> 0xe) * aiStack_1c0[iVar15];
                  iVar8 = (int)(((uint)pbVar2[1] + (uint)pbVar1[1]) * local_220) / 2 +
                          (uint)pbVar3[1] * iVar9;
                  iVar8 = ((int)(iVar8 + (iVar8 >> 0x1f & 0x3fffU)) >> 0xe) * aiStack_1c0[iVar15];
                  iVar13 = (int)(((uint)pbVar2[2] + (uint)pbVar1[2]) * local_220) / 2 +
                           (uint)pbVar3[2] * iVar9;
                  iVar13 = ((int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe) * aiStack_1c0[iVar15]
                  ;
                  iVar9 = (int)(((uint)pbVar2[3] + (uint)pbVar1[3]) * local_220) / 2 +
                          (uint)pbVar3[3] * iVar9;
                  iVar9 = ((int)(iVar9 + (iVar9 >> 0x1f & 0x3fffU)) >> 0xe) * aiStack_1c0[iVar15];
                }
                local_21c = local_21c + iVar12;
                local_224 = local_224 + iVar9;
                local_228 = local_228 + iVar13;
                local_22c = local_22c + iVar8;
                iVar15 = iVar15 + 1;
              } while (iVar15 < local_234);
            }
            puVar16[-2] = (char)((int)(local_21c + 0x2000 + (local_21c + 0x2000 >> 0x1f & 0x3fffU))
                                >> 0xe);
            puVar16[-1] = (char)((int)(local_22c + 0x2000 + (local_22c + 0x2000 >> 0x1f & 0x3fffU))
                                >> 0xe);
            *puVar16 = (char)((int)(local_228 + 0x2000 + (local_228 + 0x2000 >> 0x1f & 0x3fffU)) >>
                             0xe);
            puVar16[1] = (char)((int)(local_224 + 0x2000 + (local_224 + 0x2000 >> 0x1f & 0x3fffU))
                               >> 0xe);
            local_20c = local_20c + 1;
            puVar16 = puVar16 + 4;
          } while (local_20c < local_218);
        }
        local_238 = local_238 + 1;
      } while ((int)local_238 < iVar11);
    }
  }
  return 0;
}


