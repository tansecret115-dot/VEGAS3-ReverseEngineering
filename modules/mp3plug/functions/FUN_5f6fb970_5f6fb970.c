/* Module: mp3plug.dll
   Function: FUN_5f6fb970
   Address: 5f6fb970
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_5f6fb970(int *param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 extraout_ECX;
  int iVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auStack_1a4 [8];
  float local_19c [30];
  undefined1 local_124 [4];
  float local_120;
  float local_11c [32];
  int local_9c;
  double local_94;
  double local_8c;
  double local_84;
  double local_7c;
  double local_74;
  double local_6c;
  int local_64;
  uint local_60;
  uint local_5c;
  double local_54;
  double local_2c;
  int local_24;
  int *local_1c;
  int local_18;
  uint local_14;
  
  local_60 = 0;
  local_64 = 0;
  do {
    local_9c = *param_1;
    uVar4 = param_1[1];
    iVar15 = local_9c + uVar4 * 8;
    iVar13 = 0;
    do {
      iVar10 = (local_64 + 0x1f) - iVar13;
      iVar13 = iVar13 + 1;
      *(undefined4 *)(iVar15 + 4) = *(undefined4 *)(param_2 + iVar10 * 8);
      *(undefined4 *)(iVar15 + 8) = *(undefined4 *)(param_2 + 4 + iVar10 * 8);
      iVar15 = iVar15 + 8;
    } while (iVar13 < 0x11);
    iVar15 = local_9c + uVar4 * 8;
    puVar14 = (undefined4 *)(param_2 + local_64 * 8);
    iVar13 = local_9c + 0x78 + uVar4 * 8;
    local_1c = param_1;
    local_24 = (iVar13 - iVar15 & 0xfffffff0U) + iVar15;
    for (; iVar15 < local_24; iVar15 = iVar15 + 0x10) {
      *(undefined4 *)(iVar15 + 0x8c) = *puVar14;
      *(undefined4 *)(iVar15 + 0x90) = puVar14[1];
      *(undefined4 *)(iVar15 + 0x94) = puVar14[2];
      puVar1 = puVar14 + 3;
      puVar14 = puVar14 + 4;
      *(undefined4 *)(iVar15 + 0x98) = *puVar1;
    }
    for (; iVar15 < iVar13; iVar15 = iVar15 + 8) {
      *(undefined4 *)(iVar15 + 0x8c) = *puVar14;
      puVar1 = puVar14 + 1;
      puVar14 = puVar14 + 2;
      *(undefined4 *)(iVar15 + 0x90) = *puVar1;
    }
    iVar15 = -0x800;
    uVar11 = uVar4;
    fVar3 = _DAT_5f75e590;
    local_19c[0x10] = _DAT_5f75e584;
    local_19c[1] = _DAT_5f75e580;
    local_19c[0] = _DAT_5f75e588;
    local_11c[1] = _DAT_5f75e58c;
    fVar6 = _DAT_5f75e594;
    while( true ) {
      local_19c[0x10] =
           *(float *)(local_9c + 4 + uVar11 * 8) * *(float *)((int)&DAT_5f746cd4 + iVar15) +
           local_19c[0x10];
      fVar3 = *(float *)((int)&DAT_5f746cd4 + iVar15) * *(float *)(local_9c + 8 + uVar11 * 8) +
              fVar3;
      local_19c[1] = *(float *)(local_9c + 0x7c + uVar11 * 8) * *(float *)(iVar15 + 0x5f746d10) +
                     *(float *)(local_9c + 0xfc + uVar11 * 8) * *(float *)(iVar15 + 0x5f746d50) +
                     local_19c[1];
      local_11c[1] = *(float *)(iVar15 + 0x5f746d10) * *(float *)(local_9c + 0x80 + uVar11 * 8) +
                     *(float *)(iVar15 + 0x5f746d50) * *(float *)(local_9c + 0x100 + uVar11 * 8) +
                     local_11c[1];
      local_19c[0] = *(float *)(local_9c + 0x84 + uVar11 * 8) * *(float *)(iVar15 + 0x5f746d14) +
                     local_19c[0];
      local_11c[0] = *(float *)(iVar15 + 0x5f746d14) * *(float *)(local_9c + 0x88 + uVar11 * 8);
      uVar11 = ((int)(uVar11 * 2) >> 1) + 0x40U & 0x1ff;
      iVar15 = iVar15 + 0x100;
      if (iVar15 == 0) break;
      fVar6 = local_11c[0] + fVar6;
    }
    local_11c[0] = local_11c[0] + fVar6;
    uVar11 = uVar4 + 0x20;
    iVar15 = -0x800;
    local_11c[0x1f] = _DAT_5f75e598;
    local_120 = _DAT_5f75e59c;
    while( true ) {
      uVar17 = uVar11 & 0x1ff;
      uVar16 = ((int)(uVar17 * 2) >> 1) + 0x40U & 0x1ff;
      local_120 = (*(float *)(iVar15 + 0x5f746e90) * *(float *)(local_9c + 0x7c + uVar16 * 8) -
                  *(float *)(iVar15 + 0x5f746ed0) * *(float *)(local_9c + 0xfc + uVar16 * 8)) +
                  (*(float *)(local_9c + 0x7c + uVar17 * 8) * *(float *)(&DAT_5f746d90 + iVar15) -
                  *(float *)(local_9c + 0xfc + uVar17 * 8) * *(float *)(iVar15 + 0x5f746dd0)) +
                  local_120;
      local_11c[0x1f] =
           (*(float *)(iVar15 + 0x5f746e90) * *(float *)(local_9c + 0x80 + uVar16 * 8) -
           *(float *)(iVar15 + 0x5f746ed0) * *(float *)(local_9c + 0x100 + uVar16 * 8)) +
           (*(float *)(&DAT_5f746d90 + iVar15) * *(float *)(local_9c + 0x80 + uVar17 * 8) -
           *(float *)(iVar15 + 0x5f746dd0) * *(float *)(local_9c + 0x100 + uVar17 * 8)) +
           local_11c[0x1f];
      uVar11 = ((int)(uVar16 * 2) >> 1) + 0x40;
      local_19c[0x10] =
           *(float *)(local_9c + 4 + uVar16 * 8) * *(float *)(iVar15 + 0x5f746e54) +
           *(float *)(local_9c + 4 + uVar17 * 8) * *(float *)(iVar15 + 0x5f746d54) + local_19c[0x10]
      ;
      local_11c[0x10] = *(float *)(iVar15 + 0x5f746e54) * *(float *)(local_9c + 8 + uVar16 * 8);
      fVar3 = *(float *)(iVar15 + 0x5f746d54) * *(float *)(local_9c + 8 + uVar17 * 8) + fVar3;
      iVar15 = iVar15 + 0x200;
      if (iVar15 == 0) break;
      fVar3 = local_11c[0x10] + fVar3;
    }
    local_11c[0x10] = local_11c[0x10] + fVar3;
    local_6c = (double)local_19c[0x10];
    local_74 = (double)local_11c[0x10];
    local_2c = (double)local_120;
    local_54 = (double)local_11c[0x1f];
    uVar11 = uVar4 + 1;
    uVar17 = uVar4 + 0x21;
    iVar15 = 1;
    iVar13 = -4;
    do {
      iVar10 = iVar15;
      uVar16 = uVar11;
      fVar3 = _DAT_5f75e5a0;
      fVar6 = _DAT_5f75e5a4;
      fVar7 = _DAT_5f75e5a8;
      fVar8 = _DAT_5f75e5a8;
      fVar9 = _DAT_5f75e5ac;
      if (iVar15 < 0x200) {
        while( true ) {
          fVar6 = *(float *)(local_9c + 4 + uVar16 * 8) * (float)(&DAT_5f7464d4)[iVar10] +
                  *(float *)(local_9c + 0x84 + uVar16 * 8) * (float)(&DAT_5f746514)[iVar10] + fVar6;
          fVar9 = (float)(&DAT_5f7464d4)[iVar10] * *(float *)(local_9c + 8 + uVar16 * 8) +
                  (float)(&DAT_5f746514)[iVar10] * *(float *)(local_9c + 0x88 + uVar16 * 8) + fVar9;
          fVar3 = *(float *)(local_9c + 0xc + uVar16 * 8) * (float)(&DAT_5f7464d8)[iVar10] +
                  *(float *)(local_9c + 0x8c + uVar16 * 8) * (float)(&DAT_5f746518)[iVar10] + fVar3;
          fVar8 = (float)(&DAT_5f7464d8)[iVar10] * *(float *)(local_9c + 0x10 + uVar16 * 8) +
                  (float)(&DAT_5f746518)[iVar10] * *(float *)(local_9c + 0x90 + uVar16 * 8);
          if (0x1ff < iVar10 + 0x40) break;
          iVar10 = iVar10 + 0x40;
          uVar16 = ((int)(uVar16 * 2) >> 1) + 0x40U & 0x1ff;
          fVar7 = fVar8 + fVar7;
        }
        fVar8 = fVar8 + fVar7;
      }
      *(float *)((int)local_19c + iVar13 + 0x40) = fVar6;
      *(float *)((int)local_19c + iVar13 + 0x3c) = fVar3;
      *(float *)((int)local_11c + iVar13 + 0x40) = fVar9;
      *(float *)((int)local_11c + iVar13 + 0x3c) = fVar8;
      local_94 = (double)_DAT_5f75e5b8;
      local_8c = (double)_DAT_5f75e5b0;
      local_7c = (double)_DAT_5f75e5b4;
      local_84 = (double)_DAT_5f75e5bc;
      iVar10 = iVar15;
      uVar16 = uVar17;
      if (iVar15 < 0x200) {
        while( true ) {
          uVar16 = uVar16 & 0x1ff;
          local_7c = ((double)*(float *)(local_9c + 4 + uVar16 * 8) *
                      (double)(float)(&DAT_5f746554)[iVar10] -
                     (double)*(float *)(local_9c + 0x84 + uVar16 * 8) *
                     (double)*(float *)(iVar10 * 4 + 0x5f746594)) + local_7c;
          local_84 = ((double)(float)(&DAT_5f746554)[iVar10] *
                      (double)*(float *)(local_9c + 8 + uVar16 * 8) -
                     (double)*(float *)(iVar10 * 4 + 0x5f746594) *
                     (double)*(float *)(local_9c + 0x88 + uVar16 * 8)) + local_84;
          local_8c = ((double)*(float *)(local_9c + 0xc + uVar16 * 8) *
                      (double)(float)(&DAT_5f746558)[iVar10] -
                     (double)*(float *)(local_9c + 0x8c + uVar16 * 8) *
                     (double)(float)(&DAT_5f746598)[iVar10]) + local_8c;
          dVar5 = (double)(float)(&DAT_5f746558)[iVar10] *
                  (double)*(float *)(local_9c + 0x10 + uVar16 * 8) -
                  (double)(float)(&DAT_5f746598)[iVar10] *
                  (double)*(float *)(local_9c + 0x90 + uVar16 * 8);
          iVar10 = iVar10 + 0x40;
          if (0x1ff < iVar10) break;
          local_94 = dVar5 + local_94;
          uVar16 = ((int)(uVar16 * 2) >> 1) + 0x40;
        }
        local_94 = dVar5 + local_94;
      }
      local_19c[iVar15 + 0x10] = (float)local_7c;
      local_19c[iVar15 + 0x11] = (float)local_8c;
      local_11c[iVar15 + 0x10] = (float)local_84;
      local_11c[iVar15 + 0x11] = (float)local_94;
      iVar15 = iVar15 + 2;
      uVar11 = uVar11 + 2;
      uVar17 = uVar17 + 2;
      iVar13 = iVar13 + -8;
    } while (iVar15 < 0xf);
    local_64 = local_64 + 0x20;
    local_5c = uVar4;
    FUN_5f6fc0c0(iVar10,local_19c);
    FUN_5f6fc0c0(extraout_ECX,local_11c);
    local_9c = local_60 + 0x12;
    local_14 = local_60 & 1;
    iVar15 = 0x90;
    iVar13 = 0;
    puVar12 = auStack_1a4;
    do {
      iVar10 = iVar13 + local_9c * 4;
      *(undefined4 *)(param_3 + iVar10) = *(undefined4 *)(puVar12 + 8);
      if (local_14 == 0) {
        fVar3 = *(float *)(puVar12 + 0xc);
      }
      else {
        fVar3 = -*(float *)(puVar12 + 0xc);
      }
      iVar2 = iVar15 + local_9c * 4;
      *(float *)(param_3 + iVar2) = fVar3;
      *(undefined4 *)(param_4 + iVar10) = *(undefined4 *)(puVar12 + 0x88);
      if (local_14 == 0) {
        fVar3 = *(float *)(puVar12 + 0x8c);
      }
      else {
        fVar3 = -*(float *)(puVar12 + 0x8c);
      }
      puVar12 = puVar12 + 8;
      iVar13 = iVar13 + 0x120;
      iVar15 = iVar15 + 0x120;
      *(float *)(param_4 + iVar2) = fVar3;
    } while ((int)puVar12 < (int)local_124);
    local_60 = local_60 + 1;
    param_1[1] = uVar4 - 0x20 & 0x1ff;
    local_18 = param_3;
  } while (local_64 < 0x240);
  return 1;
}


