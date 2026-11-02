/* Module: sfpagepeel.dll
   Function: FUN_00427f20
   Address: 00427f20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00427f20(HMODULE param_1)

{
  LPCSTR pCVar1;
  CHAR local_104 [260];
  
  _DAT_0047d9dc = 0;
  GetModuleFileNameA(param_1,local_104,0x104);
  pCVar1 = FUN_0043bd90(local_104);
  _mbscpy((uchar *)(pCVar1 + 1),"LNG");
  LoadLibraryA(local_104);
  return;
}


