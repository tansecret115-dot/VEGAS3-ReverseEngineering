/* Module: pncrt.dll
   Function: _getche
   Address: 7801e310
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _getche(void)

{
  uint uVar1;
  
                    /* 0x1e310  258  _getche */
  _lock(8);
  uVar1 = FUN_7801e440();
  _unlock(8);
  return uVar1;
}


