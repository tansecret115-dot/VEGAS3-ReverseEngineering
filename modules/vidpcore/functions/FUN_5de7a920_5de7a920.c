/* Module: vidpcore.dll
   Function: FUN_5de7a920
   Address: 5de7a920
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_5de7a920(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float10 fVar5;
  uint uVar6;
  uint uVar7;
  float10 fVar8;
  float10 fVar9;
  
  do {
    do {
      uVar1 = *param_1;
      uVar2 = param_1[1];
      uVar3 = param_1[uVar2 + 0x41];
      uVar4 = param_1[uVar1 + 0x41];
      param_1[uVar1 + 0x41] = uVar4 ^ uVar3;
      uVar7 = (uint)*(byte *)((int)param_1 + uVar1 + 8);
      *param_1 = uVar7;
      uVar6 = (uint)*(byte *)((int)param_1 + uVar2 + 8);
      param_1[1] = uVar6;
      uVar1 = param_1[uVar6 + 0x41];
      uVar2 = param_1[uVar7 + 0x41];
      fVar9 = (float10)_DAT_5df248b0;
      param_1[uVar7 + 0x41] = uVar2 ^ uVar1;
      fVar8 = (float10)((uVar4 ^ uVar3) & 0xffff) * fVar9 - (float10)_DAT_5df18830;
      *param_1 = (uint)*(byte *)((int)param_1 + uVar7 + 8);
      fVar9 = (float10)_DAT_5df248b0;
      param_1[1] = (uint)*(byte *)((int)param_1 + uVar6 + 8);
      fVar9 = (float10)((uVar2 ^ uVar1) & 0xffff) * fVar9 - (float10)_DAT_5df18830;
      fVar8 = fVar8 * fVar8 + fVar9 * fVar9;
    } while ((float10)_DAT_5df18830 <= fVar8);
  } while (fVar8 == (float10)_DAT_5df18838);
  fVar5 = (float10)log2(fVar8);
  return SQRT(((float10)0.6931471805599453 * fVar5 * (float10)_DAT_5df248a8) / fVar8) *
         (float10)(double)fVar9;
}


