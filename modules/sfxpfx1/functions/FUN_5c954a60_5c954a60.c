/* Module: sfxpfx1.dll
   Function: FUN_5c954a60
   Address: 5c954a60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_5c954a60(HMODULE param_1)

{
  int iVar1;
  
  FUN_5c96ee90();
  FUN_5c96eea0();
  DAT_5c998778 = FUN_5c954240();
  DAT_5c998798 = param_1;
  DAT_5c998794 = FUN_5c954930(0);
  DAT_5c998a10 = 100;
  DAT_5c998a04 = GetModuleHandleA((LPCSTR)0x0);
  _DAT_5c998a08 = 0;
  _DAT_5c998a14 = 0;
  FUN_5c96c860();
  FUN_5c96e210(1);
  iVar1 = FUN_5c956640();
  if (-1 < iVar1) {
    iVar1 = FUN_5c955e00(&DAT_5c9987a0,param_1,0,0);
    if (-1 < iVar1) {
      FUN_5c956650(DAT_5c9987a0,&PTR_s_The_reason_for_the_error_could_n_5c9972b0,0x1a8,4000);
      FUN_5c955fd0((uint *)0x0,0);
    }
  }
  FUN_5c96eeb0();
  return -1 < iVar1;
}


