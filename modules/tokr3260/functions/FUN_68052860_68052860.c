/* Module: tokr3260.dll
   Function: FUN_68052860
   Address: 68052860
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_68052860(int param_1,int param_2,int param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  FUN_68053d40(param_1,&local_c,&local_14);
  FUN_68053d40(param_2,&local_8,&local_10);
  iVar7 = 0;
  pfVar5 = param_4;
  do {
    fVar8 = FUN_68053d00(local_c,local_8,iVar7);
    fVar9 = FUN_68053d00(local_14,local_10,iVar7);
    fVar4 = (float10)_DAT_6805b070;
    iVar7 = iVar7 + 1;
    pfVar6 = pfVar5 + 1;
    fVar1 = *(float *)((param_3 - (int)param_4) + -4 + (int)pfVar6);
    fVar2 = *pfVar5;
    fVar3 = (float10)_DAT_6805b068;
    *(float *)((param_3 - (int)param_4) + -4 + (int)pfVar6) = (fVar2 + fVar1) * _DAT_6805b068;
    *pfVar5 = (float)((((fVar4 - (float10)(float)fVar8) / fVar9) * (float10)fVar1 +
                      -((float10)(float)fVar8 / (float10)(float)fVar9) * (float10)fVar2) * fVar3);
    pfVar5 = pfVar6;
  } while (iVar7 < 0x100);
  return 0;
}


