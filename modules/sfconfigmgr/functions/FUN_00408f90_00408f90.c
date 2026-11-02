/* Module: sfconfigmgr.dll
   Function: FUN_00408f90
   Address: 00408f90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408f90(HMODULE param_1)

{
  LPCSTR pCVar1;
  CHAR local_104 [260];
  
  _DAT_004230bc = 0;
  GetModuleFileNameA(param_1,local_104,0x104);
  pCVar1 = FUN_00403a60(local_104);
  _mbscpy((uchar *)(pCVar1 + 1),"LNG");
  LoadLibraryA(local_104);
  return;
}


