/* Module: cook3260.dll
   Function: FUN_633a4fd0
   Address: 633a4fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_633a4fd0(float *param_1,float *param_2,float *param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  int iVar9;
  
  if (0 < param_4) {
    do {
      pfVar8 = param_1;
      iVar9 = param_5;
      if (0 < param_5) {
        do {
          fVar1 = param_3[1];
          fVar2 = *pfVar8;
          fVar3 = *param_3;
          fVar4 = param_2[1];
          fVar5 = param_3[2];
          fVar6 = param_3[3];
          fVar7 = param_3[4];
          param_2[1] = *param_2;
          fVar1 = ((fVar4 * fVar5 + fVar1 * *param_2 + fVar2 * fVar3) - fVar6 * param_2[2]) -
                  fVar7 * param_2[3];
          *param_2 = *pfVar8;
          param_2[3] = param_2[2];
          iVar9 = iVar9 + -1;
          param_2[2] = fVar1;
          *pfVar8 = fVar1;
          pfVar8 = pfVar8 + 1;
        } while (iVar9 != 0);
      }
      param_3 = param_3 + 5;
      param_2 = param_2 + 4;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}


