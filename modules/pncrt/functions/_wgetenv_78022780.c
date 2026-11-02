/* Module: pncrt.dll
   Function: _wgetenv
   Address: 78022780
   Source: Ghidra pseudocode (Stage 10 batch) */


wchar_t * __cdecl _wgetenv(wchar_t *_VarName)

{
  wchar_t *pwVar1;
  
                    /* 0x22780  531  _wgetenv */
  _lock(0xc);
  pwVar1 = (wchar_t *)FUN_780227b0(_VarName);
  _unlock(0xc);
  return pwVar1;
}


