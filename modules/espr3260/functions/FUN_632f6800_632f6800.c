/* Module: espr3260.dll
   Function: FUN_632f6800
   Address: 632f6800
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_632f6800(void *this,float *param_1,int param_2,undefined4 *param_3,float param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  float local_c;
  undefined4 *local_8;
  
  fVar3 = _DAT_632fa3cc;
  fVar4 = _DAT_632fa3cc / (float)(int)param_4;
  local_8 = param_3;
  pfVar6 = (float *)(*(int *)((int)this + 4) + -0x28);
  *(float **)((int)this + 4) = pfVar6;
  fVar2 = fVar4 * _DAT_632fa3d0;
  fVar3 = fVar3 - fVar2;
  if (0 < (int)param_4) {
    local_c = param_4;
    param_4 = fVar2;
    do {
      iVar7 = 10;
      pfVar5 = param_1;
      do {
        pfVar1 = (float *)((param_2 - (int)param_1) + (int)pfVar5);
        fVar2 = *pfVar5;
        pfVar5 = pfVar5 + 1;
        iVar7 = iVar7 + -1;
        *(float *)((int)pfVar6 + (-4 - (int)param_1) + (int)pfVar5) =
             param_4 * fVar2 + *pfVar1 * fVar3;
      } while (iVar7 != 0);
      FUN_632f6990(this,pfVar6,local_8,10);
      param_4 = fVar4 + param_4;
      local_8 = local_8 + 0xb;
      local_c = (float)((int)local_c + -1);
      fVar3 = _DAT_632fa3cc - param_4;
    } while (local_c != 0.0);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x28;
    return;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x28;
  return;
}


