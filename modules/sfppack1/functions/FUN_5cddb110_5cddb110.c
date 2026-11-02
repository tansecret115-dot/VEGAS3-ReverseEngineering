/* Module: sfppack1.dll
   Function: FUN_5cddb110
   Address: 5cddb110
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_5cddb110(HMODULE param_1)

{
  int iVar1;
  
  FUN_5cdf5540();
  FUN_5cdf5550();
  DAT_5ce23800 = FUN_5cdda8f0();
  DAT_5ce23820 = param_1;
  DAT_5ce2381c = FUN_5cddafe0(0);
  DAT_5ce23a98 = 100;
  DAT_5ce23a8c = GetModuleHandleA((LPCSTR)0x0);
  _DAT_5ce23a90 = 0;
  _DAT_5ce23a9c = 0;
  FUN_5cdf4750();
  FUN_5cdf3fe0(1);
  iVar1 = FUN_5cddccf0();
  if (-1 < iVar1) {
    iVar1 = FUN_5cddc4b0(&DAT_5ce23828,param_1,0,0);
    if (-1 < iVar1) {
      FUN_5cddcd00(DAT_5ce23828,&PTR_s_The_reason_for_the_error_could_n_5ce22340,0x1a8,4000);
      FUN_5cddc680((uint *)0x0,0);
    }
  }
  FUN_5cdf5560();
  return -1 < iVar1;
}


