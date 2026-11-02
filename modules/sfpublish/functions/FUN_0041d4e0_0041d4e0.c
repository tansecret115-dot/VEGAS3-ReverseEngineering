/* Module: sfpublish.dll
   Function: FUN_0041d4e0
   Address: 0041d4e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0041d4e0(HMODULE param_1)

{
  int iVar1;
  
  FUN_0042e990();
  FUN_0042e9a0();
  DAT_00441c50 = FUN_0041ccc0();
  DAT_00441c70 = param_1;
  DAT_00441c6c = FUN_0041d3b0(0);
  DAT_00441ee8 = 100;
  DAT_00441edc = GetModuleHandleA((LPCSTR)0x0);
  _DAT_00441ee0 = 0;
  _DAT_00441eec = 0;
  FUN_0042dba0();
  FUN_0042d430(1);
  iVar1 = FUN_0041c580();
  if (-1 < iVar1) {
    iVar1 = FUN_0041bd40(&DAT_00441c78,param_1,0,0);
    if (-1 < iVar1) {
      FUN_0041c590(DAT_00441c78,&PTR_s_The_reason_for_the_error_could_n_0043f574,0x1a9,4000);
      FUN_0041bf10((uint *)0x0,0);
    }
  }
  FUN_0042e9b0();
  return -1 < iVar1;
}


