/* Module: espr3260.dll
   Function: FUN_632f1960
   Address: 632f1960
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_632f1960(void)

{
  float *pfVar1;
  float *pfVar2;
  float10 fVar3;
  int local_8;
  
  DAT_632ff8f0 = 0x3f800000;
  _DAT_632ffa80 = 0xbf800000;
  local_8 = 1;
  pfVar1 = (float *)&DAT_632ff8f4;
  do {
    fVar3 = (float10)local_8;
    pfVar2 = pfVar1 + 1;
    local_8 = local_8 + 1;
    fVar3 = (float10)fcos(fVar3 * (float10)_DAT_632fa1f8);
    *pfVar1 = (float)fVar3;
    pfVar1 = pfVar2;
  } while ((int)pfVar2 < 0x632ffa80);
  return;
}


