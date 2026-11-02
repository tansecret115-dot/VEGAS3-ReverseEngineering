/* Module: vfplugs.dll
   Function: FUN_00418190
   Address: 00418190
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00418190(HMODULE param_1)

{
  int iVar1;
  
  FUN_0044f000();
  FUN_0044f010();
  DAT_00494a50 = FUN_00417970();
  DAT_00494a70 = param_1;
  DAT_00494a6c = FUN_00418060(0);
  DAT_00494ce8 = 100;
  DAT_00494cdc = GetModuleHandleA((LPCSTR)0x0);
  _DAT_00494ce0 = 0;
  _DAT_00494cec = 0;
  FUN_0044c9d0();
  FUN_0044e380(1);
  iVar1 = FUN_0042d860();
  if (-1 < iVar1) {
    iVar1 = FUN_0042d020(&DAT_00494a78,param_1,0,0);
    if (-1 < iVar1) {
      FUN_0042d870(DAT_00494a78,&PTR_s_The_reason_for_the_error_could_n_004933b8,0x1a9,4000);
      FUN_0042d1f0((uint *)0x0,0);
    }
  }
  FUN_0044f020();
  return -1 < iVar1;
}


