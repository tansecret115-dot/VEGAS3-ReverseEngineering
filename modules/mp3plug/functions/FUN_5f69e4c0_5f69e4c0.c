/* Module: mp3plug.dll
   Function: FUN_5f69e4c0
   Address: 5f69e4c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f69e4c0(HMODULE param_1)

{
  LPCSTR pCVar1;
  CHAR local_104 [260];
  
  _DAT_5f74d474 = 0;
  GetModuleFileNameA(param_1,local_104,0x104);
  pCVar1 = FUN_5f6b37f0(local_104);
  _mbscpy((uchar *)(pCVar1 + 1),"LNG");
  LoadLibraryA(local_104);
  return;
}


