/* Module: sftrkfx1.dll
   Function: FUN_5cbd5de0
   Address: 5cbd5de0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5cbd5de0(HMODULE param_1)

{
  LPCSTR pCVar1;
  CHAR local_104 [260];
  
  _DAT_5cc114e4 = 0;
  GetModuleFileNameA(param_1,local_104,0x104);
  pCVar1 = FUN_5cbe22f0(local_104);
  _mbscpy((uchar *)(pCVar1 + 1),"LNG");
  LoadLibraryA(local_104);
  return;
}


