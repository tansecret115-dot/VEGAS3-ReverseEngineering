/* Module: vidcap30.exe
   Function: FUN_004fff10
   Address: 004fff10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004fff10(double *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((param_1 != (double *)0x0) && (param_2 != (float *)0x0)) {
    fVar1 = param_2[2];
    fVar2 = param_2[1];
    fVar3 = *param_2;
    fVar4 = fVar2;
    if (fVar2 < fVar1) {
      fVar4 = fVar1;
    }
    if (fVar4 <= fVar3) {
      fVar4 = fVar3;
    }
    fVar5 = fVar2;
    if (fVar1 < fVar2) {
      fVar5 = fVar1;
    }
    if (fVar3 <= fVar5) {
      fVar5 = fVar3;
    }
    fVar9 = (fVar5 + fVar4) * (float)_DAT_00589f50;
    if ((fVar9 <= (float)_DAT_00589f10) || (fVar7 = fVar4 - fVar5, fVar7 <= (float)_DAT_00589f10)) {
      fVar1 = (float)_DAT_0059a188;
    }
    else {
      fVar8 = (fVar4 - fVar1) / fVar7;
      fVar6 = (fVar4 - fVar2) / fVar7;
      fVar7 = (fVar4 - fVar3) / fVar7;
      if (fVar1 == fVar4) {
        if (fVar2 == fVar5) {
          fVar1 = (fVar7 + (float)_DAT_0059a448) * (float)_DAT_0059a440;
        }
        else {
          fVar1 = ((float)_DAT_00587ad0 - fVar6) * (float)_DAT_0059a440;
        }
      }
      else if (fVar2 == fVar4) {
        if (fVar3 == fVar5) {
          fVar1 = (fVar8 + (float)_DAT_00587ad0) * (float)_DAT_0059a440;
        }
        else {
          fVar1 = ((float)_DAT_0059a140 - fVar7) * (float)_DAT_0059a440;
        }
      }
      else if (fVar1 == fVar5) {
        fVar1 = (fVar6 + (float)_DAT_0059a140) * (float)_DAT_0059a440;
      }
      else {
        fVar1 = ((float)_DAT_0059a448 - fVar8) * (float)_DAT_0059a440;
      }
    }
    *param_1 = (double)fVar1;
    param_1[1] = _DAT_00587ad0 - (double)fVar9;
    return 1;
  }
  return 0;
}


