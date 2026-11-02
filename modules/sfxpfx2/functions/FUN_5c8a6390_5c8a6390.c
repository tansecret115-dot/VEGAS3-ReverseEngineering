/* Module: sfxpfx2.dll
   Function: FUN_5c8a6390
   Address: 5c8a6390
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_5c8a6390(HMODULE param_1)

{
  int iVar1;
  
  FUN_5c8c07c0();
  FUN_5c8c07d0();
  DAT_5c8e93d0 = FUN_5c8a5b70();
  DAT_5c8e93f0 = param_1;
  DAT_5c8e93ec = FUN_5c8a6260(0);
  DAT_5c8e9668 = 100;
  DAT_5c8e965c = GetModuleHandleA((LPCSTR)0x0);
  _DAT_5c8e9660 = 0;
  _DAT_5c8e966c = 0;
  FUN_5c8be190();
  FUN_5c8bfb40(1);
  iVar1 = FUN_5c8a7f70();
  if (-1 < iVar1) {
    iVar1 = FUN_5c8a7730(&DAT_5c8e93f8,param_1,0,0);
    if (-1 < iVar1) {
      FUN_5c8a7f80(DAT_5c8e93f8,&PTR_s_The_reason_for_the_error_could_n_5c8e7ee8,0x1a8,4000);
      FUN_5c8a7900((uint *)0x0,0);
    }
  }
  FUN_5c8c07e0();
  return -1 < iVar1;
}


