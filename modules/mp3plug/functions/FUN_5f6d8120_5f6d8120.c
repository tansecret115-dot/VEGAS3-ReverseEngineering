/* Module: mp3plug.dll
   Function: FUN_5f6d8120
   Address: 5f6d8120
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6d8120(float param_1,float param_2,float *param_3,float *param_4,uint param_5)

{
  float10 fVar1;
  float10 fVar2;
  uint uVar3;
  bool bVar4;
  
  bVar4 = (param_5 & 1) != 0;
  if (bVar4) {
    fVar1 = (float10)log2((float10)*param_3 * (float10)param_2);
    *param_4 = (float)((float10)0.6931471805599453 * fVar1 * (float10)param_1);
  }
  for (uVar3 = (uint)bVar4; (int)uVar3 < (int)param_5; uVar3 = uVar3 + 2) {
    fVar1 = (float10)log2((float10)param_3[uVar3] * (float10)param_2);
    fVar2 = (float10)log2((float10)param_3[uVar3 + 1] * (float10)param_2);
    param_4[uVar3 + 1] = (float)((float10)0.6931471805599453 * fVar2 * (float10)param_1);
    param_4[uVar3] = (float)((float10)0.6931471805599453 * fVar1 * (float10)param_1);
  }
  return;
}


