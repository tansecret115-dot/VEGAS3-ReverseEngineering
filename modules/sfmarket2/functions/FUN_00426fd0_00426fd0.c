/* Module: sfmarket2.dll
   Function: FUN_00426fd0
   Address: 00426fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00426fd0(HMODULE param_1)

{
  int iVar1;
  
  FUN_004420a0();
  FUN_004420b0();
  DAT_004aae98 = FUN_004267b0();
  DAT_004aaeb8 = param_1;
  DAT_004aaeb4 = FUN_00426ea0(0);
  _DAT_004ab130 = 100;
  _DAT_004ab124 = GetModuleHandleA((LPCSTR)0x0);
  _DAT_004ab128 = 0;
  _DAT_004ab134 = 0;
  FUN_004412b0();
  FUN_00440b40(1);
  iVar1 = FUN_00423260();
  if (-1 < iVar1) {
    iVar1 = FUN_00422a20(&DAT_004aaec0,param_1,0,0);
    if (-1 < iVar1) {
      FUN_00423270(DAT_004aaec0,&PTR_s_The_reason_for_the_error_could_n_004a762c,0x1a9,4000);
      FUN_00422bf0((uint *)0x0,0);
    }
  }
  FUN_004420c0();
  return -1 < iVar1;
}


