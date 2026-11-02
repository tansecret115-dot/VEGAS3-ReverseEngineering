/* Module: rnco3260.dll
   Function: FUN_636f5630
   Address: 636f5630
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_636f5630(void *this,float param_1,float param_2)

{
  if ((_DAT_63765320 <= param_1) && (param_1 < param_2 * _DAT_63765324)) {
    ftol(this);
    return;
  }
  if ((param_2 * _DAT_63765324 <= param_1) && (param_1 < param_2)) {
    ftol();
    return;
  }
  if ((param_2 <= param_1) && (param_1 < (param_2 - _DAT_63765328) * _DAT_63765324)) {
    ftol();
    return;
  }
  if (((param_2 - _DAT_63765328) * _DAT_63765324 <= param_1) && (param_1 <= _DAT_6376531c)) {
    ftol();
    return;
  }
  ftol();
  return;
}


