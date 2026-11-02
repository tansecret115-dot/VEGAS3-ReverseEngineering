/* Module: sfcd.cdd
   Function: FUN_0041eba0
   Address: 0041eba0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0041eba0(HMODULE param_1)

{
  int iVar1;
  
  FUN_00425160();
  FUN_00425170();
  DAT_00441908 = FUN_0041e380();
  DAT_00441928 = param_1;
  DAT_00441924 = FUN_0041ea70(0);
  _DAT_00441ba0 = 100;
  _DAT_00441b94 = GetModuleHandleA((LPCSTR)0x0);
  _DAT_00441b98 = 0;
  _DAT_00441ba4 = 0;
  FUN_00422b30();
  FUN_004244e0(1);
  iVar1 = FUN_00426cc0();
  if (-1 < iVar1) {
    iVar1 = FUN_00426480(&DAT_00441930,param_1,0,0);
    if (-1 < iVar1) {
      FUN_00426cd0(DAT_00441930,&PTR_s_The_reason_for_the_error_could_n_00440ab8,0x1a9,4000);
      FUN_00426650((uint *)0x0,0);
    }
  }
  FUN_00425180();
  return -1 < iVar1;
}


