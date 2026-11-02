/* Module: oggplug.dll
   Function: FUN_0040c940
   Address: 0040c940
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0040c940(HMODULE param_1)

{
  int iVar1;
  
  FUN_0041f7e0();
  FUN_0041f7f0();
  DAT_00510e70 = FUN_0040c120();
  DAT_00510e90 = param_1;
  DAT_00510e8c = FUN_0040c810(0);
  _DAT_00511108 = 100;
  _DAT_005110fc = GetModuleHandleA((LPCSTR)0x0);
  _DAT_00511100 = 0;
  _DAT_0051110c = 0;
  FUN_0041d1b0();
  FUN_0041eb60(1);
  iVar1 = FUN_0040b9e0();
  if (-1 < iVar1) {
    iVar1 = FUN_0040b1a0(&DAT_00510e98,param_1,0,0);
    if (-1 < iVar1) {
      FUN_0040b9f0(DAT_00510e98,&PTR_s_The_reason_for_the_error_could_n_00450160,0x1a8,4000);
      FUN_0040b370((uint *)0x0,0);
    }
  }
  FUN_0041f800();
  return -1 < iVar1;
}


