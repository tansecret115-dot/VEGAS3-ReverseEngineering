/* Module: vegas30k.dll
   Function: FUN_01056320
   Address: 01056320
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_01056320(undefined4 param_1)

{
  int iVar1;
  
  FUN_010c6530();
  FUN_010c6540();
  DAT_0120e5a0 = _SfIsWin95_0();
  DAT_0120e5c0 = param_1;
  DAT_0120e5bc = _SfGetCPUSupport_4(0);
  DAT_0120e838 = 100;
  DAT_0120e82c = GetModuleHandleA((LPCSTR)0x0);
  _DAT_0120e830 = 0;
  DAT_0120e83c = 0;
  FUN_010fe5b0(param_1);
  FUN_010fb5b0(1);
  iVar1 = FUN_010c55a0();
  if (-1 < iVar1) {
    iVar1 = _SfLang_Open_16(&DAT_0120e5c8,param_1,0,0);
    if (-1 < iVar1) {
      _SfLang_AddStringTable_16
                (DAT_0120e5c8,&PTR_s_The_reason_for_the_error_could_n_01205950,0x1a9,4000);
      _SfLang_GetInternationals_8(0,0);
    }
  }
  _SfTimer_LateInitialize_0();
  return -1 < iVar1;
}


