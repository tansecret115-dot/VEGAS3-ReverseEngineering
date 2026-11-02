/* Module: mp3plug.dll
   Function: FUN_5f6fb600
   Address: 5f6fb600
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_5f6fb600(int *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  float fVar2;
  uint uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined4 *puVar16;
  undefined4 local_c0;
  undefined1 auStack_bc [8];
  float local_b4 [30];
  undefined1 local_3c [4];
  float local_38;
  int local_34;
  int local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  int local_1c;
  uint local_14;
  
  uVar14 = 0;
  local_34 = 0;
  do {
    uVar3 = param_1[1];
    local_30 = *param_1;
    iVar10 = 0;
    do {
      iVar13 = iVar10 * 4;
      iVar15 = (local_34 + 0x1f) - iVar10;
      iVar10 = iVar10 + 1;
      *(undefined4 *)(iVar13 + 4 + uVar3 * 4 + local_30) = *(undefined4 *)(param_2 + iVar15 * 8);
    } while (iVar10 < 0x11);
    iVar10 = local_30 + uVar3 * 4;
    iVar13 = local_30 + 0x3c + uVar3 * 4;
    puVar16 = (undefined4 *)(param_2 + local_34 * 8);
    local_1c = (iVar13 - iVar10 & 0xfffffff8U) + iVar10;
    for (; iVar10 < local_1c; iVar10 = iVar10 + 8) {
      *(undefined4 *)(iVar10 + 0x48) = *puVar16;
      puVar1 = puVar16 + 2;
      puVar16 = puVar16 + 4;
      *(undefined4 *)(iVar10 + 0x4c) = *puVar1;
    }
    for (; iVar10 < iVar13; iVar10 = iVar10 + 4) {
      uVar4 = *puVar16;
      puVar16 = puVar16 + 2;
      *(undefined4 *)(iVar10 + 0x48) = uVar4;
    }
    iVar10 = -0x800;
    uVar11 = uVar3;
    local_b4[0x10] = _DAT_5f75e560;
    fVar2 = _DAT_5f75e564;
    local_38 = _DAT_5f75e568;
    local_b4[1] = _DAT_5f75e56c;
    while( true ) {
      uVar12 = uVar11 + 0x20 & 0x1ff;
      local_38 = (*(float *)(&DAT_5f746d90 + iVar10) * *(float *)(local_30 + 0x40 + uVar12 * 4) -
                 *(float *)(local_30 + 0x80 + uVar12 * 4) * *(float *)(iVar10 + 0x5f746dd0)) +
                 local_38;
      local_b4[0x10] =
           *(float *)(local_30 + 4 + uVar12 * 4) * *(float *)(iVar10 + 0x5f746d54) +
           *(float *)(local_30 + 4 + uVar11 * 4) * *(float *)((int)&DAT_5f746cd4 + iVar10) +
           local_b4[0x10];
      local_b4[1] = *(float *)(local_30 + 0x40 + uVar11 * 4) * *(float *)(iVar10 + 0x5f746d10) +
                    *(float *)(local_30 + 0x80 + uVar11 * 4) * *(float *)(iVar10 + 0x5f746d50) +
                    local_b4[1];
      local_b4[0] = *(float *)(local_30 + 0x44 + uVar11 * 4) * *(float *)(iVar10 + 0x5f746d14);
      uVar11 = uVar12 + 0x20 & 0x1ff;
      iVar10 = iVar10 + 0x100;
      if (iVar10 == 0) break;
      fVar2 = local_b4[0] + fVar2;
    }
    local_b4[0] = local_b4[0] + fVar2;
    puVar16 = &local_c0;
    iVar10 = 1;
    do {
      uVar11 = iVar10 + uVar3;
      iVar13 = iVar10;
      fVar2 = _DAT_5f75e570;
      fVar5 = _DAT_5f75e574;
      fVar6 = _DAT_5f75e578;
      fVar7 = _DAT_5f75e57c;
      fVar8 = _DAT_5f75e57c;
      if (iVar10 < 0x200) {
        while( true ) {
          uVar12 = uVar11 + 0x20 & 0x1ff;
          fVar2 = ((float)(&DAT_5f746554)[iVar13] * *(float *)(local_30 + 4 + uVar12 * 4) -
                  *(float *)(local_30 + 0x44 + uVar12 * 4) * *(float *)(iVar13 * 4 + 0x5f746594)) +
                  fVar2;
          fVar6 = (*(float *)(local_30 + 8 + uVar12 * 4) * (float)(&DAT_5f746558)[iVar13] -
                  *(float *)(local_30 + 0x48 + uVar12 * 4) * (float)(&DAT_5f746598)[iVar13]) + fVar6
          ;
          fVar5 = *(float *)(local_30 + 4 + uVar11 * 4) * (float)(&DAT_5f7464d4)[iVar13] +
                  *(float *)(local_30 + 0x44 + uVar11 * 4) * (float)(&DAT_5f746514)[iVar13] + fVar5;
          fVar7 = *(float *)(local_30 + 8 + uVar11 * 4) * (float)(&DAT_5f7464d8)[iVar13] +
                  *(float *)(local_30 + 0x48 + uVar11 * 4) * (float)(&DAT_5f746518)[iVar13];
          uVar11 = uVar12 + 0x20 & 0x1ff;
          if (0x1ff < iVar13 + 0x40) break;
          iVar13 = iVar13 + 0x40;
          fVar8 = fVar7 + fVar8;
        }
        fVar7 = fVar7 + fVar8;
      }
      puVar16[0x11] = fVar7;
      puVar16[0x12] = fVar5;
      local_b4[iVar10 + 0x11] = fVar6;
      local_b4[iVar10 + 0x10] = fVar2;
      iVar10 = iVar10 + 2;
      puVar16 = puVar16 + -2;
    } while (iVar10 < 0xf);
    local_c0 = 0x5f6fb8a0;
    local_2c = local_34;
    local_34 = local_34 + 0x20;
    local_24 = uVar14;
    local_14 = uVar3;
    FUN_5f6fc0c0(uVar11,local_b4);
    iVar10 = 0x90;
    iVar13 = 0;
    puVar9 = auStack_bc;
    do {
      *(undefined4 *)(param_3 + iVar13 + (uVar14 + 0x12) * 4) = *(undefined4 *)(puVar9 + 8);
      if ((uVar14 & 1) == 0) {
        fVar2 = *(float *)(puVar9 + 0xc);
      }
      else {
        fVar2 = -*(float *)(puVar9 + 0xc);
      }
      iVar15 = iVar10 + (uVar14 + 0x12) * 4;
      puVar9 = puVar9 + 8;
      iVar13 = iVar13 + 0x120;
      iVar10 = iVar10 + 0x120;
      *(float *)(param_3 + iVar15) = fVar2;
    } while ((int)puVar9 < (int)local_3c);
    uVar14 = uVar14 + 1;
    param_1[1] = uVar3 - 0x20 & 0x1ff;
    local_28 = uVar3;
  } while (local_34 < 0x240);
  return 1;
}


