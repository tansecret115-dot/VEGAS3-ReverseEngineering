/* Module: pncrt.dll
   Function: _getdllprocaddr
   Address: 7801b430
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _getdllprocaddr(void)

{
  FARPROC pFVar1;
  HMODULE in_stack_00000004;
  LPCSTR in_stack_00000008;
  LPCSTR in_stack_0000000c;
  
                    /* 0x1b430  262  _getdllprocaddr */
  if (in_stack_00000008 == (LPCSTR)0x0) {
    if ((int)in_stack_0000000c < 0x10000) {
      pFVar1 = GetProcAddress(in_stack_00000004,in_stack_0000000c);
      return (int)pFVar1;
    }
  }
  else if (in_stack_0000000c == (LPCSTR)0xffffffff) {
    pFVar1 = GetProcAddress(in_stack_00000004,in_stack_00000008);
    return (int)pFVar1;
  }
  return 0;
}


