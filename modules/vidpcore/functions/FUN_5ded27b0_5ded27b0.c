/* Module: vidpcore.dll
   Function: FUN_5ded27b0
   Address: 5ded27b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5ded27b0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  float local_40 [16];
  
  iVar3 = (int)param_2 - (int)param_1;
  pfVar9 = local_40;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar9 = *param_2;
    param_2 = param_2 + 1;
    pfVar9 = pfVar9 + 1;
  }
  param_2 = (float *)0x4;
  do {
    pfVar9 = local_40;
    pfVar4 = (float *)(iVar3 + (int)param_1);
    iVar5 = 4;
    do {
      *pfVar4 = 0.0;
      iVar8 = 4;
      pfVar6 = pfVar9;
      pfVar7 = param_1;
      do {
        fVar1 = *pfVar7;
        fVar2 = *pfVar6;
        pfVar6 = pfVar6 + 4;
        pfVar7 = pfVar7 + 1;
        iVar8 = iVar8 + -1;
        *pfVar4 = fVar1 * fVar2 + *pfVar4;
      } while (iVar8 != 0);
      pfVar4 = pfVar4 + 1;
      pfVar9 = pfVar9 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    param_1 = param_1 + 4;
    param_2 = (float *)((int)param_2 + -1);
  } while (param_2 != (float *)0x0);
  return;
}


