/* Module: ednt3260.dll
   Function: FUN_630f95c0
   Address: 630f95c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_630f95c0(double param_1,short param_2)

{
  short sVar1;
  short sVar2;
  
  if (param_1 == _DAT_63102b78) {
    return param_2;
  }
  sVar2 = 0;
  sVar1 = 0;
  if ((param_1 <= _DAT_63102b78) || (_DAT_63102b80 <= param_1)) {
    if ((_DAT_63102b78 <= param_1) || (param_1 < _DAT_63102b98)) {
      if (param_1 < _DAT_63102b80) {
        do {
          if (_DAT_63102b98 <= param_1) {
            return sVar1;
          }
          param_1 = param_1 * _DAT_63102b88;
          sVar1 = sVar1 + -1;
          param_2 = param_2 + -1;
        } while (param_2 != 0);
      }
      else {
        while( true ) {
          param_1 = param_1 * _DAT_63102b88;
          sVar1 = sVar2 + -1;
          param_2 = param_2 + -1;
          if (param_2 == 0) break;
          sVar2 = sVar1;
          if (param_1 < _DAT_63102b80) {
            return sVar1;
          }
        }
      }
    }
    else if (_DAT_63102ba0 <= param_1) {
      while( true ) {
        sVar1 = sVar2 + 1;
        param_2 = param_2 + -1;
        param_1 = param_1 + param_1;
        if (param_2 == 0) break;
        sVar2 = sVar1;
        if (param_1 < _DAT_63102ba0) {
          return sVar1;
        }
      }
    }
  }
  else if (param_1 < _DAT_63102b88) {
    while( true ) {
      sVar1 = sVar2 + 1;
      param_2 = param_2 + -1;
      param_1 = param_1 + param_1;
      if (param_2 == 0) break;
      sVar2 = sVar1;
      if (_DAT_63102b88 <= param_1) {
        return sVar1;
      }
    }
  }
  return sVar1;
}


