/* Module: mp3plug.dll
   Function: FUN_5f6d7a10
   Address: 5f6d7a10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6d7a10(float *param_1,float *param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  bVar2 = (param_3 & 1) != 0;
  if (bVar2) {
    fVar3 = ROUND((float10)1.4426950408889634 * (float10)*param_1);
    fVar4 = (float10)f2xm1(-(fVar3 - (float10)1.4426950408889634 * (float10)*param_1));
    fVar3 = (float10)fscale((float10)1 + fVar4,fVar3);
    *param_2 = (float)fVar3;
  }
  for (uVar1 = (uint)bVar2; (int)uVar1 < (int)param_3; uVar1 = uVar1 + 2) {
    fVar3 = ROUND((float10)1.4426950408889634 * (float10)param_1[uVar1]);
    fVar4 = (float10)f2xm1(-(fVar3 - (float10)1.4426950408889634 * (float10)param_1[uVar1]));
    fVar3 = (float10)fscale((float10)1 + fVar4,fVar3);
    fVar4 = ROUND((float10)1.4426950408889634 * (float10)param_1[uVar1 + 1]);
    fVar5 = (float10)f2xm1(-(fVar4 - (float10)1.4426950408889634 * (float10)param_1[uVar1 + 1]));
    fVar4 = (float10)fscale((float10)1 + fVar5,fVar4);
    param_2[uVar1] = (float)fVar3;
    param_2[uVar1 + 1] = (float)fVar4;
  }
  return;
}


