/* Module: wavplug.dll
   Function: FUN_5f3979b0
   Address: 5f3979b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f3979b0(HMODULE param_1)

{
  LPCSTR pCVar1;
  CHAR local_104 [260];
  
  _DAT_5f3db36c = 0;
  GetModuleFileNameA(param_1,local_104,0x104);
  pCVar1 = FUN_5f399850(local_104);
  _mbscpy((uchar *)(pCVar1 + 1),"LNG");
  LoadLibraryA(local_104);
  return;
}


