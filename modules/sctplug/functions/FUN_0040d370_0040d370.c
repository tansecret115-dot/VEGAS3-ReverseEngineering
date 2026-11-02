/* Module: sctplug.dll
   Function: FUN_0040d370
   Address: 0040d370
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d370(HMODULE param_1)

{
  LPCSTR pCVar1;
  CHAR local_104 [260];
  
  _DAT_0043cd1c = 0;
  GetModuleFileNameA(param_1,local_104,0x104);
  pCVar1 = FUN_0040f210(local_104);
  _mbscpy((uchar *)(pCVar1 + 1),"LNG");
  LoadLibraryA(local_104);
  return;
}


