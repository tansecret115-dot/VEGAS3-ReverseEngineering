/* Module: sfppack3.dll
   Function: FUN_5cc4c960
   Address: 5cc4c960
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_5cc4c960(HMODULE param_1)

{
  int iVar1;
  
  FUN_5cc6aed0();
  FUN_5cc6aee0();
  DAT_5cc982d8 = FUN_5cc4c140();
  DAT_5cc982f8 = param_1;
  DAT_5cc982f4 = FUN_5cc4c830(0);
  DAT_5cc98570 = 100;
  DAT_5cc98564 = GetModuleHandleA((LPCSTR)0x0);
  _DAT_5cc98568 = 0;
  _DAT_5cc98574 = 0;
  FUN_5cc6a0e0();
  FUN_5cc69970(1);
  iVar1 = FUN_5cc4e540();
  if (-1 < iVar1) {
    iVar1 = FUN_5cc4dd00(&DAT_5cc98300,param_1,0,0);
    if (-1 < iVar1) {
      FUN_5cc4e550(DAT_5cc98300,&PTR_s_The_reason_for_the_error_could_n_5cc96e20,0x1a8,4000);
      FUN_5cc4ded0((uint *)0x0,0);
    }
  }
  FUN_5cc6aef0();
  return -1 < iVar1;
}


