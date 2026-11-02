/* Module: gifplug.dll
   Function: FUN_5f6c1000
   Address: 5f6c1000
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_5f6c1000(HMODULE param_1)

{
  int iVar1;
  
  _DAT_5f70be64 = 0;
  _DAT_5f70be68 = 0;
  DAT_5f70be60 = param_1;
  DAT_5f70be6c = 0;
  FUN_5f6cdbb0(param_1);
  iVar1 = FUN_5f6cc410(&DAT_5f70be6c,param_1,0,0);
  FUN_5f6cb170();
  return -1 < iVar1;
}


