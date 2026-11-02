/* Module: pncrt.dll
   Function: FUN_7800ae50
   Address: 7800ae50
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __cdecl FUN_7800ae50(int param_1)

{
  int *piVar1;
  uint dwBytes;
  
  dwBytes = param_1 + 0xfU & 0xfffffff0;
  if ((DAT_780421d8 != (code *)0x0) &&
     (piVar1 = (int *)(*DAT_780421d8)(dwBytes), piVar1 != (int *)0x0)) {
    return piVar1;
  }
  if (dwBytes <= DAT_7803f3ec) {
    _lock(9);
    piVar1 = FUN_7800b3b0(param_1 + 0xfU >> 4);
    _unlock(9);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
  }
  piVar1 = HeapAlloc(DAT_78042734,0,dwBytes);
  return piVar1;
}


