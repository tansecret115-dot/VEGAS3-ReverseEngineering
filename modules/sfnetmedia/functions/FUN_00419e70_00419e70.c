/* Module: sfnetmedia.dll
   Function: FUN_00419e70
   Address: 00419e70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00419e70(HMODULE param_1)

{
  int iVar1;
  
  FUN_0042e480();
  FUN_0042e490();
  DAT_00441d38 = FUN_00419650();
  DAT_00441d58 = param_1;
  DAT_00441d54 = FUN_00419d40(0);
  DAT_00441fd0 = 100;
  DAT_00441fc4 = GetModuleHandleA((LPCSTR)0x0);
  _DAT_00441fc8 = 0;
  _DAT_00441fd4 = 0;
  FUN_0042d690();
  FUN_0042cf20(1);
  iVar1 = FUN_00418f10();
  if (-1 < iVar1) {
    iVar1 = FUN_004186d0(&DAT_00441d60,param_1,0,0);
    if (-1 < iVar1) {
      FUN_00418f20(DAT_00441d60,&PTR_s_The_reason_for_the_error_could_n_0043f584,0x1a9,4000);
      FUN_004188a0((uint *)0x0,0);
    }
  }
  FUN_0042e4a0();
  return -1 < iVar1;
}


