/* Module: mcplug.dll
   Function: FUN_004196e0
   Address: 004196e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004196e0(HMODULE param_1)

{
  LPCSTR pCVar1;
  CHAR local_104 [260];
  
  _DAT_00487ec4 = 0;
  GetModuleFileNameA(param_1,local_104,0x104);
  pCVar1 = FUN_0042dd90(local_104);
  _mbscpy((uchar *)(pCVar1 + 1),"LNG");
  LoadLibraryA(local_104);
  return;
}


