/* Module: tokr3260.dll
   Function: FUN_68058090
   Address: 68058090
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_68058090(byte param_1,int param_2,float *param_3,int param_4,int param_5,int param_6,int param_7
            ,int param_8,float *param_9,uint *param_10)

{
  float10 fVar1;
  float10 fVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  int local_8;
  
  iVar5 = 1 << (param_1 & 0x1f);
  local_8 = 0;
  if (0 < iVar5 / 2) {
    pfVar3 = param_3;
    do {
      fVar6 = (float10)local_8;
      local_8 = local_8 + 1;
      pfVar4 = pfVar3 + 1;
      fVar7 = (fVar6 * (float10)_DAT_6805b198) / (float10)iVar5;
      fVar6 = (((float10)_DAT_6805b1a8 - fVar6 * (float10)_DAT_6805b1a0) * (float10)_DAT_6805b1b0) /
              (float10)(iVar5 * 8);
      fVar8 = (float10)fcos(fVar6);
      fVar9 = (float10)fsin(fVar6 * (float10)_DAT_6805b1b8);
      fVar10 = (float10)fsin(fVar6);
      fVar11 = (float10)fcos((float10)(double)(fVar6 * (float10)_DAT_6805b1b8));
      fVar6 = (float10)fcos(fVar7);
      *(float *)((param_2 - (int)param_3) + -4 + (int)pfVar4) = (float)fVar6;
      fVar12 = (float10)fsin((float10)(double)fVar7);
      fVar6 = (float10)_DAT_6805b1c0;
      fVar7 = (float10)_DAT_6805b1c0;
      fVar1 = (float10)_DAT_6805b1c0;
      fVar2 = (float10)_DAT_6805b1c0;
      *pfVar3 = (float)fVar12;
      *(float *)((param_4 - (int)param_3) + -4 + (int)pfVar4) =
           (float)((fVar8 - (float10)(double)fVar9) * fVar6);
      *(float *)((param_5 - (int)param_3) + -4 + (int)pfVar4) =
           (float)((fVar9 + (float10)(double)fVar8) * fVar7);
      *(float *)((param_6 - (int)param_3) + -4 + (int)pfVar4) =
           (float)((fVar10 + (float10)(double)fVar11) * fVar1);
      *(float *)((param_7 - (int)param_3) + -4 + (int)pfVar4) =
           (float)((fVar11 - (float10)(double)fVar10) * fVar2);
      pfVar3 = pfVar4;
    } while (local_8 < iVar5 / 2);
  }
  FUN_68058200(param_1 - 1,param_8,param_9,param_10);
  return;
}


