/* Module: sftrkfx1.dll
   Function: FUN_5cbb7200
   Address: 5cbb7200
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbb7200(float *param_1,int param_2,int param_3,int param_4)

{
  float *pfVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  iVar2 = param_4 * 0x70 + param_3;
  fVar3 = (float10)*(double *)(iVar2 + 0x48);
  fVar4 = (float10)*(double *)(iVar2 + 0x230);
  pfVar1 = param_1 + param_2 * 2;
  for (; param_1 < pfVar1; param_1 = param_1 + 2) {
    fVar5 = (float10)*param_1 - fVar3;
    fVar6 = (float10)param_1[1] - fVar4;
    fVar3 = (float10)*param_1 * (float10)*(double *)(iVar2 + 0x88) +
            fVar3 * (float10)*(double *)(iVar2 + 0x28);
    fVar4 = (float10)param_1[1] * (float10)*(double *)(iVar2 + 0x270) +
            fVar4 * (float10)*(double *)(iVar2 + 0x210);
    param_1[1] = (float)(fVar6 + fVar4);
    *param_1 = (float)(fVar5 + fVar3);
  }
  *(double *)(iVar2 + 0x230) = (double)fVar4;
  *(double *)(iVar2 + 0x48) = (double)fVar3;
  return;
}


