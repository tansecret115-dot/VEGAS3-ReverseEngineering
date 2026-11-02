/* Module: cook3260.dll
   Function: FUN_633a5fc0
   Address: 633a5fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_633a5fc0(void *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  int local_c;
  
  pfVar5 = *(float **)((int)this + 0x16b00);
  pfVar7 = *(float **)((int)this + 0x16b04);
  pfVar6 = param_1 + (*(uint *)((int)this + 0x47bc) - 1);
  local_c = 0;
  if (0 < (int)(*(uint *)((int)this + 0x47bc) & 0xfffffffe)) {
    do {
      fVar1 = *pfVar7;
      fVar4 = *pfVar5;
      fVar2 = *param_1;
      fVar3 = *pfVar6;
      *param_2 = fVar1 * fVar3 + fVar4 * fVar2;
      pfVar6 = pfVar6 + -2;
      pfVar5 = pfVar5 + 1;
      pfVar7 = pfVar7 + 1;
      param_2[1] = fVar4 * fVar3 - fVar1 * fVar2;
      param_1 = param_1 + 2;
      param_2 = param_2 + 2;
      local_c = local_c + 1;
    } while (local_c < *(int *)((int)this + 0x47bc) >> 1);
  }
  return;
}


