/* Module: pncrt.dll
   Function: unexpected
   Address: 78007bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __cdecl unexpected(void) */

void __cdecl unexpected(void)

{
  DWORD *pDVar1;
  
                    /* 0x7bc0  47  ?unexpected@@YAXXZ */
  pDVar1 = FUN_78009cc0();
  if (pDVar1[0x19] != 0) {
    pDVar1 = FUN_78009cc0();
    (*(code *)pDVar1[0x19])();
  }
                    /* WARNING: Subroutine does not return */
  terminate();
}


