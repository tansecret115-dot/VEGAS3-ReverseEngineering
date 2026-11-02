/* Module: pncrt.dll
   Function: iswxdigit
   Address: 78017720
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl iswxdigit(wint_t _C)

{
  int iVar1;
  
                    /* 0x17720  657  iswxdigit */
  iVar1 = iswctype(_C,0x80);
  return iVar1;
}


