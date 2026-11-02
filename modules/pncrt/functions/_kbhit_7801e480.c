/* Module: pncrt.dll
   Function: _kbhit
   Address: 7801e480
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _kbhit(void)

{
  int iVar1;
  
                    /* 0x1e480  323  _kbhit */
  _lock(8);
  iVar1 = FUN_7801e4a0();
  _unlock(8);
  return iVar1;
}


