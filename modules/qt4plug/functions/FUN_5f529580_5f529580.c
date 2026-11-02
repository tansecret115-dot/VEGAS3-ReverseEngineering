/* Module: qt4plug.dll
   Function: FUN_5f529580
   Address: 5f529580
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_5f529580(HMODULE param_1)

{
  int iVar1;
  
  FUN_5f549d60();
  FUN_5f549d70();
  DAT_5f5a4130 = FUN_5f528d60();
  DAT_5f5a4150 = param_1;
  DAT_5f5a414c = FUN_5f529450(0);
  _DAT_5f5a43c8 = 100;
  _DAT_5f5a43bc = GetModuleHandleA((LPCSTR)0x0);
  _DAT_5f5a43c0 = 0;
  _DAT_5f5a43cc = 0;
  FUN_5f547730();
  FUN_5f5490e0(1);
  iVar1 = FUN_5f528620();
  if (-1 < iVar1) {
    iVar1 = FUN_5f527de0(&DAT_5f5a4158,param_1,0,0);
    if (-1 < iVar1) {
      FUN_5f528630(DAT_5f5a4158,&PTR_s_The_reason_for_the_error_could_n_5f5a2d38,0x1a9,4000);
      FUN_5f527fb0((uint *)0x0,0);
    }
  }
  FUN_5f549d80();
  return -1 < iVar1;
}


