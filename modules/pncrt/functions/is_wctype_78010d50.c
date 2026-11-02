/* Module: pncrt.dll
   Function: is_wctype
   Address: 78010d50
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl is_wctype(wint_t _C,wctype_t _Type)

{
  int iVar1;
  
                    /* 0x10d50  633  is_wctype */
  iVar1 = iswctype(_C,_Type);
  return iVar1;
}


