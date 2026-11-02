/* Module: vidpcore.dll
   Function: FUN_5dea4c50
   Address: 5dea4c50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5dea4c50(double *param_1,float *param_2)

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
    fVar9 = (fVar5 + fVar4) * (float)_DAT_5df1eec0;
    if ((fVar9 <= (float)_DAT_5df18838) || (fVar7 = fVar4 - fVar5, fVar7 <= (float)_DAT_5df18838)) {
      fVar1 = (float)_DAT_5df1fa70;
    }
    else {
      fVar8 = (fVar4 - fVar1) / fVar7;
      fVar6 = (fVar4 - fVar2) / fVar7;
      fVar7 = (fVar4 - fVar3) / fVar7;
      if (fVar1 == fVar4) {
        if (fVar2 == fVar5) {
          fVar1 = (fVar7 + (float)_DAT_5df22b78) * (float)_DAT_5df34108;
        }
        else {
          fVar1 = ((float)_DAT_5df18830 - fVar6) * (float)_DAT_5df34108;
        }
      }
      else if (fVar2 == fVar4) {
        if (fVar3 == fVar5) {
          fVar1 = (fVar8 + (float)_DAT_5df18830) * (float)_DAT_5df34108;
        }
        else {
          fVar1 = ((float)_DAT_5df2bd20 - fVar7) * (float)_DAT_5df34108;
        }
      }
      else if (fVar1 == fVar5) {
        fVar1 = (fVar6 + (float)_DAT_5df2bd20) * (float)_DAT_5df34108;
      }
      else {
        fVar1 = ((float)_DAT_5df22b78 - fVar8) * (float)_DAT_5df34108;
      }
    }
    *param_1 = (double)fVar1;
    param_1[1] = _DAT_5df18830 - (double)fVar9;
    return 1;
  }
  return 0;
}


