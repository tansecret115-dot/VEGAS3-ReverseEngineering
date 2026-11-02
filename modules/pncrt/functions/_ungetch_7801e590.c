/* Module: pncrt.dll
   Function: _ungetch
   Address: 7801e590
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _ungetch(int _Ch)

{
  uint uVar1;
  
                    /* 0x1e590  486  _ungetch */
  _lock(8);
  uVar1 = FUN_7801e5c0(_Ch);
  _unlock(8);
  return uVar1;
}


