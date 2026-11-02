/* Module: sfs4rw.dll
   Function: FUN_004234d0
   Address: 004234d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_004234d0(HMODULE param_1)

{
  int iVar1;
  
  FUN_00427ac0();
  FUN_00427ad0();
  DAT_004a98d0 = FUN_00422cb0();
  DAT_004a98f0 = param_1;
  DAT_004a98ec = FUN_004233a0(0);
  DAT_004a9b68 = 100;
  DAT_004a9b5c = GetModuleHandleA((LPCSTR)0x0);
  _DAT_004a9b60 = 0;
  _DAT_004a9b6c = 0;
  FUN_00430220();
  FUN_00428fb0(1);
  iVar1 = FUN_0041f760();
  if (-1 < iVar1) {
    iVar1 = FUN_0041ef20(&DAT_004a98f8,param_1,0,0);
    if (-1 < iVar1) {
      FUN_0041f770(DAT_004a98f8,&PTR_s_The_reason_for_the_error_could_n_004a5dac,0x1a9,4000);
      FUN_0041f0f0((uint *)0x0,0);
    }
  }
  FUN_00427ae0();
  return -1 < iVar1;
}


