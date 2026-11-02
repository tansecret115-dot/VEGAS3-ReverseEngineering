/* Module: pncrt.dll
   Function: _endthreadex
   Address: 78009bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl _endthreadex(uint _Retval)

{
  DWORD *pDVar1;
  
                    /* 0x9bd0  207  _endthreadex */
  if (PTR_FUN_78040d10 != (undefined *)0x0) {
    (*(code *)PTR_FUN_78040d10)();
  }
  pDVar1 = FUN_78009cc0();
  if (pDVar1 == (DWORD *)0x0) {
    _amsg_exit(0x10);
  }
  FUN_78009d40(pDVar1);
                    /* WARNING: Subroutine does not return */
  ExitThread(_Retval);
}


