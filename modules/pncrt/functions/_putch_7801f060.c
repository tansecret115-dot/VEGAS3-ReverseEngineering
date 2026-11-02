/* Module: pncrt.dll
   Function: _putch
   Address: 7801f060
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _putch(int _Ch)

{
  uint uVar1;
  
                    /* 0x1f060  413  _putch */
  _lock(8);
  uVar1 = FUN_7801f090(_Ch);
  _unlock(8);
  return uVar1;
}


