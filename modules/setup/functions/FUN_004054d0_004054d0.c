/* Module: Setup.exe
   Function: FUN_004054d0
   Address: 004054d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004054d0(HMODULE param_1)

{
  LPCSTR pCVar1;
  CHAR local_104 [260];
  
  _DAT_00448dec = 0;
  GetModuleFileNameA(param_1,local_104,0x104);
  pCVar1 = _SfGetFileNameExtensionPtrA_4(local_104);
  _mbscpy((uchar *)(pCVar1 + 1),"LNG");
  LoadLibraryA(local_104);
  return;
}


