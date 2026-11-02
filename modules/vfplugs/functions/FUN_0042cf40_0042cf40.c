/* Module: vfplugs.dll
   Function: FUN_0042cf40
   Address: 0042cf40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042cf40(HMODULE param_1)

{
  LPCSTR pCVar1;
  CHAR local_104 [260];
  
  _DAT_00494a64 = 0;
  GetModuleFileNameA(param_1,local_104,0x104);
  pCVar1 = FUN_004516e0(local_104);
  _mbscpy((uchar *)(pCVar1 + 1),"LNG");
  LoadLibraryA(local_104);
  return;
}


