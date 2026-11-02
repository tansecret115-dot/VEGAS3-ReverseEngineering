/* Module: oggplug.dll
   Function: FUN_0043d8c0
   Address: 0043d8c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_0043d8c0(int *param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  int *piVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  
  piVar2 = param_1;
  iVar7 = *param_1;
  param_1 = (int *)0x0;
  pfVar8 = (float *)(param_3 + param_4 * 4);
  if (param_4 != 0) {
    param_1 = (int *)pfVar8[-1];
  }
  if (0 < iVar7) {
    pfVar3 = (float *)(param_2 + param_4 * 4);
    pfVar5 = pfVar8;
    iVar6 = iVar7;
    do {
      fVar1 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      iVar6 = iVar6 + -1;
      *pfVar5 = fVar1 - (float)param_1;
      pfVar5 = pfVar5 + 1;
    } while (iVar6 != 0);
  }
  iVar4 = FUN_00435aa0(piVar2,pfVar8,1);
  pfVar3 = (float *)(piVar2[3] + iVar4 * iVar7 * 4);
  pfVar5 = pfVar8;
  for (iVar6 = iVar7; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pfVar5 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar5 = pfVar5 + 1;
  }
  if (0 < iVar7) {
    do {
      iVar7 = iVar7 + -1;
      *pfVar8 = (float)param_1 + *pfVar8;
      pfVar8 = pfVar8 + 1;
    } while (iVar7 != 0);
  }
  return;
}


