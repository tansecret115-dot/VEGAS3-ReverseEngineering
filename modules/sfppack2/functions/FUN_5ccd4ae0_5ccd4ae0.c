/* Module: sfppack2.dll
   Function: FUN_5ccd4ae0
   Address: 5ccd4ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_5ccd4ae0(uint param_1)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  if (param_1 == 0xfffffe0c) {
    return (float10)_DAT_5cd51520;
  }
  uVar2 = (int)param_1 >> 0x1f;
  if (((int)param_1 < -100) || (100 < (int)param_1)) {
    iVar1 = (param_1 ^ uVar2) - uVar2;
    _CIpow(iVar1);
  }
  else {
    iVar1 = (param_1 ^ uVar2) - uVar2;
    _CIpow(iVar1);
  }
  fVar3 = (float10)_CIpow(iVar1);
  return fVar3;
}


