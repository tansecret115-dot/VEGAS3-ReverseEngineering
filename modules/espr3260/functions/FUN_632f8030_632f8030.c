/* Module: espr3260.dll
   Function: FUN_632f8030
   Address: 632f8030
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_632f8030(void *this,float *param_1,float param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  
  fVar6 = (float10)_DAT_632fa590;
  fVar2 = param_2;
  if (0 < (int)param_2) {
    do {
      fVar1 = *param_1;
      param_1 = param_1 + 1;
      fVar2 = (float)((int)fVar2 + -1);
      fVar6 = (float10)fVar1 * (float10)fVar1 + fVar6;
    } while (fVar2 != 0.0);
  }
  iVar4 = 2;
  log2(fVar6 / (float10)(int)param_2);
  do {
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  fVar6 = (float10)_CIpow();
  iVar4 = 0;
  iVar5 = 1;
  pfVar3 = (float *)&DAT_632fb1bc;
  param_2 = (float)ABS((float10)*param_3 - fVar6 * (float10)_DAT_632fb1b8);
  do {
    fVar7 = ABS((float10)*param_3 - fVar6 * (float10)*pfVar3);
    if (fVar7 < (float10)param_2) {
      param_2 = (float)fVar7;
      iVar4 = iVar5;
    }
    pfVar3 = pfVar3 + 1;
    iVar5 = iVar5 + 1;
  } while ((int)pfVar3 < 0x632fb238);
  *param_3 = (float)(fVar6 * (float10)*(float *)(&DAT_632fb1b8 + iVar4 * 4));
  *(float *)((int)this + 0x8f0) = *(float *)((int)this + 0x8ec);
  fVar6 = (float10)log2((float10)*(float *)(&DAT_632fb1b8 + iVar4 * 4));
  *(float *)((int)this + 0x8ec) =
       (float)((float10)0.3010299956639812 * fVar6 * (float10)_DAT_632fa5b0);
  return iVar4;
}


