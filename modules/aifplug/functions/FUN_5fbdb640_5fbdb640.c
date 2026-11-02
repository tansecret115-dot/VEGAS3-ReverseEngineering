/* Module: aifplug.dll
   Function: FUN_5fbdb640
   Address: 5fbdb640
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_5fbdb640(HMODULE param_1)

{
  int iVar1;
  
  FUN_5fbf8020();
  FUN_5fbf8030();
  DAT_5fc098e8 = FUN_5fbdae20();
  DAT_5fc09908 = param_1;
  DAT_5fc09904 = FUN_5fbdb510(0);
  _DAT_5fc09b80 = 100;
  _DAT_5fc09b74 = GetModuleHandleA((LPCSTR)0x0);
  _DAT_5fc09b78 = 0;
  _DAT_5fc09b84 = 0;
  FUN_5fbf59f0();
  FUN_5fbf73a0(1);
  iVar1 = FUN_5fbda6e0();
  if (-1 < iVar1) {
    iVar1 = FUN_5fbd9ea0(&DAT_5fc09910,param_1,0,0);
    if (-1 < iVar1) {
      FUN_5fbda6f0(DAT_5fc09910,&PTR_s_The_reason_for_the_error_could_n_5fc08690,0x1a9,4000);
      FUN_5fbda070((uint *)0x0,0);
    }
  }
  FUN_5fbf8040();
  return -1 < iVar1;
}


