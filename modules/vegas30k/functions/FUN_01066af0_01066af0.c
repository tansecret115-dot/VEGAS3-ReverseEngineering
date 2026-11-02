/* Module: vegas30k.dll
   Function: FUN_01066af0
   Address: 01066af0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_01066af0(int param_1,int param_2,int param_3,int param_4,float *param_5,float *param_6,
                    float *param_7,int param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float10 fVar8;
  double dVar9;
  double dVar10;
  int local_20;
  int local_18;
  int local_10;
  
  if (param_2 == param_1) {
    fVar6 = param_6[1];
    fVar2 = (float)_DAT_011e1da8;
    local_18 = SUB84((double)(*param_6 * (float)_DAT_011e1da8 + (float)_DAT_011dbdd0),0);
    fVar5 = (float)_DAT_011dbdd0;
    *param_5 = (float)(local_18 + -0x80000000);
    fVar1 = *param_7;
    fVar3 = (float)_DAT_011e1da8;
    local_18 = SUB84((double)(fVar6 * fVar2 + fVar5),0);
    fVar5 = (float)_DAT_011dbdd0;
    param_5[1] = (float)(local_18 + -0x80000000);
    fVar6 = param_7[1];
    fVar2 = (float)_DAT_011e1da8;
    local_18 = SUB84((double)(fVar1 * fVar3 + fVar5),0);
    fVar1 = (float)_DAT_011dbdd0;
    param_5[4] = (float)(local_18 + -0x80000000);
    local_18 = SUB84((double)(fVar6 * fVar2 + fVar1),0);
    param_5[5] = (float)(local_18 + -0x80000000);
  }
  else {
    *param_5 = param_6[0x11];
    fVar6 = param_7[0x11];
    param_5[1] = (float)(param_2 << 0xe);
    param_5[4] = fVar6;
    param_5[5] = (float)(param_2 << 0xe);
  }
  if (param_2 != param_3 + -1) {
    fVar6 = param_7[0x10];
    param_5[2] = (float)((int)param_6[0x11] + (int)param_6[0x10]);
    fVar1 = param_7[0x11];
    fVar5 = (float)((param_2 + 1) * 0x4000);
    param_5[3] = fVar5;
    param_5[6] = (float)((int)fVar1 + (int)fVar6);
    param_5[7] = fVar5;
    goto LAB_01066d31;
  }
  if (param_2 == param_1) {
    local_18 = SUB84((double)((*(float *)(param_8 + 4 + param_4 * 0x1c) - param_6[1]) *
                              (float)_DAT_011e1da8 + (float)_DAT_011dbdd0),0);
    iVar7 = local_18;
    local_18 = SUB84((double)((*(float *)(param_8 + 4 + param_4 * 0x1c) - param_7[1]) *
                              (float)_DAT_011e1da8 + (float)_DAT_011dbdd0),0);
LAB_01066cb6:
    iVar7 = iVar7 + -0x80000000;
    local_18 = local_18 + -0x80000000;
  }
  else {
    dVar9 = ceil((double)*(float *)(param_8 + 4 + param_4 * 0x1c));
    dVar9 = dVar9 + _DAT_011dbdd0;
    dVar10 = floor((double)*(float *)(param_8 + 4 + param_4 * 0x1c));
    local_10 = SUB84(dVar9,0);
    local_20 = SUB84(dVar10 + _DAT_011dbdd0,0);
    if (local_10 + -0x80000000 != local_20 + -0x80000000) {
      fVar8 = (float10)_CIfmod();
      fVar8 = fVar8 * (float10)_DAT_011e1da8 + (float10)_DAT_011dbdd0;
      local_10 = SUB84((double)fVar8,0);
      iVar7 = local_10;
      local_10 = SUB84((double)fVar8,0);
      local_18 = local_10;
      goto LAB_01066cb6;
    }
    iVar7 = 0x4000;
    local_18 = 0x4000;
  }
  iVar4 = ftol();
  param_5[2] = (float)((int)param_6[0x11] - iVar4);
  param_5[3] = (float)(param_2 * 0x4000 + iVar7);
  iVar7 = ftol();
  param_5[6] = (float)((int)param_7[0x11] - iVar7);
  param_5[7] = (float)(param_2 * 0x4000 + local_18);
LAB_01066d31:
  fVar6 = *param_5;
  if ((int)param_5[2] <= (int)*param_5) {
    fVar6 = param_5[2];
  }
  param_5[0x14] = fVar6;
  param_5[0x17] = *(float *)(param_8 + 0x54);
  return (float10)((int)param_5[3] - (int)param_5[1]) * (float10)_DAT_011dba40;
}


