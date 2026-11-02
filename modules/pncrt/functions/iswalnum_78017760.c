/* Module: pncrt.dll
   Function: iswalnum
   Address: 78017760
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl iswalnum(wint_t _C)

{
  int iVar1;
  
                    /* 0x17760  645  iswalnum */
  iVar1 = iswctype(_C,0x107);
  return iVar1;
}


