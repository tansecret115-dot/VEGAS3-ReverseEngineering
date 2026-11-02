/* Module: oggplug.dll
   Function: FUN_0040b0c0
   Address: 0040b0c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040b0c0(HMODULE param_1)

{
  LPCSTR pCVar1;
  CHAR local_104 [260];
  
  _DAT_00510e84 = 0;
  GetModuleFileNameA(param_1,local_104,0x104);
  pCVar1 = FUN_004188e0(local_104);
  _mbscpy((uchar *)(pCVar1 + 1),"LNG");
  LoadLibraryA(local_104);
  return;
}


