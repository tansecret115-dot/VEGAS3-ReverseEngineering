/* Module: cook3260.dll
   Function: FUN_633a41d0
   Address: 633a41d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_633a41d0(void *this,int param_1,float *param_2,int param_3)

{
  float fVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int *piVar7;
  int local_54 [20];
  
  pfVar5 = param_2;
  for (iVar4 = 0x14; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar5 = 0.0;
    pfVar5 = pfVar5 + 1;
  }
  piVar7 = local_54;
  for (iVar4 = 0x14; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar7 = 0;
    piVar7 = piVar7 + 1;
  }
  if (param_3 < *(int *)((int)this + 0xc)) {
    piVar7 = (int *)(&DAT_633a8c50 + param_3 * 4);
    pfVar5 = (float *)(param_3 * 0x50 + param_1);
    do {
      iVar4 = 0x14;
      fVar3 = _DAT_633a8f54;
      do {
        fVar1 = *pfVar5;
        pfVar5 = pfVar5 + 1;
        iVar4 = iVar4 + -1;
        fVar3 = fVar1 * fVar1 + fVar3;
      } while (iVar4 != 0);
      iVar4 = *piVar7;
      piVar7 = piVar7 + 1;
      local_54[iVar4] = local_54[iVar4] + 1;
      param_3 = param_3 + 1;
      param_2[iVar4] = fVar3 * _DAT_633a8f58 + param_2[iVar4];
    } while (param_3 < *(int *)((int)this + 0xc));
  }
  iVar6 = (int)local_54 - (int)param_2;
  iVar4 = 0x14;
  do {
    iVar2 = *(int *)((int)param_2 + iVar6);
    if (1 < iVar2) {
      *param_2 = *(float *)(&DAT_633a8d20 + iVar2 * 4) * *param_2;
    }
    param_2 = param_2 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}


