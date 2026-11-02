/* Module: pncrt.dll
   Function: srand
   Address: 78023330
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl srand(uint _Seed)

{
  DWORD *pDVar1;
  
                    /* 0x23330  702  srand */
  pDVar1 = FUN_78009cc0();
  pDVar1[5] = _Seed;
  return;
}


