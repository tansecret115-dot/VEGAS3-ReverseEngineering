/* Module: oggplug.dll
   Function: FUN_00438690
   Address: 00438690
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00438690(int param_1,int param_2,int param_3,float *param_4,int param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  
  iVar4 = param_3;
  puVar10 = (undefined4 *)&stack0xffffffec;
  puVar5 = (undefined4 *)&stack0xffffffec;
  FUN_00444a80();
  if (param_2 == 0) {
    iVar8 = param_3;
    if (0 < param_3) {
      for (; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
    }
  }
  else if (0 < param_3) {
    iVar8 = param_3;
    do {
      *puVar5 = *(undefined4 *)((param_2 - (int)&stack0xffffffec) + (int)puVar5);
      puVar5 = puVar5 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  param_2 = 0;
  if (0 < param_5) {
    param_3 = param_3 * 4;
    iVar8 = -(int)param_4;
    do {
      iVar11 = param_2 * 4;
      fVar3 = _DAT_0044d6f0;
      if (0 < iVar4) {
        pfVar7 = (float *)(&stack0xffffffec + iVar8 + (int)param_4);
        iVar6 = param_1 + iVar4 * 4;
        iVar9 = iVar4;
        do {
          fVar2 = *pfVar7;
          pfVar1 = (float *)(iVar6 + -4);
          iVar6 = iVar6 + -4;
          pfVar7 = pfVar7 + 1;
          iVar9 = iVar9 + -1;
          fVar3 = fVar3 - fVar2 * *pfVar1;
          iVar11 = param_3;
        } while (iVar9 != 0);
      }
      *(float *)(&stack0xffffffec + iVar11) = fVar3;
      param_2 = param_2 + 1;
      *param_4 = fVar3;
      param_3 = param_3 + 4;
      param_4 = param_4 + 1;
    } while (param_2 < param_5);
  }
  return;
}


