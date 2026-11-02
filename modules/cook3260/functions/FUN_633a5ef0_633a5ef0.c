/* Module: cook3260.dll
   Function: FUN_633a5ef0
   Address: 633a5ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_633a5ef0(void *this,float *param_1,float *param_2)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float *local_c;
  float *local_8;
  
  iVar1 = *(int *)((int)this + 0x47bc);
  iVar5 = iVar1 >> 1;
  param_1 = param_1 + iVar5;
  local_8 = param_1 + iVar1;
  pfVar2 = (float *)(*(int *)((int)this + 0x16afc) + iVar5 * 4);
  iVar4 = 0;
  pfVar3 = pfVar2;
  pfVar6 = param_1;
  pfVar7 = local_8;
  local_c = param_2 + iVar1 + -1;
  if (0 < iVar5) {
    do {
      local_8 = local_8 + -1;
      param_1 = param_1 + -1;
      pfVar2 = pfVar2 + -1;
      *param_2 = *pfVar3 * *pfVar6 + *pfVar2 * *param_1;
      *local_c = *pfVar3 * *local_8 - *pfVar2 * *pfVar7;
      iVar4 = iVar4 + 1;
      pfVar3 = pfVar3 + 1;
      pfVar6 = pfVar6 + 1;
      pfVar7 = pfVar7 + 1;
      param_2 = param_2 + 1;
      local_c = local_c + -1;
    } while (iVar4 < *(int *)((int)this + 0x47bc) >> 1);
  }
  return;
}


