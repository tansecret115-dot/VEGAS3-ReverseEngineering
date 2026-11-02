/* Module: mcplug.dll
   Function: FUN_0041af60
   Address: 0041af60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0041af60(HMODULE param_1)

{
  int iVar1;
  
  FUN_0043a390();
  FUN_0043a3a0();
  DAT_00487eb0 = FUN_0041a740();
  DAT_00487ed0 = param_1;
  DAT_00487ecc = FUN_0041ae30(0);
  _DAT_00488148 = 100;
  _DAT_0048813c = GetModuleHandleA((LPCSTR)0x0);
  _DAT_00488140 = 0;
  _DAT_0048814c = 0;
  FUN_00437d60();
  FUN_00439710(1);
  iVar1 = FUN_0041a000();
  if (-1 < iVar1) {
    iVar1 = FUN_004197c0(&DAT_00487ed8,param_1,0,0);
    if (-1 < iVar1) {
      FUN_0041a010(DAT_00487ed8,&PTR_s_The_reason_for_the_error_could_n_00486788,0x1a9,4000);
      FUN_00419990((uint *)0x0,0);
    }
  }
  FUN_0043a3b0();
  return -1 < iVar1;
}


