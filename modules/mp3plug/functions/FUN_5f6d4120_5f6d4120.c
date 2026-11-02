/* Module: mp3plug.dll
   Function: FUN_5f6d4120
   Address: 5f6d4120
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_5f6d4120(int param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)*(float *)(param_1 + 0x20);
  if ((_DAT_5f75c6f0 <= dVar1) && (dVar1 <= _DAT_5f75c700)) {
    if (dVar1 <= _DAT_5f75c708) {
      dVar1 = dVar1 - _DAT_5f75c720;
      dVar2 = pow(dVar1,_DAT_5f75c728);
      dVar1 = _DAT_5f75c738 * dVar1 + dVar2 * _DAT_5f75c730;
    }
    else {
      dVar1 = (dVar1 - _DAT_5f75c710) * _DAT_5f75c718;
    }
    *(double *)(param_1 + 0x10) = dVar1;
    return;
  }
  *(undefined8 *)(param_1 + 0x10) = _DAT_5f75c6f8;
  return;
}


