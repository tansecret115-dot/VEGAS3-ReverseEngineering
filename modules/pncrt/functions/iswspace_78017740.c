/* Module: pncrt.dll
   Function: iswspace
   Address: 78017740
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl iswspace(wint_t _C)

{
  int iVar1;
  
                    /* 0x17740  655  iswspace */
  iVar1 = iswctype(_C,8);
  return iVar1;
}


