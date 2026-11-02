/* Module: pncrt.dll
   Function: __doserrno
   Address: 7800a900
   Source: Ghidra pseudocode (Stage 10 batch) */


ulong * __cdecl __doserrno(void)

{
  DWORD *pDVar1;
  
                    /* 0xa900  99  __doserrno */
  pDVar1 = FUN_78009cc0();
  return pDVar1 + 3;
}


