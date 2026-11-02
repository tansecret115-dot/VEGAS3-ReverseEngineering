/* Module: sftrans1.dll
   Function: FUN_004ea930
   Address: 004ea930
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_004ea930(int *param_1,int param_2,int param_3,int param_4,float param_5,float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  fVar1 = param_5 - *(float *)(param_2 + 4);
  param_5 = param_5 - *(float *)(param_3 + 4);
  param_6 = param_6 - *(float *)(param_2 + 4);
  iVar5 = ftol();
  *param_1 = iVar5;
  iVar6 = ftol();
  param_1[1] = iVar6;
  iVar7 = ftol();
  param_1[4] = iVar7;
  param_1[5] = iVar6;
  iVar6 = ftol();
  param_1[2] = iVar6;
  iVar7 = ftol();
  param_1[3] = iVar7;
  iVar8 = ftol();
  param_1[6] = iVar8;
  param_1[7] = iVar7;
  if (iVar6 <= iVar5) {
    iVar5 = iVar6;
  }
  param_1[0x14] = iVar5;
  param_1[0x17] = 0;
  iVar5 = ftol();
  iVar6 = ftol();
  fVar4 = (float)(((iVar5 - iVar6) - *(int *)(param_2 + 0x44)) + *(int *)(param_3 + 0x44)) *
          (float)_DAT_00561088;
  if (param_4 == 2) {
    iVar5 = *(int *)(param_2 + 0x54);
    iVar6 = ftol();
    param_1[10] = iVar6 + iVar5;
    iVar7 = ftol();
    iVar6 = *(int *)(param_2 + 0x5c);
    param_1[0xb] = iVar7 + *(int *)(param_3 + 0x54);
    iVar7 = ftol();
    param_1[0xc] = iVar7 + iVar6;
    iVar7 = ftol();
    param_1[0xd] = iVar7 + *(int *)(param_3 + 0x5c);
    iVar7 = ftol();
    param_1[0x10] = iVar7 + iVar5;
    iVar5 = ftol();
    param_1[0x11] = iVar5 + iVar6;
    return;
  }
  if (param_4 == 3) {
    fVar2 = fVar1 * *(float *)(param_2 + 100) + *(float *)(param_2 + 0x60);
    param_1[0xe] = (int)fVar2;
    fVar3 = fVar1 * *(float *)(param_2 + 0x50) + *(float *)(param_2 + 0x54);
    param_1[10] = (int)fVar3;
    fVar1 = fVar1 * *(float *)(param_2 + 0x58) + *(float *)(param_2 + 0x5c);
    param_1[0xc] = (int)fVar1;
    param_1[0x13] = (int)(param_6 * *(float *)(param_2 + 100) + *(float *)(param_2 + 0x60));
    param_1[0x10] = (int)(param_6 * *(float *)(param_2 + 0x50) + *(float *)(param_2 + 0x54));
    param_1[0x11] = (int)(param_6 * *(float *)(param_2 + 0x58) + *(float *)(param_2 + 0x5c));
    if (ABS(fVar4) < (float)_DAT_00563840) {
      param_1[0xf] = 0;
      param_1[0xb] = 0;
      param_1[0xd] = 0;
      return;
    }
    param_1[0xf] = (int)(((param_5 * *(float *)(param_3 + 100) + *(float *)(param_3 + 0x60)) - fVar2
                         ) / fVar4);
    param_1[0xb] = (int)(((param_5 * *(float *)(param_3 + 0x50) + *(float *)(param_3 + 0x54)) -
                         fVar3) / fVar4);
    param_1[0xd] = (int)(((param_5 * *(float *)(param_3 + 0x58) + *(float *)(param_3 + 0x5c)) -
                         fVar1) / fVar4);
  }
  return;
}


