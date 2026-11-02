/* Module: sfcdi.dll
   Function: FUN_5bf28650
   Address: 5bf28650
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5bf28650(HMODULE param_1)

{
  LPCSTR pCVar1;
  CHAR local_104 [260];
  
  _DAT_5bf76064 = 0;
  GetModuleFileNameA(param_1,local_104,0x104);
  pCVar1 = FUN_5bf23120(local_104);
  _mbscpy((uchar *)(pCVar1 + 1),"LNG");
  LoadLibraryA(local_104);
  return;
}


