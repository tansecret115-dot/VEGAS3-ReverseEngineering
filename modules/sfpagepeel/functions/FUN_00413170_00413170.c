/* Module: sfpagepeel.dll
   Function: FUN_00413170
   Address: 00413170
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00413170(HMODULE param_1)

{
  int iVar1;
  
  FUN_00431180();
  FUN_00431190();
  DAT_0047d9c8 = FUN_00412950();
  DAT_0047d9e8 = param_1;
  DAT_0047d9e4 = FUN_00413040(0);
  DAT_0047dc60 = 100;
  DAT_0047dc54 = GetModuleHandleA((LPCSTR)0x0);
  _DAT_0047dc58 = 0;
  _DAT_0047dc64 = 0;
  FUN_0042eb50();
  FUN_00430500(1);
  iVar1 = FUN_00428840();
  if (-1 < iVar1) {
    iVar1 = FUN_00428000(&DAT_0047d9f0,param_1,0,0);
    if (-1 < iVar1) {
      FUN_00428850(DAT_0047d9f0,&PTR_s_The_reason_for_the_error_could_n_0047c370,0x1a9,4000);
      FUN_004281d0((uint *)0x0,0);
    }
  }
  FUN_004311a0();
  return -1 < iVar1;
}


