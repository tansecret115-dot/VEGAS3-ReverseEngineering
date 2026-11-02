/* Module: vegas30k.dll
   Function: FUN_010718f0
   Address: 010718f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_010718f0(undefined4 param_1,int param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  float10 extraout_ST0;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  if (0 < param_3 + -3) {
    iVar3 = ftol();
    if (param_3 + -4 <= iVar3) {
      iVar3 = param_3 + -4;
    }
    fVar4 = extraout_ST0 - (float10)iVar3;
    pfVar1 = (float *)(param_2 + 8 + iVar3 * 4);
    pfVar2 = (float *)(param_2 + 4 + iVar3 * 4);
    fVar5 = (float10)*(float *)(param_2 + 0xc + iVar3 * 4) * (float10)_DAT_011e21e4;
    fVar6 = (float10)*(float *)(param_2 + iVar3 * 4) * (float10)_DAT_011e21e4;
    return (float10)*pfVar2 +
           (((float10)*pfVar1 * (float10)_DAT_011e21e4 - fVar6) +
           (((((float10)*pfVar1 + (float10)*pfVar1) - fVar5) -
            (float10)*pfVar2 * (float10)_DAT_011e21dc) + (float10)*(float *)(param_2 + iVar3 * 4) +
           (((float10)*pfVar2 * (float10)_DAT_011e21e0 +
            (fVar5 - (float10)*pfVar1 * (float10)_DAT_011e21e0)) - fVar6) * fVar4) * fVar4) * fVar4;
  }
  return (float10)_DAT_011dd160;
}


