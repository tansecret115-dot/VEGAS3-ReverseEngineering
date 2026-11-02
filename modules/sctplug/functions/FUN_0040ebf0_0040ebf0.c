/* Module: sctplug.dll
   Function: FUN_0040ebf0
   Address: 0040ebf0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0040ebf0(HMODULE param_1)

{
  int iVar1;
  
  FUN_0042dcf0();
  FUN_0042dd00();
  DAT_0043cd08 = FUN_0040e3d0();
  DAT_0043cd28 = param_1;
  DAT_0043cd24 = FUN_0040eac0(0);
  DAT_0043cfa0 = 100;
  DAT_0043cf94 = GetModuleHandleA((LPCSTR)0x0);
  _DAT_0043cf98 = 0;
  _DAT_0043cfa4 = 0;
  FUN_0042b6c0();
  FUN_0042d070(1);
  iVar1 = FUN_0040dc90();
  if (-1 < iVar1) {
    iVar1 = FUN_0040d450(&DAT_0043cd30,param_1,0,0);
    if (-1 < iVar1) {
      FUN_0040dca0(DAT_0043cd30,&PTR_s_The_reason_for_the_error_could_n_0043babc,0x1a8,4000);
      FUN_0040d620((uint *)0x0,0);
    }
  }
  FUN_0042dd10();
  return -1 < iVar1;
}


