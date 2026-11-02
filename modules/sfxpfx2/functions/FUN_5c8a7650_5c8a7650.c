/* Module: sfxpfx2.dll
   Function: FUN_5c8a7650
   Address: 5c8a7650
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5c8a7650(HMODULE param_1)

{
  LPCSTR pCVar1;
  CHAR local_104 [260];
  
  _DAT_5c8e93e4 = 0;
  GetModuleFileNameA(param_1,local_104,0x104);
  pCVar1 = FUN_5c8c1180(local_104);
  _mbscpy((uchar *)(pCVar1 + 1),"LNG");
  LoadLibraryA(local_104);
  return;
}


