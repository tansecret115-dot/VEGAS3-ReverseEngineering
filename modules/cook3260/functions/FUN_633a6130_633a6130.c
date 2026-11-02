/* Module: cook3260.dll
   Function: FUN_633a6130
   Address: 633a6130
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_633a6130(void *this,int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *local_c;
  float *local_8;
  
  iVar2 = param_1;
  iVar1 = *(int *)((int)this + 0x47bc);
  local_8 = param_2 + iVar1 + -1;
  param_1 = 0;
  pfVar6 = (float *)(iVar2 + (iVar1 >> 1) * 4);
  pfVar3 = pfVar6;
  pfVar4 = *(float **)((int)this + 0x16afc);
  pfVar5 = local_8;
  pfVar7 = *(float **)((int)this + 0x16afc) + iVar1 + -1;
  local_c = local_8 + iVar1;
  if (0 < iVar1 >> 1) {
    do {
      local_8 = local_8 + 1;
      pfVar6 = pfVar6 + -1;
      *param_2 = *pfVar4 * *pfVar6;
      *pfVar5 = *pfVar7 * *pfVar6;
      *local_8 = *pfVar7 * *pfVar3;
      *local_c = -(*pfVar4 * *pfVar3);
      param_1 = param_1 + 1;
      pfVar3 = pfVar3 + 1;
      pfVar4 = pfVar4 + 1;
      pfVar5 = pfVar5 + -1;
      pfVar7 = pfVar7 + -1;
      param_2 = param_2 + 1;
      local_c = local_c + -1;
    } while (param_1 < *(int *)((int)this + 0x47bc) >> 1);
  }
  return;
}


