/* Module: pncrt.dll
   Function: iswupper
   Address: 780176f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl iswupper(wint_t _C)

{
  int iVar1;
  
                    /* 0x176f0  656  iswupper */
  iVar1 = iswctype(_C,1);
  return iVar1;
}


