/* Module: pncrt.dll
   Function: iswprint
   Address: 78017780
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl iswprint(wint_t _C)

{
  int iVar1;
  
                    /* 0x17780  653  iswprint */
  iVar1 = iswctype(_C,0x157);
  return iVar1;
}


