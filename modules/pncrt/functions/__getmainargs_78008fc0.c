/* Module: pncrt.dll
   Function: __getmainargs
   Address: 78008fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl
__getmainargs(int *_Argc,char ***_Argv,char ***_Env,int _DoWildCard,_startupinfo *_StartInfo)

{
                    /* 0x8fc0  101  __getmainargs */
  FUN_78009cc0();
  DAT_780421d0 = _StartInfo->newmode;
  if (_DoWildCard == 0) {
    FUN_78009580();
  }
  else {
    FUN_780085c0();
  }
  *_Argc = __argc;
  *_Argv = __argv;
  *_Env = _environ;
  return (int)_Env;
}


