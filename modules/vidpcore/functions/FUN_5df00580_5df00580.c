/* Module: vidpcore.dll
   Function: FUN_5df00580
   Address: 5df00580
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5df00580(int param_1,uint param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float *pfVar9;
  
  param_2 = param_2 >> 1;
  if (param_2 != 0) {
    fVar7 = param_3 + _DAT_5df205c8;
    pfVar8 = (float *)(param_2 * 0x10 + 4 + param_1);
    pfVar9 = (float *)(param_1 + 4);
    fVar1 = _DAT_5df205c8;
    fVar2 = _DAT_5df205cc;
    do {
      param_2 = param_2 - 1;
      fVar6 = fVar1 * pfVar8[-1] - fVar2 * pfVar8[1];
      fVar5 = fVar1 * pfVar8[1] + fVar2 * pfVar8[-1];
      fVar4 = fVar1 * *pfVar8 - fVar2 * pfVar8[2];
      fVar3 = fVar2 * *pfVar8 + fVar1 * pfVar8[2];
      pfVar8[-1] = (pfVar9[-1] - fVar6) * param_5;
      pfVar8[1] = (pfVar9[1] - fVar5) * param_5;
      pfVar9[-1] = (fVar6 + pfVar9[-1]) * param_5;
      pfVar9[1] = (fVar5 + pfVar9[1]) * param_5;
      *pfVar8 = (*pfVar9 - fVar4) * param_5;
      pfVar8[2] = (pfVar9[2] - fVar3) * param_5;
      *pfVar9 = (fVar4 + *pfVar9) * param_5;
      pfVar9[2] = (fVar3 + pfVar9[2]) * param_5;
      fVar3 = fVar2 * param_4;
      fVar2 = fVar1 * param_4 + fVar7 * fVar2;
      pfVar8 = pfVar8 + 4;
      pfVar9 = pfVar9 + 4;
      fVar1 = (fVar1 * param_3 - fVar3) + fVar1;
    } while (param_2 != 0);
  }
  return;
}


