/* Module: aviplug.dll
   Function: FUN_5f982cb0
   Address: 5f982cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_5f982cb0(HMODULE param_1)

{
  int iVar1;
  
  FUN_5f9c53c0();
  FUN_5f9c53d0();
  DAT_5f9f5950 = FUN_5f982490();
  DAT_5f9f5970 = param_1;
  DAT_5f9f596c = FUN_5f982b80(0);
  DAT_5f9f5be8 = 100;
  DAT_5f9f5bdc = GetModuleHandleA((LPCSTR)0x0);
  _DAT_5f9f5be0 = 0;
  _DAT_5f9f5bec = 0;
  FUN_5f9c2d90();
  FUN_5f9c4740(1);
  iVar1 = FUN_5f981d50();
  if (-1 < iVar1) {
    iVar1 = FUN_5f981510(&DAT_5f9f5978,param_1,0,0);
    if (-1 < iVar1) {
      FUN_5f981d60(DAT_5f9f5978,&PTR_s_The_reason_for_the_error_could_n_5f9f2e74,0x1a9,4000);
      FUN_5f9816e0((uint *)0x0,0);
    }
  }
  FUN_5f9c53e0();
  return -1 < iVar1;
}


