/* Module: pncrt.dll
   Function: _loaddll
   Address: 7801b470
   Source: Ghidra pseudocode (Stage 10 batch) */


intptr_t __cdecl _loaddll(char *_Filename)

{
  HMODULE pHVar1;
  
                    /* 0x1b470  325  _loaddll */
  pHVar1 = LoadLibraryA(_Filename);
  return (intptr_t)pHVar1;
}


