/* Module: pncrt.dll
   Function: __fpecode
   Address: 7800e150
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __cdecl __fpecode(void)

{
  DWORD *pDVar1;
  
                    /* 0xe150  100  __fpecode */
  pDVar1 = FUN_78009cc0();
  return (int *)(pDVar1 + 0x16);
}


