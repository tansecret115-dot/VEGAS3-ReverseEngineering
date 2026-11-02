/* Module: qt4plug.dll
   Function: FUN_5f527d00
   Address: 5f527d00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f527d00(HMODULE param_1)

{
  LPCSTR pCVar1;
  CHAR local_104 [260];
  
  _DAT_5f5a4144 = 0;
  GetModuleFileNameA(param_1,local_104,0x104);
  pCVar1 = FUN_5f540bb0(local_104);
  _mbscpy((uchar *)(pCVar1 + 1),"LNG");
  LoadLibraryA(local_104);
  return;
}


