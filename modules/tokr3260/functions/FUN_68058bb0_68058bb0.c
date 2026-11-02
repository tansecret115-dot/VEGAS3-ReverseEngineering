/* Module: tokr3260.dll
   Function: FUN_68058bb0
   Address: 68058bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_68058bb0(undefined4 *param_1,int param_2,float *param_3,int param_4,undefined4 *param_5,
            float *param_6)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  undefined4 *puVar7;
  float *pfVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  
  iVar11 = 0x2f;
  puVar7 = param_5 + param_4;
  puVar9 = param_5;
  do {
    uVar3 = *puVar7;
    puVar7 = puVar7 + 1;
    *puVar9 = uVar3;
    puVar9 = puVar9 + 1;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  if (0 < param_4) {
    puVar7 = param_5 + 0x2f;
    iVar11 = param_4;
    do {
      uVar3 = *param_1;
      param_1 = param_1 + 1;
      *puVar7 = uVar3;
      puVar7 = puVar7 + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  if (0 < param_4 / 2) {
    pfVar12 = (float *)(param_5 + 0x2f);
    iVar11 = param_2 - (int)param_3;
    param_5 = (undefined4 *)(param_4 / 2);
    do {
      iVar10 = 0x18;
      pfVar6 = pfVar12;
      pfVar8 = param_6;
      fVar4 = _DAT_6805b220;
      fVar5 = _DAT_6805b220;
      do {
        pfVar1 = pfVar6 + -1;
        pfVar2 = pfVar8 + 1;
        fVar5 = *pfVar6 * *pfVar8 + fVar5;
        pfVar6 = pfVar6 + -2;
        pfVar8 = pfVar8 + 2;
        iVar10 = iVar10 + -1;
        fVar4 = *pfVar1 * *pfVar2 + fVar4;
      } while (iVar10 != 0);
      pfVar12 = pfVar12 + 2;
      *(float *)(iVar11 + (int)param_3) = fVar5 + fVar4;
      *param_3 = fVar5 - fVar4;
      param_3 = param_3 + 1;
      param_5 = (undefined4 *)((int)param_5 + -1);
    } while (param_5 != (undefined4 *)0x0);
  }
  return;
}


