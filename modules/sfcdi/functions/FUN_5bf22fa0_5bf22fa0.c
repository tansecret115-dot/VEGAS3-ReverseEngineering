/* Module: sfcdi.dll
   Function: FUN_5bf22fa0
   Address: 5bf22fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_5bf22fa0(HMODULE param_1)

{
  int iVar1;
  
  FUN_5bf451a0();
  FUN_5bf451b0();
  DAT_5bf76050 = FUN_5bf22780();
  DAT_5bf76070 = param_1;
  DAT_5bf7606c = FUN_5bf22e70(0);
  DAT_5bf762e8 = 100;
  DAT_5bf762dc = GetModuleHandleA((LPCSTR)0x0);
  _DAT_5bf762e0 = 0;
  _DAT_5bf762ec = 0;
  FUN_5bf443b0();
  FUN_5bf37470(1);
  iVar1 = FUN_5bf28f70();
  if (-1 < iVar1) {
    iVar1 = FUN_5bf28730(&DAT_5bf76078,param_1,0,0);
    if (-1 < iVar1) {
      FUN_5bf28f80(DAT_5bf76078,&PTR_s_The_reason_for_the_error_could_n_5bf64f48,0x1a9,4000);
      FUN_5bf28900((uint *)0x0,0);
    }
  }
  FUN_5bf451c0();
  return -1 < iVar1;
}


