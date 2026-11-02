/* Module: pncrt.dll
   Function: _getch
   Address: 7801e2f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _getch(void)

{
  uint uVar1;
  
                    /* 0x1e2f0  257  _getch */
  _lock(8);
  uVar1 = FUN_7801e330();
  _unlock(8);
  return uVar1;
}


