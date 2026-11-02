/* Module: vidpcore.dll
   Function: FUN_5deb7f50
   Address: 5deb7f50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5deb7f50(HMODULE param_1)

{
  int iVar1;
  CHAR local_104 [260];
  
  _DAT_5df42ec4 = 0;
  GetModuleFileNameA(param_1,local_104,0x104);
  iVar1 = FUN_5deda860(local_104);
  _mbscpy((uchar *)(iVar1 + 1),"LNG");
  LoadLibraryA(local_104);
  return;
}


