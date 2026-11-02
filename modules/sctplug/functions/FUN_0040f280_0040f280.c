/* Module: sctplug.dll
   Function: FUN_0040f280
   Address: 0040f280
   Source: Ghidra pseudocode (Stage 10 batch) */


short * FUN_0040f280(short *param_1)

{
  short *psVar1;
  short sVar2;
  wint_t _C;
  int iVar3;
  short *psVar4;
  
  sVar2 = *param_1;
  psVar4 = param_1;
  while (sVar2 != 0) {
    if (sVar2 == 0x2e) {
      psVar4 = param_1;
    }
    psVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    sVar2 = *psVar1;
  }
  if (*psVar4 == 0x2e) {
    _C = psVar4[1];
    psVar1 = psVar4;
    while( true ) {
      if (_C == 0) {
        return psVar4;
      }
      iVar3 = iswspace(_C);
      if (iVar3 != 0) break;
      _C = psVar1[2];
      psVar1 = psVar1 + 1;
    }
  }
  return param_1;
}


