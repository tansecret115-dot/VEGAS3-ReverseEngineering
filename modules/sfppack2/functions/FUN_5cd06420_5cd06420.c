/* Module: sfppack2.dll
   Function: FUN_5cd06420
   Address: 5cd06420
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_5cd06420(HMODULE param_1)

{
  int iVar1;
  
  FUN_5cd2e4c0();
  FUN_5cd2e4d0();
  DAT_5cd67a10 = FUN_5cd05c00();
  DAT_5cd67a30 = param_1;
  DAT_5cd67a2c = FUN_5cd062f0(0);
  DAT_5cd67ca8 = 100;
  DAT_5cd67c9c = GetModuleHandleA((LPCSTR)0x0);
  _DAT_5cd67ca0 = 0;
  _DAT_5cd67cac = 0;
  FUN_5cd2d6d0();
  FUN_5cd2ce50(1);
  iVar1 = FUN_5cd08000();
  if (-1 < iVar1) {
    iVar1 = FUN_5cd077c0(&DAT_5cd67a38,param_1,0,0);
    if (-1 < iVar1) {
      FUN_5cd08010(DAT_5cd67a38,&PTR_s_The_reason_for_the_error_could_n_5cd628c0,0x1a8,4000);
      FUN_5cd07990((uint *)0x0,0);
    }
  }
  FUN_5cd2e4e0();
  return -1 < iVar1;
}


