/* Module: g2plug.dll
   Function: FUN_5f819290
   Address: 5f819290
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_5f819290(HMODULE param_1)

{
  int iVar1;
  
  FUN_5f83fa50();
  FUN_5f83fa60();
  DAT_5f8774f8 = FUN_5f818a70();
  DAT_5f877518 = param_1;
  DAT_5f877514 = FUN_5f819160(0);
  DAT_5f877790 = 100;
  DAT_5f877784 = GetModuleHandleA((LPCSTR)0x0);
  _DAT_5f877788 = 0;
  _DAT_5f877794 = 0;
  FUN_5f83d420();
  FUN_5f83edd0(1);
  iVar1 = FUN_5f818330();
  if (-1 < iVar1) {
    iVar1 = FUN_5f817af0(&DAT_5f877520,param_1,0,0);
    if (-1 < iVar1) {
      FUN_5f818340(DAT_5f877520,&PTR_s_The_reason_for_the_error_could_n_5f8763f8,0x1a8,4000);
      FUN_5f817cc0((uint *)0x0,0);
    }
  }
  FUN_5f83fa70();
  return -1 < iVar1;
}


