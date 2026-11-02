/* Module: pncrt.dll
   Function: iswalpha
   Address: 780176d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl iswalpha(wint_t _C)

{
  int iVar1;
  
                    /* 0x176d0  646  iswalpha */
  iVar1 = iswctype(_C,0x103);
  return iVar1;
}


