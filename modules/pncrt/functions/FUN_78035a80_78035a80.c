/* Module: pncrt.dll
   Function: FUN_78035a80
   Address: 78035a80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_78035a80(int param_1)

{
  int *piVar1;
  
  if (param_1 == 1) {
    piVar1 = _errno();
    *piVar1 = 0x21;
  }
  else if ((1 < param_1) && (param_1 < 4)) {
    piVar1 = _errno();
    *piVar1 = 0x22;
    return;
  }
  return;
}


