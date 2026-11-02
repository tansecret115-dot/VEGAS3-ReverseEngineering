/* Module: vegas30k.dll
   Function: FUN_010c4c80
   Address: 010c4c80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010c4c80(HMODULE param_1)

{
  int iVar1;
  CHAR local_104 [260];
  
  _DAT_0120e5b4 = 0;
  GetModuleFileNameA(param_1,local_104,0x104);
  iVar1 = _SfGetFileNameExtensionPtrA_4(local_104);
  _mbscpy((uchar *)(iVar1 + 1),"LNG");
  LoadLibraryA(local_104);
  return;
}


