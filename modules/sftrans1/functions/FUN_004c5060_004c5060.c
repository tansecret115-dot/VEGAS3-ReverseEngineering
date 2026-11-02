/* Module: sftrans1.dll
   Function: FUN_004c5060
   Address: 004c5060
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_004c5060(undefined4 param_1)

{
  int iVar1;
  
  FUN_00508f70();
  FUN_00508f80();
  DAT_0057b860 = FUN_004c4840();
  DAT_0057b880 = param_1;
  DAT_0057b87c = FUN_004c4f30(0);
  DAT_0057baf8 = 100;
  DAT_0057baec = GetModuleHandleA((LPCSTR)0x0);
  _DAT_0057baf0 = 0;
  _DAT_0057bafc = 0;
  FUN_00508180(param_1);
  FUN_004e5730(1);
  iVar1 = FUN_004ca300();
  if (-1 < iVar1) {
    iVar1 = FUN_004c9ac0(&DAT_0057b888,param_1,0,0);
    if (-1 < iVar1) {
      FUN_004ca310(DAT_0057b888,&PTR_s_The_reason_for_the_error_could_n_00566bc9_0xf_00575a10,0x1a9,
                   4000);
      FUN_004c9c90(0,0);
    }
  }
  FUN_00508f90();
  return -1 < iVar1;
}


