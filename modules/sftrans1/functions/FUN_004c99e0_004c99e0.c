/* Module: sftrans1.dll
   Function: FUN_004c99e0
   Address: 004c99e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c99e0(HMODULE param_1)

{
  int iVar1;
  CHAR local_104 [260];
  
  _DAT_0057b874 = 0;
  GetModuleFileNameA(param_1,local_104,0x104);
  iVar1 = FUN_00509070(local_104);
  _mbscpy((uchar *)(iVar1 + 1),"LNG");
  LoadLibraryA(local_104);
  return;
}


