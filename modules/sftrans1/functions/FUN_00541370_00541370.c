/* Module: sftrans1.dll
   Function: FUN_00541370
   Address: 00541370
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_00541370(float *param_1,float param_2,float param_3,float param_4,float *param_5,float *param_6,
            float *param_7,float param_8)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  HGLOBAL hMem;
  float *pfVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  param_1[9] = param_2;
  if (param_2 == 0.0) {
    return 0x80004003;
  }
  param_1[0xb] = param_3;
  param_1[0xc] = param_4;
  param_2 = param_3;
  if ((int)param_4 <= (int)param_3) {
    param_2 = param_4;
  }
  *param_1 = (float)(int)param_2;
  param_1[0xd] = param_8;
  if (((param_8 != 0.0) && (param_8 != 1.4013e-45)) && (param_8 != 2.8026e-45)) {
    return 0x80004005;
  }
  *param_5 = -0.0;
  *param_7 = 0.0;
  *param_6 = 0.0;
  hMem = GlobalAlloc(0x40,0x38);
  pfVar4 = GlobalLock(hMem);
  param_1[10] = (float)pfVar4;
  if (pfVar4 == (float *)0x0) {
    return 0x8007000e;
  }
  piVar1 = (int *)param_1[9];
  if (*piVar1 != 0) {
    fVar6 = *param_1 * (float)piVar1[0x11] * _DAT_00565308;
    *pfVar4 = fVar6;
    floor((double)fVar6);
    iVar5 = ftol();
    fVar6 = _DAT_0055c008;
    pfVar4[1] = (float)(iVar5 + 1);
    *param_5 = (float)(iVar5 + 1);
    pfVar4[2] = (float)piVar1[0x11] * _DAT_0056530c + (fVar6 - (float)piVar1[0x12]);
    fVar6 = (float)ftol();
    pfVar4[3] = fVar6;
    *param_6 = fVar6;
    fVar6 = (float)ftol();
    pfVar4[4] = fVar6;
    *param_7 = fVar6;
    fVar6 = (float)ftol();
    pfVar4[5] = fVar6;
    fVar6 = (float)ftol();
    pfVar4[6] = fVar6;
  }
  fVar6 = param_1[9];
  fVar2 = param_1[10];
  fVar3 = *(float *)((int)fVar6 + 0x70) * *param_1 * _DAT_0056530c;
  *(float *)((int)fVar2 + 0x1c) = fVar3;
  floor((double)fVar3);
  iVar5 = ftol();
  fVar3 = _DAT_0055c008;
  fVar7 = (float)(iVar5 + 1);
  *(float *)((int)fVar2 + 0x20) = fVar7;
  fVar6 = *(float *)((int)fVar6 + 0x74);
  *(undefined4 *)((int)fVar2 + 0x2c) = 0;
  *(undefined4 *)((int)fVar2 + 0x28) = 0;
  *(undefined4 *)((int)fVar2 + 0x34) = 0;
  *(undefined4 *)((int)fVar2 + 0x30) = 0;
  *(float *)((int)fVar2 + 0x24) = fVar3 - fVar6;
  if ((int)*param_5 < (int)fVar7) {
    *param_5 = fVar7;
  }
  return 0;
}


