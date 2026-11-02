/* Module: pncrt.dll
   Function: iswlower
   Address: 78017700
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl iswlower(wint_t _C)

{
  int iVar1;
  
                    /* 0x17700  652  iswlower */
  iVar1 = iswctype(_C,2);
  return iVar1;
}


