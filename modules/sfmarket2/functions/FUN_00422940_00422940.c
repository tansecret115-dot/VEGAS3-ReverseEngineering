/* Module: sfmarket2.dll
   Function: FUN_00422940
   Address: 00422940
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00422940(HMODULE param_1)

{
  LPCSTR pCVar1;
  CHAR local_104 [260];
  
  _DAT_004aaeac = 0;
  GetModuleFileNameA(param_1,local_104,0x104);
  pCVar1 = FUN_00420220(local_104);
  _mbscpy((uchar *)(pCVar1 + 1),"LNG");
  LoadLibraryA(local_104);
  return;
}


