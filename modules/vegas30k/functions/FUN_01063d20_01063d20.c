/* Module: vegas30k.dll
   Function: FUN_01063d20
   Address: 01063d20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_01063d20(float *param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  
  fVar3 = param_2[7] - param_2[0xe];
  fVar1 = param_2[1] - param_2[0xf];
  fVar2 = param_2[8] - param_2[0xf];
  fVar5 = *param_2 - param_2[0xe];
  fVar6 = _DAT_011dad68 / (fVar1 * fVar3 - fVar5 * fVar2);
  fVar4 = -fVar6;
  if (0 < param_3) {
    iVar8 = param_3;
    pfVar9 = param_1 + 0x48;
    pfVar10 = param_2 + 4;
    do {
      fVar7 = _DAT_011dad68 / pfVar10[-1];
      iVar8 = iVar8 + -1;
      pfVar9[-0x48] = fVar7;
      pfVar9[-0x24] = fVar7 * *pfVar10;
      *pfVar9 = fVar7 * pfVar10[1];
      pfVar9 = pfVar9 + 1;
      pfVar10 = pfVar10 + 7;
    } while (iVar8 != 0);
  }
  if (2 < param_3) {
    param_1[0x6c] = (fVar1 * (param_1[1] - param_1[2]) - fVar2 * (*param_1 - param_1[2])) * fVar6;
    param_1[0x6d] = (fVar5 * (param_1[1] - param_1[2]) - fVar3 * (*param_1 - param_1[2])) * fVar4;
    param_1[0x6e] =
         (fVar1 * (param_1[0x25] - param_1[0x26]) - fVar2 * (param_1[0x24] - param_1[0x26])) * fVar6
    ;
    param_1[0x6f] =
         (fVar5 * (param_1[0x25] - param_1[0x26]) - fVar3 * (param_1[0x24] - param_1[0x26])) * fVar4
    ;
    param_1[0x70] =
         (fVar1 * (param_1[0x49] - param_1[0x4a]) - fVar2 * (param_1[0x48] - param_1[0x4a])) * fVar6
    ;
    param_1[0x71] =
         (fVar5 * (param_1[0x49] - param_1[0x4a]) - fVar3 * (param_1[0x48] - param_1[0x4a])) * fVar4
    ;
    return;
  }
  param_1[0x6c] = 0.0;
  param_1[0x6d] = 0.0;
  param_1[0x6e] = 0.0;
  param_1[0x6f] = 0.0;
  param_1[0x70] = 0.0;
  param_1[0x71] = 0.0;
  return;
}


