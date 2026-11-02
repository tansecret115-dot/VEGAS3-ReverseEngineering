/* Module: vidcap30.exe
   Function: FUN_0049d5c0
   Address: 0049d5c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0049d5c0(undefined4 param_1)

{
  int iVar1;
  
  FUN_00523170();
  FUN_00523180();
  DAT_005c16b0 = _SfIsWin95_0();
  DAT_005c16d0 = param_1;
  DAT_005c16cc = _SfGetCPUSupport_4(0);
  DAT_005c1948 = 100;
  DAT_005c193c = GetModuleHandleA((LPCSTR)0x0);
  _DAT_005c1940 = 0;
  _DAT_005c194c = 0;
  FUN_00481430(param_1);
  FUN_0047d760(1);
  iVar1 = FUN_0047bc10();
  if (-1 < iVar1) {
    iVar1 = _SfLang_Open_16(&DAT_005c16d8,param_1,0,0);
    if (-1 < iVar1) {
      _SfLang_AddStringTable_16
                (DAT_005c16d8,&PTR_s_The_reason_for_the_error_could_n_005b6d3c,0x1a9,4000);
      _SfLang_GetInternationals_8(0,0);
    }
  }
  _SfTimer_LateInitialize_0();
  return -1 < iVar1;
}


