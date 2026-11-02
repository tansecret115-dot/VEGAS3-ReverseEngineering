/* Module: pncrt.dll
   Function: _putenv
   Address: 78022180
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _putenv(char *_EnvString)

{
  int iVar1;
  
                    /* 0x22180  414  _putenv */
  _lock(0xc);
  iVar1 = FUN_780221b0(_EnvString);
  _unlock(0xc);
  return iVar1;
}


