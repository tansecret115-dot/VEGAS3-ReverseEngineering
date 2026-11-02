/* Module: mp3plug.dll
   Function: FUN_5f706450
   Address: 5f706450
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_5f706450(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 local_a8 [3];
  float local_9c;
  float local_98;
  float local_64 [18];
  int local_1c;
  int local_18;
  int local_14;
  
  local_1c = 0;
  do {
    iVar1 = local_1c + 0x20;
    uVar2 = *(uint *)(param_1 + 0x800);
    iVar11 = 0;
    do {
      iVar9 = iVar11 + uVar2 * 4;
      iVar8 = (local_1c + 0x1f) * 4 - iVar11;
      iVar11 = iVar11 + 4;
      *(undefined4 *)(iVar9 + param_1) = *(undefined4 *)(param_2 + iVar8);
    } while (iVar11 < 0x41);
    iVar11 = 0;
    do {
      iVar9 = uVar2 + 1 + iVar11;
      iVar8 = iVar11 * 4;
      iVar11 = iVar11 + 1;
      *(undefined4 *)(param_1 + 0x40 + iVar9 * 4) = *(undefined4 *)(param_2 + iVar8 + local_1c * 4);
    } while (iVar11 < 0xf);
    iVar11 = -0x800;
    uVar12 = uVar2;
    local_64[2] = _DAT_5f760644;
    fVar3 = _DAT_5f760648;
    local_64[0x11] = _DAT_5f76064c;
    local_98 = _DAT_5f760650;
    while( true ) {
      uVar10 = uVar12 + 0x20 & 0x1ff;
      local_64[0x11] =
           (*(float *)(iVar11 + 0x5f74b5dc) * *(float *)(param_1 + 0x3c + uVar10 * 4) -
           *(float *)(param_1 + 0x7c + uVar10 * 4) * *(float *)(&DAT_5f74b61c + iVar11)) +
           local_64[0x11];
      local_64[2] = *(float *)(param_1 + uVar10 * 4) * *(float *)(iVar11 + 0x5f74b5a0) +
                    *(float *)(param_1 + uVar12 * 4) * *(float *)(iVar11 + 0x5f74b520) + local_64[2]
      ;
      local_98 = *(float *)(param_1 + 0x3c + uVar12 * 4) * *(float *)(iVar11 + 0x5f74b55c) +
                 *(float *)(param_1 + 0x7c + uVar12 * 4) * *(float *)(iVar11 + 0x5f74b59c) +
                 local_98;
      local_9c = *(float *)(param_1 + 0x40 + uVar12 * 4) * *(float *)(iVar11 + 0x5f74b560);
      uVar12 = uVar10 + 0x20 & 0x1ff;
      iVar11 = iVar11 + 0x100;
      if (iVar11 == 0) break;
      fVar3 = local_9c + fVar3;
    }
    local_9c = local_9c + fVar3;
    iVar11 = 1;
    puVar13 = local_a8;
    do {
      uVar12 = iVar11 + uVar2;
      iVar9 = iVar11;
      fVar3 = _DAT_5f760654;
      fVar4 = _DAT_5f760658;
      fVar5 = _DAT_5f76065c;
      fVar6 = _DAT_5f76065c;
      fVar7 = _DAT_5f760660;
      if (iVar11 < 0x200) {
        while( true ) {
          uVar12 = uVar12 + 0x20;
          uVar10 = uVar12 & 0x1ff;
          fVar4 = ((float)(&DAT_5f74ada0)[iVar9] * *(float *)(param_1 + uVar10 * 4) -
                  *(float *)(iVar9 * 4 + 0x5f74ade0) * *(float *)(param_1 + 0x40 + uVar10 * 4)) +
                  fVar4;
          fVar7 = ((float)(&DAT_5f74ada4)[iVar9] * *(float *)(param_1 + 4 + uVar10 * 4) -
                  (float)(&DAT_5f74ade4)[iVar9] * *(float *)(param_1 + 0x44 + uVar10 * 4)) + fVar7;
          fVar3 = *(float *)(param_1 + -0x80 + uVar12 * 4) * (float)(&DAT_5f74ad20)[iVar9] +
                  *(float *)(param_1 + -0x40 + uVar12 * 4) * (float)(&DAT_5f74ad60)[iVar9] + fVar3;
          fVar6 = *(float *)(param_1 + -0x7c + uVar12 * 4) * (float)(&DAT_5f74ad24)[iVar9] +
                  *(float *)(param_1 + -0x3c + uVar12 * 4) * (float)(&DAT_5f74ad64)[iVar9];
          uVar12 = uVar10 + 0x20 & 0x1ff;
          if (0x1ff < iVar9 + 0x40) break;
          iVar9 = iVar9 + 0x40;
          fVar5 = fVar6 + fVar5;
        }
        fVar6 = fVar6 + fVar5;
        local_14 = iVar1;
      }
      puVar13[0x11] = fVar6;
      puVar13[0x12] = fVar3;
      local_64[iVar11 + 2] = fVar4;
      local_64[iVar11 + 3] = fVar7;
      iVar11 = iVar11 + 2;
      puVar13 = puVar13 + -2;
    } while (iVar11 < 0xf);
    local_a8[0] = 0x5f7066cc;
    local_18 = iVar1;
    FUN_5f706700(&local_9c,(float *)(param_3 + local_1c * 4));
    *(uint *)(param_1 + 0x800) = uVar2 - 0x20 & 0x1ff;
    local_1c = iVar1;
  } while (iVar1 < 0x240);
  return 1;
}


