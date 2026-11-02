/* Module: pncrt.dll
   Function: iswpunct
   Address: 78017750
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl iswpunct(wint_t _C)

{
  int iVar1;
  
                    /* 0x17750  654  iswpunct */
  iVar1 = iswctype(_C,0x10);
  return iVar1;
}


