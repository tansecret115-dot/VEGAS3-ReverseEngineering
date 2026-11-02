/* Module: sfppack3.dll
   Function: FUN_5cc4dc20
   Address: 5cc4dc20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5cc4dc20(HMODULE param_1)

{
  LPCSTR pCVar1;
  CHAR local_104 [260];
  
  _DAT_5cc982ec = 0;
  GetModuleFileNameA(param_1,local_104,0x104);
  pCVar1 = FUN_5cc6b890(local_104);
  _mbscpy((uchar *)(pCVar1 + 1),"LNG");
  LoadLibraryA(local_104);
  return;
}


