/* Module: pncrt.dll
   Function: _endthread
   Address: 78009a50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl _endthread(void)

{
  DWORD *pDVar1;
  
                    /* 0x9a50  206  _endthread */
  if (PTR_FUN_78040d10 != (undefined *)0x0) {
    (*(code *)PTR_FUN_78040d10)();
  }
  pDVar1 = FUN_78009cc0();
  if (pDVar1 == (DWORD *)0x0) {
    _amsg_exit(0x10);
  }
  if ((HANDLE)pDVar1[1] != (HANDLE)0xffffffff) {
    CloseHandle((HANDLE)pDVar1[1]);
  }
  FUN_78009d40(pDVar1);
                    /* WARNING: Subroutine does not return */
  ExitThread(0);
}


