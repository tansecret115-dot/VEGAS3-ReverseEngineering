/* Module: pncrt.dll
   Function: abort
   Address: 7800cda0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl abort(void)

{
                    /* 0xcda0  574  abort */
  FUN_78008d80((undefined *)0xa);
  raise(0x16);
                    /* WARNING: Subroutine does not return */
  _exit(3);
}


