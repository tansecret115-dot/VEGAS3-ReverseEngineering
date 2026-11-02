/* Module: Setup.exe
   Function: FUN_00404210
   Address: 00404210
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00404210(HMODULE param_1)

{
  int iVar1;
  
  FUN_00415a40();
  FUN_00415a50();
  DAT_00448dd8 = _SfIsWin95_0();
  DAT_00448df8 = param_1;
  DAT_00448df4 = _SfGetCPUSupport_4(0);
  DAT_00449070 = 100;
  DAT_00449064 = GetModuleHandleA((LPCSTR)0x0);
  _DAT_00449068 = 0;
  _DAT_00449074 = 0;
  FUN_00413410();
  FUN_00414dc0(1);
  iVar1 = FUN_00405df0();
  if (-1 < iVar1) {
    iVar1 = _SfLang_Open_16(&DAT_00448e00,param_1,0,0);
    if (-1 < iVar1) {
      _SfLang_AddStringTable_16
                (DAT_00448e00,&PTR_s_The_reason_for_the_error_could_n_00434d23_5_00443680,0x1a9,4000
                );
      _SfLang_GetInternationals_8((uint *)0x0,0);
    }
  }
  _SfTimer_LateInitialize_0();
  return -1 < iVar1;
}


