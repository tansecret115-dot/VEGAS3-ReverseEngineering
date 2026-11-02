/* Module: mpegin.dll
   Function: FUN_1000ed3a
   Address: 1000ed3a
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1000ed3a(int param_1)

{
  DWORD *pDVar1;
  
  if (param_1 == 1) {
    pDVar1 = FUN_10011c3e();
    *pDVar1 = 0x21;
  }
  else if ((1 < param_1) && (param_1 < 4)) {
    pDVar1 = FUN_10011c3e();
    *pDVar1 = 0x22;
    return;
  }
  return;
}


