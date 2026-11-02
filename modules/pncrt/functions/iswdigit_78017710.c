/* Module: pncrt.dll
   Function: iswdigit
   Address: 78017710
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl iswdigit(wint_t _C)

{
  int iVar1;
  
                    /* 0x17710  650  iswdigit */
  iVar1 = iswctype(_C,4);
  return iVar1;
}


