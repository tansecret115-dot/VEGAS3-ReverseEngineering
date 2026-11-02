/* Module: pncrt.dll
   Function: iswgraph
   Address: 780177a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl iswgraph(wint_t _C)

{
  int iVar1;
  
                    /* 0x177a0  651  iswgraph */
  iVar1 = iswctype(_C,0x117);
  return iVar1;
}


