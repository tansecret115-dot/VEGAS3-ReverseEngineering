/* Module: sfppack2.dll
   Function: FUN_5cd34640
   Address: 5cd34640
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5cd34640(float *param_1,uint param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  uint uVar7;
  
  uVar7 = param_2 >> 1;
  if (uVar7 != 0) {
    fVar5 = param_3 + _DAT_5cd5344c;
    pfVar6 = param_1 + uVar7 * 2;
    fVar1 = _DAT_5cd5344c;
    fVar2 = _DAT_5cd53450;
    do {
      uVar7 = uVar7 - 1;
      fVar4 = fVar1 * *pfVar6 - fVar2 * pfVar6[1];
      fVar3 = fVar1 * pfVar6[1] + fVar2 * *pfVar6;
      *pfVar6 = (*param_1 - fVar4) * param_5;
      pfVar6[1] = (param_1[1] - fVar3) * param_5;
      *param_1 = (fVar4 + *param_1) * param_5;
      param_1[1] = (fVar3 + param_1[1]) * param_5;
      fVar3 = fVar2 * param_4;
      fVar2 = fVar1 * param_4 + fVar5 * fVar2;
      pfVar6 = pfVar6 + 2;
      param_1 = param_1 + 2;
      fVar1 = (fVar1 * param_3 - fVar3) + fVar1;
    } while (uVar7 != 0);
  }
  return;
}


