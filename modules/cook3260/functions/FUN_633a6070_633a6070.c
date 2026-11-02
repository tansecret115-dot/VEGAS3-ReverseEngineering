/* Module: cook3260.dll
   Function: FUN_633a6070
   Address: 633a6070
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_633a6070(void *this,int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  int *piVar7;
  float *pfVar8;
  int local_10;
  float *local_c;
  
  pfVar6 = *(float **)((int)this + 0x16b08);
  iVar5 = *(int *)((int)this + 0x47bc) >> 1;
  local_10 = 0;
  piVar7 = *(int **)((int)this + 0x47b8);
  pfVar8 = pfVar6 + iVar5;
  local_c = param_2 + *(int *)((int)this + 0x47bc) + -1;
  if (0 < iVar5) {
    do {
      iVar5 = *piVar7;
      fVar1 = *pfVar6;
      fVar2 = *pfVar8;
      piVar7 = piVar7 + 1;
      pfVar6 = pfVar6 + 1;
      fVar3 = *(float *)(param_1 + iVar5 * 8);
      fVar4 = *(float *)(param_1 + 4 + iVar5 * 8);
      *param_2 = fVar2 * fVar4 + fVar1 * fVar3;
      pfVar8 = pfVar8 + -1;
      param_2 = param_2 + 2;
      *local_c = fVar2 * fVar3 - fVar1 * fVar4;
      local_10 = local_10 + 1;
      local_c = local_c + -2;
    } while (local_10 < *(int *)((int)this + 0x47bc) >> 1);
  }
  return;
}


