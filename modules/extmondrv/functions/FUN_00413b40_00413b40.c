/* Module: extmondrv.dll
   Function: FUN_00413b40
   Address: 00413b40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00413b40(HMODULE param_1)

{
  int iVar1;
  
  FUN_00426f10();
  FUN_00426f20();
  DAT_0045b168 = FUN_00413320();
  DAT_0045b188 = param_1;
  DAT_0045b184 = FUN_00413a10(0);
  _DAT_0045b400 = 100;
  _DAT_0045b3f4 = GetModuleHandleA((LPCSTR)0x0);
  _DAT_0045b3f8 = 0;
  _DAT_0045b404 = 0;
  FUN_00426120();
  FUN_00425230(1);
  iVar1 = FUN_00412be0();
  if (-1 < iVar1) {
    iVar1 = FUN_004123a0(&DAT_0045b190,param_1,0,0);
    if (-1 < iVar1) {
      FUN_00412bf0(DAT_0045b190,&PTR_s_The_reason_for_the_error_could_n_0045a1e8,0x1a9,4000);
      FUN_00412570((uint *)0x0,0);
    }
  }
  FUN_00426f30();
  return -1 < iVar1;
}


