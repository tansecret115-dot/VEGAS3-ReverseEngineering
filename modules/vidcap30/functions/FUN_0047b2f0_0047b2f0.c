/* Module: vidcap30.exe
   Function: FUN_0047b2f0
   Address: 0047b2f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047b2f0(HMODULE param_1)

{
  int iVar1;
  CHAR local_104 [260];
  
  _DAT_005c16c4 = 0;
  GetModuleFileNameA(param_1,local_104,0x104);
  iVar1 = _SfGetFileNameExtensionPtrA_4(local_104);
  _mbscpy((uchar *)(iVar1 + 1),(uchar *)&PTR_LAB_00593b14);
  LoadLibraryA(local_104);
  return;
}


