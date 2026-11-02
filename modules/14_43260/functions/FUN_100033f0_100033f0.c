/* Module: 14_43260.dll
   Function: FUN_100033f0
   Address: 100033f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_100033f0(void *this,int param_1,int param_2,float param_3,float param_4,float param_5,
            float *param_6,float *param_7,float *param_8,float *param_9)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  
  pfVar1 = (float *)(*(int *)((int)this + 0xa7a) + *(int *)((int)this + 0x98a) * param_1 * 4);
  fVar3 = _DAT_10010c38;
  if (param_2 != 0) {
    fVar3 = param_3 * *pfVar1 * (float)_DAT_10010c30;
  }
  iVar5 = *(int *)((int)this + 0x996);
  for (pfVar6 = param_9; pfVar6 < param_9 + iVar5; pfVar6 = pfVar6 + 1) {
    fVar2 = *param_6;
    param_6 = param_6 + 1;
    *pfVar6 = fVar2 * fVar3;
  }
  fVar3 = pfVar1[1];
  iVar5 = *(int *)((int)this + 0x996);
  fVar2 = (float)_DAT_10010c30;
  for (pfVar6 = param_9; pfVar6 < param_9 + iVar5; pfVar6 = pfVar6 + 1) {
    fVar4 = *param_7;
    param_7 = param_7 + 1;
    *pfVar6 = fVar4 * param_4 * fVar3 * fVar2 + *pfVar6;
  }
  fVar3 = pfVar1[2];
  fVar2 = (float)_DAT_10010c30;
  pfVar1 = param_9 + *(int *)((int)this + 0x996);
  for (; param_9 < pfVar1; param_9 = param_9 + 1) {
    fVar4 = *param_8;
    param_8 = param_8 + 1;
    *param_9 = fVar4 * fVar3 * param_5 * fVar2 + *param_9;
  }
  return;
}


