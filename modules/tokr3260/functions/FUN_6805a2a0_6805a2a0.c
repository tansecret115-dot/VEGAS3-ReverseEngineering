/* Module: tokr3260.dll
   Function: FUN_6805a2a0
   Address: 6805a2a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_6805a2a0(float *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,float *param_5,
            float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  uint uVar10;
  float *pfVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  pfVar11 = param_5 + param_4;
  pfVar12 = param_5;
  for (iVar9 = 0x2f; fVar8 = fRam6805cea0, fVar7 = fRam6805ce9c, fVar6 = fRam6805ce98,
      fVar5 = _DAT_6805ce94, iVar9 != 0; iVar9 = iVar9 + -1) {
    *pfVar12 = *pfVar11;
    pfVar11 = pfVar11 + 1;
    pfVar12 = pfVar12 + 1;
  }
  uVar10 = param_4 >> 2;
  do {
    fVar1 = *param_1;
    fVar2 = param_1[1];
    fVar3 = param_1[2];
    fVar4 = param_1[3];
    param_1 = param_1 + 4;
    fVar13 = *param_6;
    fVar14 = param_6[1];
    fVar15 = param_6[2];
    fVar16 = param_6[3];
    param_5[0x2f] = fVar1;
    param_5[0x30] = fVar2;
    param_5[0x31] = fVar3;
    param_5[0x32] = fVar4;
    fVar13 = param_5[2] * fVar15 + 0.0 + param_5[6] * param_6[6] + param_5[10] * param_6[10] +
             param_5[0xe] * param_6[0xe] + param_5[0x12] * param_6[0x12] +
             param_5[0x16] * param_6[0x16] + param_5[0x1a] * param_6[0x1a] +
             param_5[0x1e] * param_6[0x1e] + param_5[0x22] * param_6[0x22] +
             param_5[0x26] * param_6[0x26] + param_5[0x2a] * param_6[0x2a] +
             param_5[0x2e] * param_6[0x2e] +
             *param_5 * fVar13 + 0.0 + param_5[4] * param_6[4] + param_5[8] * param_6[8] +
             param_5[0xc] * param_6[0xc] + param_5[0x10] * param_6[0x10] +
             param_5[0x14] * param_6[0x14] + param_5[0x18] * param_6[0x18] +
             param_5[0x1c] * param_6[0x1c] + param_5[0x20] * param_6[0x20] +
             param_5[0x24] * param_6[0x24] + param_5[0x28] * param_6[0x28] +
             param_5[0x2c] * param_6[0x2c];
    fVar14 = param_5[3] * fVar16 + 0.0 + param_5[7] * param_6[7] + param_5[0xb] * param_6[0xb] +
             param_5[0xf] * param_6[0xf] + param_5[0x13] * param_6[0x13] +
             param_5[0x17] * param_6[0x17] + param_5[0x1b] * param_6[0x1b] +
             param_5[0x1f] * param_6[0x1f] + param_5[0x23] * param_6[0x23] +
             param_5[0x27] * param_6[0x27] + param_5[0x2b] * param_6[0x2b] +
             param_5[0x2f] * param_6[0x2f] +
             param_5[1] * fVar14 + 0.0 + param_5[5] * param_6[5] + param_5[9] * param_6[9] +
             param_5[0xd] * param_6[0xd] + param_5[0x11] * param_6[0x11] +
             param_5[0x15] * param_6[0x15] + param_5[0x19] * param_6[0x19] +
             param_5[0x1d] * param_6[0x1d] + param_5[0x21] * param_6[0x21] +
             param_5[0x25] * param_6[0x25] + param_5[0x29] * param_6[0x29] +
             param_5[0x2d] * param_6[0x2d];
    fVar15 = param_5[2] * *param_6 + 0.0 + param_5[6] * param_6[4] + param_5[10] * param_6[8] +
             param_5[0xe] * param_6[0xc] + param_5[0x12] * param_6[0x10] +
             param_5[0x16] * param_6[0x14] + param_5[0x1a] * param_6[0x18] +
             param_5[0x1e] * param_6[0x1c] + param_5[0x22] * param_6[0x20] +
             param_5[0x26] * param_6[0x24] + param_5[0x2a] * param_6[0x28] +
             param_5[0x2e] * param_6[0x2c] +
             param_5[4] * param_6[2] + 0.0 + param_5[8] * param_6[6] + param_5[0xc] * param_6[10] +
             param_5[0x10] * param_6[0xe] + param_5[0x14] * param_6[0x12] +
             param_5[0x18] * param_6[0x16] + param_5[0x1c] * param_6[0x1a] +
             param_5[0x20] * param_6[0x1e] + param_5[0x24] * param_6[0x22] +
             param_5[0x28] * param_6[0x26] + param_5[0x2c] * param_6[0x2a] +
             param_5[0x30] * param_6[0x2e];
    fVar16 = param_5[3] * param_6[1] + 0.0 + param_5[7] * param_6[5] + param_5[0xb] * param_6[9] +
             param_5[0xf] * param_6[0xd] + param_5[0x13] * param_6[0x11] +
             param_5[0x17] * param_6[0x15] + param_5[0x1b] * param_6[0x19] +
             param_5[0x1f] * param_6[0x1d] + param_5[0x23] * param_6[0x21] +
             param_5[0x27] * param_6[0x25] + param_5[0x2b] * param_6[0x29] +
             param_5[0x2f] * param_6[0x2d] +
             param_5[5] * param_6[3] + 0.0 + param_5[9] * param_6[7] + param_5[0xd] * param_6[0xb] +
             param_5[0x11] * param_6[0xf] + param_5[0x15] * param_6[0x13] +
             param_5[0x19] * param_6[0x17] + param_5[0x1d] * param_6[0x1b] +
             param_5[0x21] * param_6[0x1f] + param_5[0x25] * param_6[0x23] +
             param_5[0x29] * param_6[0x27] + param_5[0x2d] * param_6[0x2b] +
             param_5[0x31] * param_6[0x2f];
    *param_2 = CONCAT44(fVar15 + fVar16 * fVar6,fVar13 + fVar14 * fVar5);
    param_2 = param_2 + 1;
    *param_3 = CONCAT44(fVar16 + fVar15 * fVar8,fVar14 + fVar13 * fVar7);
    param_5 = param_5 + 4;
    uVar10 = uVar10 - 1;
    param_3 = param_3 + 1;
  } while (uVar10 != 0);
  return;
}


