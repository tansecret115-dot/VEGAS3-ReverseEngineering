/* Module: tokr3260.dll
   Function: FUN_680510b0
   Address: 680510b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_680510b0(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5,float *param_6)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  
  puVar9 = param_5 + param_4;
  iVar11 = 0x2e;
  puVar10 = param_5;
  do {
    uVar2 = *puVar9;
    puVar9 = puVar9 + 1;
    *puVar10 = uVar2;
    puVar10 = puVar10 + 1;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  iVar11 = param_4 / 2;
  param_4 = 0;
  if (0 < iVar11) {
    do {
      param_5[param_4 * 2 + 0x2e] =
           *(float *)(param_1 + param_4 * 4) + *(float *)(param_2 + param_4 * 4);
      param_5[param_4 * 2 + 0x2f] =
           *(float *)(param_1 + param_4 * 4) - *(float *)(param_2 + param_4 * 4);
      fVar5 = 0.0;
      iVar8 = 0;
      fVar4 = 0.0;
      fVar1 = *param_6;
      do {
        iVar6 = iVar8 * 2;
        fVar3 = fVar1 * (float)param_5[param_4 * 2 + iVar8 * 2];
        fVar1 = param_6[iVar8 * 2 + 2];
        iVar7 = iVar8 * 2;
        fVar4 = fVar3 + fVar4;
        iVar8 = iVar8 + 1;
        fVar5 = param_6[iVar6 + 1] * (float)param_5[param_4 * 2 + iVar7 + 1] + fVar5;
      } while (iVar8 != 0x18);
      *(float *)(param_3 + 4 + param_4 * 8) = fVar4;
      *(float *)(param_3 + param_4 * 8) = fVar5;
      param_4 = param_4 + 1;
    } while (param_4 < iVar11);
  }
  return;
}


