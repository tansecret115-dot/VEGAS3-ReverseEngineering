/* Module: wavplug.dll
   Function: FUN_5f399230
   Address: 5f399230
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_5f399230(HMODULE param_1)

{
  int iVar1;
  
  FUN_5f3b74a0();
  FUN_5f3b74b0();
  DAT_5f3db358 = FUN_5f398a10();
  DAT_5f3db378 = param_1;
  DAT_5f3db374 = FUN_5f399100(0);
  DAT_5f3db5f0 = 100;
  DAT_5f3db5e4 = GetModuleHandleA((LPCSTR)0x0);
  _DAT_5f3db5e8 = 0;
  _DAT_5f3db5f4 = 0;
  FUN_5f3b4e70();
  FUN_5f3b6820(1);
  iVar1 = FUN_5f3982d0();
  if (-1 < iVar1) {
    iVar1 = FUN_5f397a90(&DAT_5f3db380,param_1,0,0);
    if (-1 < iVar1) {
      FUN_5f3982e0(DAT_5f3db380,&PTR_s_The_reason_for_the_error_could_n_5f3d9f90,0x1a9,4000);
      FUN_5f397c60((uint *)0x0,0);
    }
  }
  FUN_5f3b74c0();
  return -1 < iVar1;
}


