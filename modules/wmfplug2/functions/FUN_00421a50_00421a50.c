/* Module: wmfplug2.dll
   Function: FUN_00421a50
   Address: 00421a50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00421a50(HMODULE param_1)

{
  int iVar1;
  
  FUN_0044b410();
  FUN_0044b420();
  DAT_00489e08 = FUN_00421230();
  DAT_00489e28 = param_1;
  DAT_00489e24 = FUN_00421920(0);
  DAT_0048a0a0 = 100;
  DAT_0048a094 = GetModuleHandleA((LPCSTR)0x0);
  _DAT_0048a098 = 0;
  _DAT_0048a0a4 = 0;
  FUN_00448de0();
  FUN_0044a790(1);
  iVar1 = FUN_00420af0();
  if (-1 < iVar1) {
    iVar1 = FUN_004202b0(&DAT_00489e30,param_1,0,0);
    if (-1 < iVar1) {
      FUN_00420b00(DAT_00489e30,&PTR_s_The_reason_for_the_error_could_n_00488c00,0x1a9,4000);
      FUN_00420480((uint *)0x0,0);
    }
  }
  FUN_0044b430();
  return -1 < iVar1;
}


