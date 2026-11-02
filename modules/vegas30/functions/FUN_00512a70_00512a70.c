/* Module: vegas30.exe
   Function: FUN_00512a70
   Address: 00512a70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00512a70(int *param_1,float param_2,float *param_3,int *param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  
  pfVar4 = param_3;
  iVar1 = *(int *)(*param_1 + 0x98);
  iVar5 = (param_4[2] - *param_4) + -0x15;
  fVar2 = (param_3[8] + *param_3) * _DAT_0061a460;
  iVar6 = (param_4[3] - param_4[1]) + -0x15;
  fVar3 = (param_3[9] + param_3[1]) * _DAT_0061a460;
  if ((DAT_00647e50 != 0) || (param_3 = (float *)fVar2, (*(uint *)(iVar1 + 4) & 0x1000) == 0)) {
    param_3 = (float *)(fVar2 * (float)*(double *)(iVar1 + 0x80));
  }
  if (_DAT_00610f20 == param_2) {
    fVar7 = (float10)FUN_005a5f80(pfVar4);
    fVar7 = (float10)iVar5 / (fVar7 + (float10)(*(int *)(*param_1 + 0x290) << 2));
    if ((DAT_00647e50 != 0) || ((*(uint *)(iVar1 + 4) & 0x1000) == 0)) {
      fVar7 = (float10)FUN_005a5f80(pfVar4);
      fVar7 = (float10)iVar5 /
              ((float10)(*(int *)(*param_1 + 0x290) << 2) +
              fVar7 * (float10)*(double *)(iVar1 + 0x80));
    }
    param_4 = (int *)(float)fVar7;
    fVar7 = (float10)FUN_005a5ff0(pfVar4);
    fVar7 = (float10)iVar6 / (fVar7 + (float10)(*(int *)(*param_1 + 0x290) << 2));
    if (fVar7 <= (float10)(float)param_4) {
      param_2 = (float)fVar7;
    }
    else {
      param_2 = (float)param_4;
    }
  }
  FUN_00512930(param_1,param_2);
  *(float *)(iVar1 + 0xc) = (float)(iVar5 / 2) / *(float *)(iVar1 + 8) - (float)param_3;
  *(float *)(iVar1 + 0x10) = (float)(iVar6 / 2) / *(float *)(iVar1 + 8) - fVar3;
  return;
}


