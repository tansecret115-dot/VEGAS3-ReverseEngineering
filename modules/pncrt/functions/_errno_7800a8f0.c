/* Module: pncrt.dll
   Function: _errno
   Address: 7800a8f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __cdecl _errno(void)

{
  DWORD *pDVar1;
  
                    /* 0xa8f0  210  _errno */
  pDVar1 = FUN_78009cc0();
  return (int *)(pDVar1 + 2);
}


