/* Module: mp3plug.dll
   Function: FUN_5f69fd40
   Address: 5f69fd40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_5f69fd40(HMODULE param_1)

{
  int iVar1;
  
  FUN_5f6bfbf0();
  FUN_5f6bfc00();
  DAT_5f74d460 = FUN_5f69f520();
  DAT_5f74d480 = param_1;
  DAT_5f74d47c = FUN_5f69fc10(0);
  _DAT_5f74d6f8 = 100;
  _DAT_5f74d6ec = GetModuleHandleA((LPCSTR)0x0);
  _DAT_5f74d6f0 = 0;
  _DAT_5f74d6fc = 0;
  FUN_5f6bd5c0();
  FUN_5f6bef70(1);
  iVar1 = FUN_5f69ede0();
  if (-1 < iVar1) {
    iVar1 = FUN_5f69e5a0(&DAT_5f74d488,param_1,0,0);
    if (-1 < iVar1) {
      FUN_5f69edf0(DAT_5f74d488,&PTR_s_The_reason_for_the_error_could_n_5f73d618,0x1a9,4000);
      FUN_5f69e770((uint *)0x0,0);
    }
  }
  FUN_5f6bfc10();
  return -1 < iVar1;
}


