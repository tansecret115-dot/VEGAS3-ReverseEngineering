/* Module: stl2plg.dll
   Function: FUN_0040f480
   Address: 0040f480
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0040f480(HMODULE param_1)

{
  int iVar1;
  
  FUN_0042b340();
  FUN_0042b350();
  DAT_004735f8 = FUN_0040ec60();
  DAT_00473618 = param_1;
  DAT_00473614 = FUN_0040f350(0);
  _DAT_00473890 = 100;
  _DAT_00473884 = GetModuleHandleA((LPCSTR)0x0);
  _DAT_00473888 = 0;
  _DAT_00473894 = 0;
  FUN_00428d10();
  FUN_0042a6c0(1);
  iVar1 = FUN_0040e520();
  if (-1 < iVar1) {
    iVar1 = FUN_0040dce0(&DAT_00473620,param_1,0,0);
    if (-1 < iVar1) {
      FUN_0040e530(DAT_00473620,&PTR_s_The_reason_for_the_error_could_n_004710ec,0x1a9,4000);
      FUN_0040deb0((uint *)0x0,0);
    }
  }
  FUN_0042b360();
  return -1 < iVar1;
}


