/* Module: sftrkfx1.dll
   Function: FUN_5cbc1700
   Address: 5cbc1700
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_5cbc1700(HMODULE param_1)

{
  int iVar1;
  
  FUN_5cbe21f0();
  FUN_5cbe2200();
  DAT_5cc114d0 = FUN_5cbc0ee0();
  DAT_5cc114f0 = param_1;
  DAT_5cc114ec = FUN_5cbc15d0(0);
  DAT_5cc11768 = 100;
  DAT_5cc1175c = GetModuleHandleA((LPCSTR)0x0);
  _DAT_5cc11760 = 0;
  _DAT_5cc1176c = 0;
  FUN_5cbe1400();
  FUN_5cbdddd0(1);
  iVar1 = FUN_5cbd6700();
  if (-1 < iVar1) {
    iVar1 = FUN_5cbd5ec0(&DAT_5cc114f8,param_1,0,0);
    if (-1 < iVar1) {
      FUN_5cbd6710(DAT_5cc114f8,&PTR_s_The_reason_for_the_error_could_n_5cc104a4,0x1a8,4000);
      FUN_5cbd6090((uint *)0x0,0);
    }
  }
  FUN_5cbe2210();
  return -1 < iVar1;
}


