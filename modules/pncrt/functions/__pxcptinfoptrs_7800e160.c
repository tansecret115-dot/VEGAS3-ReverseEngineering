/* Module: pncrt.dll
   Function: __pxcptinfoptrs
   Address: 7800e160
   Source: Ghidra pseudocode (Stage 10 batch) */


void ** __cdecl __pxcptinfoptrs(void)

{
  DWORD *pDVar1;
  
                    /* 0xe160  140  __pxcptinfoptrs */
  pDVar1 = FUN_78009cc0();
  return (void **)(pDVar1 + 0x15);
}


