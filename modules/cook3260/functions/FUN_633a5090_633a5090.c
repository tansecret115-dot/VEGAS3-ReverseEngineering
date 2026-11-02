/* Module: cook3260.dll
   Function: FUN_633a5090
   Address: 633a5090
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_633a5090(void *this,int param_1)

{
  undefined4 *puVar1;
  float *pfVar2;
  float10 fVar3;
  
  *(int *)((int)this + 0x47c0) = (int)(param_1 + (param_1 >> 0x1f & 7U)) >> 3;
  puVar1 = &DAT_633a99a8;
  pfVar2 = (float *)((int)this + 0x47c4);
  do {
    fVar3 = (float10)_CIpow();
    *pfVar2 = (float)fVar3;
    puVar1 = puVar1 + 1;
    pfVar2 = pfVar2 + 1;
  } while ((int)puVar1 < 0x633a9a01);
  return 0;
}


