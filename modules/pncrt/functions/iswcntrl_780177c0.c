/* Module: pncrt.dll
   Function: iswcntrl
   Address: 780177c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl iswcntrl(wint_t _C)

{
  int iVar1;
  
                    /* 0x177c0  648  iswcntrl */
  iVar1 = iswctype(_C,0x20);
  return iVar1;
}


