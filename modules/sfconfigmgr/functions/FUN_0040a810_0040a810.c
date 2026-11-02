/* Module: sfconfigmgr.dll
   Function: FUN_0040a810
   Address: 0040a810
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0040a810(HMODULE param_1)

{
  int iVar1;
  
  FUN_00414f30();
  FUN_00414f40();
  DAT_004230a8 = FUN_00409ff0();
  DAT_004230c8 = param_1;
  DAT_004230c4 = FUN_0040a6e0(0);
  _DAT_00423340 = 100;
  _DAT_00423334 = GetModuleHandleA((LPCSTR)0x0);
  _DAT_00423338 = 0;
  _DAT_00423344 = 0;
  FUN_00414140();
  FUN_00411b20(1);
  iVar1 = FUN_004098b0();
  if (-1 < iVar1) {
    iVar1 = FUN_00409070(&DAT_004230d0,param_1,0,0);
    if (-1 < iVar1) {
      FUN_004098c0(DAT_004230d0,&PTR_s_The_reason_for_the_error_could_n_004221cc,0x1a9,4000);
      FUN_00409240((uint *)0x0,0);
    }
  }
  FUN_00414f50();
  return -1 < iVar1;
}


