/* Module: pncrt.dll
   Function: _wputenv
   Address: 78022a00
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _wputenv(wchar_t *_EnvString)

{
  int iVar1;
  
                    /* 0x22a00  542  _wputenv */
  _lock(0xc);
  iVar1 = FUN_78022a30(_EnvString);
  _unlock(0xc);
  return iVar1;
}


