/* Module: pncrt.dll
   Function: __wgetmainargs
   Address: 78008f60
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl
__wgetmainargs(int *_Argc,wchar_t ***_Argv,wchar_t ***_Env,int _DoWildCard,_startupinfo *_StartInfo)

{
                    /* 0x8f60  150  __wgetmainargs */
  FUN_78009cc0();
  DAT_780421d0 = _StartInfo->newmode;
  if (_DoWildCard == 0) {
    FUN_7800a200();
  }
  else {
    FUN_780088c0();
  }
  *_Argc = __argc;
  *_Argv = __wargv;
  if (_wenviron == (wchar_t **)0x0) {
    FUN_7800ce50();
  }
  *_Env = _wenviron;
  return (int)_Env;
}


