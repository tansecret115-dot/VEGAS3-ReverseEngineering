/* Module: vegas30.exe
   Function: FUN_005a64b0
   Address: 005a64b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a64b0(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  
  fVar1 = param_1[0x14];
  fVar2 = param_1[0x15];
  FUN_005a6120(param_1,param_1,-*(double *)(param_1 + 0x14),0);
  fVar3 = param_1[0x10];
  fVar4 = param_1[0x11];
  fVar8 = (float10)FUN_005a5f80(param_1);
  fVar9 = (float10)FUN_005a5ff0(param_1);
  fVar5 = _DAT_00619ab0;
  if ((_DAT_00610f20 != (float)fVar9) &&
     (fVar5 = (float)fVar8 / (float)fVar9, fVar5 < _DAT_00610f20)) {
    fVar5 = -fVar5;
  }
  if (param_2 <= fVar5) {
    iVar7 = 4;
    pfVar6 = param_1;
    do {
      iVar7 = iVar7 + -1;
      *pfVar6 = (*pfVar6 - fVar3) * (param_2 / fVar5) + fVar3;
      pfVar6 = pfVar6 + 4;
    } while (iVar7 != 0);
  }
  else {
    iVar7 = 4;
    pfVar6 = param_1 + 1;
    do {
      iVar7 = iVar7 + -1;
      *pfVar6 = (*pfVar6 - fVar4) * (fVar5 / param_2) + fVar4;
      pfVar6 = pfVar6 + 4;
    } while (iVar7 != 0);
  }
  FUN_005a6120(param_1,param_1,fVar1,fVar2,0);
  return;
}


