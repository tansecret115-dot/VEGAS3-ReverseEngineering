/* Module: aifplug.dll
   Function: FUN_5fbd9dc0
   Address: 5fbd9dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5fbd9dc0(HMODULE param_1)

{
  LPCSTR pCVar1;
  CHAR local_104 [260];
  
  _DAT_5fc098fc = 0;
  GetModuleFileNameA(param_1,local_104,0x104);
  pCVar1 = FUN_5fbf1140(local_104);
  _mbscpy((uchar *)(pCVar1 + 1),"LNG");
  LoadLibraryA(local_104);
  return;
}


