/* Module: mpgmux.dll
   Function: FUN_10010dfb
   Address: 10010dfb
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10010dfb(int param_1)

{
  DWORD *pDVar1;
  
  if (param_1 == 1) {
    pDVar1 = FUN_1000ff9f();
    *pDVar1 = 0x21;
  }
  else if ((1 < param_1) && (param_1 < 4)) {
    pDVar1 = FUN_1000ff9f();
    *pDVar1 = 0x22;
    return;
  }
  return;
}


