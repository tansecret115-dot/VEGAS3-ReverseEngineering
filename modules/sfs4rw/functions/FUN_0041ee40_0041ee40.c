/* Module: sfs4rw.dll
   Function: FUN_0041ee40
   Address: 0041ee40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041ee40(HMODULE param_1)

{
  LPCSTR pCVar1;
  CHAR local_104 [260];
  
  _DAT_004a98e4 = 0;
  GetModuleFileNameA(param_1,local_104,0x104);
  pCVar1 = FUN_0041c720(local_104);
  _mbscpy((uchar *)(pCVar1 + 1),"LNG");
  LoadLibraryA(local_104);
  return;
}


